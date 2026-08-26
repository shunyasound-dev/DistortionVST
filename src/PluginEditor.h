#pragma once

#include <juce_audio_processors/juce_audio_processors.h>
#include <juce_audio_utils/juce_audio_utils.h>

#include "PluginProcessor.h"

class DistortionVSTAudioProcessorEditor
    : public juce::AudioProcessorEditor
{
public:

    explicit DistortionVSTAudioProcessorEditor(
        DistortionVSTAudioProcessor&);

    ~DistortionVSTAudioProcessorEditor() override;

    void paint(juce::Graphics&) override;

    void resized() override;

private:

    DistortionVSTAudioProcessor& audioProcessor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(
        DistortionVSTAudioProcessorEditor
    );
};