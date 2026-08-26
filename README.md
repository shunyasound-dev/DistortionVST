# DistortionVST

A simple but powerful distortion VST3 audio effect.

## Core philosophy

The plugin should have very few controls. (Drive, Tone, Character, Bias)
Controls should have large, obvious sonic/visual consequences.

## Drive

Drive is the primary distortion control.

Drive = 0:
- completely dry
- no tone processing
- no distortion
- no gain compensation
- signal should pass through unchanged

Increasing Drive:
- progressively increases distortion intensity
- should not primarily increase perceived loudness

There is NO Dry/Wet control.

## Current mode

First mode: Wavefolder.

We are currently focusing exclusively on getting
a good wavefolder working before adding other distortion modes.

## Planned architecture

Input
→ pre-distortion tone shaping
→ Drive / waveshaping
→ automatic gain compensation (Drive slider/fader)
→ output

## Future modes

The distortion system should be designed so that
new distortion algorithms can be added easily or edited.

Possible future modes:
- Wavefolder
- Soft clip
- Hard clip
- Rectifier
- Bitcrush
- etc.

## UI

Visually striking.
Each distortion mode has:
- unique color/texture
- simple identifier symbol
- eventually reactive visual feedback

Controls will primarily be slides/faders rather than knobs.

## Current development goal

Get the simplest possible JUCE 9.0.1
input → output VST3 plugin compiling and running.