#include "PluginProcessor.h"
#include "PluginEditor.h"

DistortionVSTAudioProcessor::DistortionVSTAudioProcessor()
{
}

DistortionVSTAudioProcessor::~DistortionVSTAudioProcessor()
{
}

const juce::String
DistortionVSTAudioProcessor::getName() const
{
    return "DistortionVST";
}

bool
DistortionVSTAudioProcessor::acceptsMidi() const
{
    return false;
}

bool
DistortionVSTAudioProcessor::producesMidi() const
{
    return false;
}

bool
DistortionVSTAudioProcessor::isMidiEffect() const
{
    return false;
}

double
DistortionVSTAudioProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int
DistortionVSTAudioProcessor::getNumPrograms()
{
    return 1;
}

int
DistortionVSTAudioProcessor::getCurrentProgram()
{
    return 0;
}

void
DistortionVSTAudioProcessor::setCurrentProgram(int index)
{
}

const juce::String
DistortionVSTAudioProcessor::getProgramName(int index)
{
    return {};
}

void
DistortionVSTAudioProcessor::changeProgramName(
    int index,
    const juce::String& newName)
{
}

void
DistortionVSTAudioProcessor::prepareToPlay(
    double sampleRate,
    int samplesPerBlock)
{
}

void
DistortionVSTAudioProcessor::releaseResources()
{
}

void
DistortionVSTAudioProcessor::processBlock(
    juce::AudioBuffer<float>& buffer,
    juce::MidiBuffer& midiMessages)
{
    // For now, do nothing.
    //
    // The incoming audio stays unchanged.
}

bool
DistortionVSTAudioProcessor::hasEditor() const
{
    return true;
}

juce::AudioProcessorEditor* DistortionVSTAudioProcessor::createEditor()
{
    return new DistortionVSTAudioProcessorEditor(*this);
}

juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new DistortionVSTAudioProcessor();
}

void
DistortionVSTAudioProcessor::getStateInformation(
    juce::MemoryBlock& destData)
{
}

void
DistortionVSTAudioProcessor::setStateInformation(
    const void* data,
    int sizeInBytes)
{
}
