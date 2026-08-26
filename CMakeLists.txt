cmake_minimum_required(VERSION 3.22)

project(DistortionVST VERSION 0.1.0)

# Find JUCE
add_subdirectory("C:/Users/Miguel/Documents/JUCE" JUCE)

set(SourceFiles 
              src/PluginProcessor.cpp
              src/PluginProcessor.h
              src/PluginEditor.cpp
              src/PluginEditor.h
)

# Create the plugin
juce_add_plugin( ${PROJECT_NAME} 

    COMPANY_NAME "SHUNYA"

    PLUGIN_MANUFACTURER_CODE Your

    PLUGIN_CODE Dist

    PRODUCT_NAME "DistortionVST"

    FORMATS VST3 Standalone

    IS_SYNTH FALSE

    NEEDS_MIDI_INPUT FALSE
    NEEDS_MIDI_OUTPUT FALSE
    IS_MIDI_EFFECT FALSE

    EDITOR_WANTS_KEYBOARD_FOCUS FALSE

# Copy the VST3 to C:\Program Files\Common Files\VST3 
# Might give ppermission issues
    COPY_PLUGIN_AFTER_BUILD FALSE
)


# Our C++ source
target_sources( ${PROJECT_NAME} PRIVATE ${SourceFiles} )

# JUCE modules
target_link_libraries(${PROJECT_NAME}
    PRIVATE
        juce::juce_audio_processors
        juce::juce_audio_utils
)

target_compile_definitions(${PROJECT_NAME}
    PRIVATE
        JUCE_VST3_CAN_REPLACE_VST2=0
)

juce_generate_juce_header(${PROJECT_NAME})