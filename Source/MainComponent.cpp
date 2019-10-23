/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    addAndMakeVisible(genderLabel);
    genderLabel.setText("I identify my gender as...", dontSendNotification);
    
    addAndMakeVisible(maleButton);
    maleButton.setButtonText("Male");
    maleButton.setClickingTogglesState(true);
    maleButton.setRadioGroupId(GenderButtons);
    maleButton.onClick = [this] { updateToggleState(&maleButton, "Male"); };
    
    addAndMakeVisible(femaleButton);
    femaleButton.setButtonText("Female");
    femaleButton.setClickingTogglesState(true);
    femaleButton.setRadioGroupId(GenderButtons);
    femaleButton.onClick = [this] { updateToggleState(&femaleButton, "Female"); };
    
    addAndMakeVisible(otherButton);
    otherButton.setButtonText("Other");
    otherButton.setClickingTogglesState(true);
    otherButton.setRadioGroupId(GenderButtons);
    otherButton.onClick = [this] { updateToggleState(&otherButton, "Other"); };
    
    addAndMakeVisible(hobbiesLabel);
    hobbiesLabel.setText("My hobbies are...", dontSendNotification);
    
    addAndMakeVisible(sportButton);
    sportButton.setButtonText("Sport");
    sportButton.setClickingTogglesState(true);
    sportButton.onClick = [this] { updateToggleState(&sportButton, "Sport"); };
    
    addAndMakeVisible(artButton);
    artButton.setButtonText("Art");
    artButton.setClickingTogglesState(true);
    artButton.onClick = [this] { updateToggleState(&artButton, "Art"); };
    
    addAndMakeVisible(filmButton);
    filmButton.setButtonText("Film");
    filmButton.setClickingTogglesState(true);
    filmButton.onClick = [this] { updateToggleState(&filmButton, "Film"); };
    
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
}

void MainComponent::resized()
{
    genderLabel.setBounds(10, 10, getWidth() - 20, 30);
    maleButton.setBounds(20, 50, getWidth() - 40, 30);
    femaleButton.setBounds(20, 90, getWidth() - 40, 30);
    otherButton.setBounds(20, 130, getWidth() - 40, 30);
    hobbiesLabel.setBounds(10, 180, getWidth() - 20, 30);
    sportButton.setBounds(20, 220, getWidth() - 40, 30);
    artButton.setBounds(20, 260, getWidth() - 40, 30);
    filmButton.setBounds(20, 300, getWidth() - 40, 30);
}

void MainComponent::updateToggleState (Button* button, String name)
{
    auto state = button->getToggleState();
    String stateString = state ? "ON" : "OFF";
    String selectedString = state ? " (selected)" : "";
    
    Logger::outputDebugString (name + " Button changed to " + stateString);
    button->setButtonText(name + selectedString);
}
