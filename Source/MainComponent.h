/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent   : public Component
{
public:
    enum RadioButtonIds
    {
        GenderButtons = 1001
    };
    
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;
    
    void updateToggleState (Button*, String);


private:
    Label genderLabel, hobbiesLabel;
    //ToggleButton maleButton, femaleButton, otherButton, sportButton, artButton, filmButton;
    TextButton maleButton, femaleButton, otherButton, sportButton, artButton, filmButton;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
