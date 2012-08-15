package org.jsfml.audio;


import org.jsfml.NotNull;
import org.jsfml.SFMLNativeObject;
import org.jsfml.StreamUtil;
import org.jsfml.UnsafeOperations;
import org.jsfml.system.Time;

import java.io.File;
import java.io.IOException;
import java.io.InputStream;

/**
 * Storage for audio samples defining a sound.
 */
public class SoundBuffer extends SFMLNativeObject {
    static {
        //TODO add audio device shutdown hook
    }

    /**
     * Creates a sound buffer.
     */
    public SoundBuffer() {
        super();
    }

    @SuppressWarnings("deprecation")
    SoundBuffer(long wrap) {
        super(wrap);
    }

    /**
     * Creates a sound buffer from another sound buffer.
     *
     * @param other The sound buffer to copy.
     */
    @SuppressWarnings("deprecation")
    public SoundBuffer(SoundBuffer other) {
        super(other.nativeCopy());
        UnsafeOperations.manageSFMLObject(this, true);
    }

    @Override
    protected native long nativeCreate();

    @Override
    protected native void nativeDelete();

    private native long nativeCopy();

    private native boolean nativeLoadFromMemory(byte[] memory);

    /**
     * Fully loads all available bytes from an {@link java.io.InputStream} and attempts to load
     * the sound buffer from it.
     *
     * @param in The input stream to read from.
     * @throws java.io.IOException In case an I/O error occurs.
     */
    public void loadFromStream(InputStream in) throws IOException {
        if (!nativeLoadFromMemory(StreamUtil.readStream(in)))
            throw new IOException("Failed to load sound buffer from input stream.");
    }

    /**
     * Attempts to load the sound buffer from a file.
     *
     * @param file The file to load the sound buffer from.
     * @throws IOException In case an I/O error occurs.
     */
    public void loadFromFile(File file) throws IOException {
        if (!nativeLoadFromMemory(StreamUtil.readFile(file)))
            throw new IOException("Failed to load sound buffer from file: " + file);
    }

    private native boolean nativeLoadFromSamples(short[] samples, int channelCount, int sampleRate);

    /**
     * Attempts to load the sound buffer from an array of raw audio samples.
     *
     * @param samples      The samples data.
     * @param channelCount The amount of audio channels.
     * @param sampleRate   The sample rate in samples per second.
     * @throws java.io.IOException In case an I/O error occurs.
     */
    public void loadFromSamples(@NotNull short[] samples, int channelCount, int sampleRate)
            throws IOException {
        if (samples == null)
            throw new NullPointerException("samples must not be null");

        if (!nativeLoadFromSamples(samples, channelCount, sampleRate))
            throw new IOException("Failed to load sound buffer from samples.");
    }

    private native boolean nativeSaveToFile(String fileName);

    /**
     * Attempts to save the sound buffer to a file.
     *
     * @param file The file to write.
     * @return <tt>true</tt> if the sound buffer was saved successfully, <tt>false</tt> otherwise.
     */
    public boolean saveToFile(@NotNull File file) {
        if (file == null)
            throw new NullPointerException("file must not be null");

        return nativeSaveToFile(file.getAbsolutePath());
    }

    /**
     * Retrieves the raw audio samples stored in the buffer.
     *
     * @return The raw audio samples stored in the buffer.
     */
    public native short[] getSamples();

    /**
     * Retrieves the amount of samples stored in the buffer.
     *
     * @return The amount of samples stored in the buffer.
     */
    public native int getSampleCount();

    /**
     * Gets the sound buffer's sample rate.
     *
     * @return The sound buffer's sample rate in samples per second.
     */
    public native int getSampleRate();

    /**
     * Gets the amount of audio channels in the buffer.
     *
     * @return The amount of audio channels in the buffer.
     */
    public native int getChannelCount();

    /**
     * Gets the duration of the sound.
     *
     * @return The duration of the sound in milliseconds.
     */
    public native Time getDuration();
}
