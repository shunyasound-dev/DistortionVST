#include "PluginEditor.h"

DistortionVSTAudioProcessorEditor::
DistortionVSTAudioProcessorEditor(
    DistortionVSTAudioProcessor& p)
    : AudioProcessorEditor(&p),
      audioProcessor(p)
{
    setSize(500, 300);
}

DistortionVSTAudioProcessorEditor::
~DistortionVSTAudioProcessorEditor()
{
}

void
DistortionVSTAudioProcessorEditor::paint(
    juce::Graphics& g)
{
    g.fillAll(juce::Colours::black);

    g.setColour(juce::Colours::white);

    g.setFont(30.0f);

    g.drawText(
        "DISTORTION VST",
        getLocalBounds(),
        juce::Justification::centred
    );
}

void
DistortionVSTAudioProcessorEditor::resized()
{
}