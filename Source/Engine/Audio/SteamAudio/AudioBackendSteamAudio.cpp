/*

    File name: AudioBackendSteamAudio.cpp
    Purpose: to help intergrate steam audio into flax
    Implemeneted by Auzlex
    Status: WIP

*/

#if AUDIO_API_STEAMAUDIO

#include "AudioBackendSteamAudio.h"
#include "Engine/Audio/AudioSettings.h"
#include "Engine/Core/Collections/Array.h"
#include "Engine/Core/Log.h"
#include "Engine/Audio/Audio.h"
#include "Engine/Audio/AudioSource.h"
#include "Engine/Audio/AudioListener.h"

// include the steam audio
#include <Engine/Audio/SteamAudio/include/phonon.h>

namespace SteamAudio
{
    struct Listener
    {
        AudioListener* AudioListener;

        Listener()
        {
            Init();
        }

        void Init()
        {
            AudioListener = nullptr;

            // TODO: setup audio parameters
        }

        bool IsFree() const
        {
            return AudioListener == nullptr;
        }

        void UpdateTransform()
        {
            const Vector3& position = AudioListener->GetPosition();
            const Quaternion& orientation = AudioListener->GetOrientation();
            const Vector3 front = orientation * Vector3::Forward;
            const Vector3 top = orientation * Vector3::Up;

            // TODO
        }

        void UpdateVelocity()
        {
            const Vector3& velocity = AudioListener->GetVelocity();

            // TODO
        }
    };
}

void AudioBackendSteamAudio::Listener_OnAdd(AudioListener* listener)
{
    // TODO
}

void AudioBackendSteamAudio::Listener_OnRemove(AudioListener* listener)
{
    // TODO
}

void AudioBackendSteamAudio::Listener_VelocityChanged(AudioListener* listener)
{
    // TODO
}

void AudioBackendSteamAudio::Listener_TransformChanged(AudioListener* listener)
{
    // TODO
}

void AudioBackendSteamAudio::Source_OnAdd(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_OnRemove(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_VelocityChanged(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_TransformChanged(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_VolumeChanged(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_PitchChanged(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_IsLoopingChanged(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_MinDistanceChanged(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_AttenuationChanged(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_ClipLoaded(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_Cleanup(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_Play(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_Pause(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_Stop(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_SetCurrentBufferTime(AudioSource* source, float value)
{
    // TODO
}

float AudioBackendSteamAudio::Source_GetCurrentBufferTime(const AudioSource* source)
{
    // TODO
    return 0.0f;
}

void AudioBackendSteamAudio::Source_SetNonStreamingBuffer(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Source_GetProcessedBuffersCount(AudioSource* source, int32& processedBuffersCount)
{
    // TODO
}

void AudioBackendSteamAudio::Source_GetQueuedBuffersCount(AudioSource* source, int32& queuedBuffersCount)
{
    // TODO
}

void AudioBackendSteamAudio::Source_QueueBuffer(AudioSource* source, uint32 bufferId)
{
    // TODO
}

void AudioBackendSteamAudio::Source_DequeueProcessedBuffers(AudioSource* source)
{
    // TODO
}

void AudioBackendSteamAudio::Buffer_Create(uint32& bufferId)
{
    // TODO
}

void AudioBackendSteamAudio::Buffer_Delete(uint32& bufferId)
{
    // TODO
}

void AudioBackendSteamAudio::Buffer_Write(uint32 bufferId, byte* samples, const AudioDataInfo& info)
{
    // TODO
}

const Char* AudioBackendSteamAudio::Base_Name()
{
    // TODO
    return nullptr;
}

void AudioBackendSteamAudio::Base_OnActiveDeviceChanged()
{
    // TODO
}

void AudioBackendSteamAudio::Base_SetDopplerFactor(float value)
{
    // TODO
}

void AudioBackendSteamAudio::Base_SetVolume(float value)
{
    // TODO
}

bool AudioBackendSteamAudio::Base_Init()
{
    // TODO
    return false;
}

void AudioBackendSteamAudio::Base_Update()
{
    // TODO
}

void AudioBackendSteamAudio::Base_Dispose()
{
    // TODO
}

#endif


