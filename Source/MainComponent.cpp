/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"


//==============================================================================
MainContentComponent::MainContentComponent()
:formatManager(), reader(), transport()
{
    formatManager.registerBasicFormats();
    reader = formatManager.createReaderFor(File("~/Documents/03_Borders.wav"));
    source = new AudioFormatReaderSource(reader, true);
    transport.setSource(source);
    cursor = new TimelineCursor(transport);
    setSize (600, 400);
    addAndMakeVisible(cursor);
}

MainContentComponent::~MainContentComponent()
{
    formatManager.clearFormats();
    delete reader;
    delete source;
    delete cursor;
}

void MainContentComponent::paint (Graphics& g)
{
    g.fillAll (Colour (0xff001F36));

    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
}

void MainContentComponent::resized()
{
    cursor->setSize(600, 400);
}
