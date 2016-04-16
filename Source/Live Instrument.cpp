/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 4.2.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "Live Instrument.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
LiveInstrument::LiveInstrument ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    cachedImage_rectangle1_png_1 = ImageCache::getFromMemory (rectangle1_png, rectangle1_pngSize);
    cachedImage_pmAppBackground_png_2 = ImageCache::getFromMemory (pmAppBackground_png, pmAppBackground_pngSize);
    cachedImage_menualt512_png_3 = ImageCache::getFromMemory (menualt512_png, menualt512_pngSize);
    cachedImage_roundedRectangle1_png_4 = ImageCache::getFromMemory (roundedRectangle1_png, roundedRectangle1_pngSize);
    cachedImage_syncedTo_ChrissMacbook_png_5 = ImageCache::getFromMemory (syncedTo_ChrissMacbook_png, syncedTo_ChrissMacbook_pngSize);
    cachedImage_tab_png_6 = ImageCache::getFromMemory (tab_png, tab_pngSize);
    cachedImage_backArrowCopy4_png_7 = ImageCache::getFromMemory (backArrowCopy4_png, backArrowCopy4_pngSize);
    cachedImage_dialogBackground_png_8 = ImageCache::getFromMemory (dialogBackground_png, dialogBackground_pngSize);
    cachedImage_fxSelectionBackgroundCopy2_png_9 = ImageCache::getFromMemory (fxSelectionBackgroundCopy2_png, fxSelectionBackgroundCopy2_pngSize);
    cachedImage_fxSelectionBackgroundCopy2_png_10 = ImageCache::getFromMemory (fxSelectionBackgroundCopy2_png, fxSelectionBackgroundCopy2_pngSize);
    cachedImage_bg_png_11 = ImageCache::getFromMemory (bg_png, bg_pngSize);
    cachedImage_bg_png_12 = ImageCache::getFromMemory (bg_png, bg_pngSize);
    cachedImage_bg_png_13 = ImageCache::getFromMemory (bg_png, bg_pngSize);
    cachedImage_bg_png_14 = ImageCache::getFromMemory (bg_png, bg_pngSize);
    cachedImage_bg_png_15 = ImageCache::getFromMemory (bg_png, bg_pngSize);
    cachedImage_bg_png_16 = ImageCache::getFromMemory (bg_png, bg_pngSize);
    cachedImage_bg_png_17 = ImageCache::getFromMemory (bg_png, bg_pngSize);
    cachedImage_progress_png_18 = ImageCache::getFromMemory (progress_png, progress_pngSize);
    cachedImage_progressKopia_png_19 = ImageCache::getFromMemory (progressKopia_png, progressKopia_pngSize);
    cachedImage_progress_png_20 = ImageCache::getFromMemory (progress_png, progress_pngSize);
    cachedImage_progress_png_21 = ImageCache::getFromMemory (progress_png, progress_pngSize);
    cachedImage_progress_png_22 = ImageCache::getFromMemory (progress_png, progress_pngSize);
    cachedImage_progress_png_23 = ImageCache::getFromMemory (progress_png, progress_pngSize);
    cachedImage_progress_png_24 = ImageCache::getFromMemory (progress_png, progress_pngSize);
    cachedImage_progress_png_25 = ImageCache::getFromMemory (progress_png, progress_pngSize);
    cachedImage_progressKopia_png_26 = ImageCache::getFromMemory (progressKopia_png, progressKopia_pngSize);
    cachedImage_progressKopia_png_27 = ImageCache::getFromMemory (progressKopia_png, progressKopia_pngSize);
    cachedImage_progressKopia_png_28 = ImageCache::getFromMemory (progressKopia_png, progressKopia_pngSize);
    cachedImage_progressKopia_png_29 = ImageCache::getFromMemory (progressKopia_png, progressKopia_pngSize);
    cachedImage_progressKopia_png_30 = ImageCache::getFromMemory (progressKopia_png, progressKopia_pngSize);
    cachedImage_progressKopia_png_31 = ImageCache::getFromMemory (progressKopia_png, progressKopia_pngSize);
    cachedImage_head_png_32 = ImageCache::getFromMemory (head_png, head_pngSize);
    cachedImage_head_png_33 = ImageCache::getFromMemory (head_png, head_pngSize);
    cachedImage_head_png_34 = ImageCache::getFromMemory (head_png, head_pngSize);
    cachedImage_head_png_35 = ImageCache::getFromMemory (head_png, head_pngSize);
    cachedImage_head_png_36 = ImageCache::getFromMemory (head_png, head_pngSize);
    cachedImage_head_png_37 = ImageCache::getFromMemory (head_png, head_pngSize);
    cachedImage_head_png_38 = ImageCache::getFromMemory (head_png, head_pngSize);
    cachedImage_eq_png_39 = ImageCache::getFromMemory (eq_png, eq_pngSize);
    cachedImage_fxSelectionBackgroundCopy_png_40 = ImageCache::getFromMemory (fxSelectionBackgroundCopy_png, fxSelectionBackgroundCopy_pngSize);
    cachedImage_compression_png_41 = ImageCache::getFromMemory (compression_png, compression_pngSize);
    cachedImage_gain_png_42 = ImageCache::getFromMemory (gain_png, gain_pngSize);
    cachedImage_rectangle20Copy_png_43 = ImageCache::getFromMemory (rectangle20Copy_png, rectangle20Copy_pngSize);
    cachedImage_rectangle20_png_44 = ImageCache::getFromMemory (rectangle20_png, rectangle20_pngSize);
    cachedImage_tunerDroplets_png_45 = ImageCache::getFromMemory (tunerDroplets_png, tunerDroplets_pngSize);
    cachedImage_tuner_png_46 = ImageCache::getFromMemory (tuner_png, tuner_pngSize);
    cachedImage_tunerDroplets_png_47 = ImageCache::getFromMemory (tunerDroplets_png, tunerDroplets_pngSize);
    cachedImage_tuner_png_48 = ImageCache::getFromMemory (tuner_png, tuner_pngSize);
    cachedImage_input_png_49 = ImageCache::getFromMemory (input_png, input_pngSize);
    cachedImage_output_png_50 = ImageCache::getFromMemory (output_png, output_pngSize);
    cachedImage_fx_png_51 = ImageCache::getFromMemory (fx_png, fx_pngSize);

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    //[/Constructor]
}

LiveInstrument::~LiveInstrument()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]



    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void LiveInstrument::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    g.setColour (Colours::black);
    g.drawImage (cachedImage_rectangle1_png_1,
                 -20, -4, 404, 644,
                 0, 0, cachedImage_rectangle1_png_1.getWidth(), cachedImage_rectangle1_png_1.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_pmAppBackground_png_2,
                 -20, 4, 400, 576,
                 0, 0, cachedImage_pmAppBackground_png_2.getWidth(), cachedImage_pmAppBackground_png_2.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_menualt512_png_3,
                 332, 12, 37, 27,
                 0, 0, cachedImage_menualt512_png_3.getWidth(), cachedImage_menualt512_png_3.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_roundedRectangle1_png_4,
                 68, 18, 241, 19,
                 0, 0, cachedImage_roundedRectangle1_png_4.getWidth(), cachedImage_roundedRectangle1_png_4.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_syncedTo_ChrissMacbook_png_5,
                 72, 22, 232, 15,
                 0, 0, cachedImage_syncedTo_ChrissMacbook_png_5.getWidth(), cachedImage_syncedTo_ChrissMacbook_png_5.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_tab_png_6,
                 84, 92, 234, 33,
                 0, 0, cachedImage_tab_png_6.getWidth(), cachedImage_tab_png_6.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_backArrowCopy4_png_7,
                 52, 92, 21, 15,
                 0, 0, cachedImage_backArrowCopy4_png_7.getWidth(), cachedImage_backArrowCopy4_png_7.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_dialogBackground_png_8,
                 44, 116, 303, 391,
                 0, 0, cachedImage_dialogBackground_png_8.getWidth(), cachedImage_dialogBackground_png_8.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_fxSelectionBackgroundCopy2_png_9,
                 68, 380, 251, 108,
                 0, 0, cachedImage_fxSelectionBackgroundCopy2_png_9.getWidth(), cachedImage_fxSelectionBackgroundCopy2_png_9.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_fxSelectionBackgroundCopy2_png_10,
                 68, 140, 251, 108,
                 0, 0, cachedImage_fxSelectionBackgroundCopy2_png_10.getWidth(), cachedImage_fxSelectionBackgroundCopy2_png_10.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_bg_png_11,
                 116, 382, 4, 105,
                 0, 0, cachedImage_bg_png_11.getWidth(), cachedImage_bg_png_11.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_bg_png_12,
                 148, 382, 4, 105,
                 0, 0, cachedImage_bg_png_12.getWidth(), cachedImage_bg_png_12.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_bg_png_13,
                 172, 382, 4, 105,
                 0, 0, cachedImage_bg_png_13.getWidth(), cachedImage_bg_png_13.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_bg_png_14,
                 204, 382, 4, 105,
                 0, 0, cachedImage_bg_png_14.getWidth(), cachedImage_bg_png_14.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_bg_png_15,
                 228, 382, 4, 105,
                 0, 0, cachedImage_bg_png_15.getWidth(), cachedImage_bg_png_15.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_bg_png_16,
                 252, 382, 4, 105,
                 0, 0, cachedImage_bg_png_16.getWidth(), cachedImage_bg_png_16.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_bg_png_17,
                 284, 382, 4, 105,
                 0, 0, cachedImage_bg_png_17.getWidth(), cachedImage_bg_png_17.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progress_png_18,
                 114, 420, 7, 66,
                 0, 0, cachedImage_progress_png_18.getWidth(), cachedImage_progress_png_18.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progressKopia_png_19,
                 114, 422, 7, 64,
                 0, 0, cachedImage_progressKopia_png_19.getWidth(), cachedImage_progressKopia_png_19.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progress_png_20,
                 170, 440, 3, 46,
                 0, 0, cachedImage_progress_png_20.getWidth(), cachedImage_progress_png_20.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progress_png_21,
                 202, 448, 3, 38,
                 0, 0, cachedImage_progress_png_21.getWidth(), cachedImage_progress_png_21.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progress_png_22,
                 226, 420, 3, 66,
                 0, 0, cachedImage_progress_png_22.getWidth(), cachedImage_progress_png_22.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progress_png_23,
                 250, 440, 3, 46,
                 0, 0, cachedImage_progress_png_23.getWidth(), cachedImage_progress_png_23.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progress_png_24,
                 282, 420, 3, 66,
                 0, 0, cachedImage_progress_png_24.getWidth(), cachedImage_progress_png_24.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progress_png_25,
                 148, 448, 3, 38,
                 0, 0, cachedImage_progress_png_25.getWidth(), cachedImage_progress_png_25.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progressKopia_png_26,
                 146, 440, 7, 44,
                 0, 0, cachedImage_progressKopia_png_26.getWidth(), cachedImage_progressKopia_png_26.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progressKopia_png_27,
                 170, 440, 6, 46,
                 0, 0, cachedImage_progressKopia_png_27.getWidth(), cachedImage_progressKopia_png_27.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progressKopia_png_28,
                 202, 448, 7, 38,
                 0, 0, cachedImage_progressKopia_png_28.getWidth(), cachedImage_progressKopia_png_28.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progressKopia_png_29,
                 226, 422, 7, 64,
                 0, 0, cachedImage_progressKopia_png_29.getWidth(), cachedImage_progressKopia_png_29.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progressKopia_png_30,
                 250, 440, 6, 46,
                 0, 0, cachedImage_progressKopia_png_30.getWidth(), cachedImage_progressKopia_png_30.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_progressKopia_png_31,
                 282, 422, 6, 64,
                 0, 0, cachedImage_progressKopia_png_31.getWidth(), cachedImage_progressKopia_png_31.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_head_png_32,
                 108, 412, 18, 15,
                 0, 0, cachedImage_head_png_32.getWidth(), cachedImage_head_png_32.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_head_png_33,
                 140, 428, 18, 15,
                 0, 0, cachedImage_head_png_33.getWidth(), cachedImage_head_png_33.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_head_png_34,
                 164, 436, 18, 15,
                 0, 0, cachedImage_head_png_34.getWidth(), cachedImage_head_png_34.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_head_png_35,
                 196, 444, 18, 15,
                 0, 0, cachedImage_head_png_35.getWidth(), cachedImage_head_png_35.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_head_png_36,
                 220, 412, 18, 15,
                 0, 0, cachedImage_head_png_36.getWidth(), cachedImage_head_png_36.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_head_png_37,
                 244, 436, 18, 15,
                 0, 0, cachedImage_head_png_37.getWidth(), cachedImage_head_png_37.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_head_png_38,
                 276, 412, 18, 15,
                 0, 0, cachedImage_head_png_38.getWidth(), cachedImage_head_png_38.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_eq_png_39,
                 76, 388, 15, 12,
                 0, 0, cachedImage_eq_png_39.getWidth(), cachedImage_eq_png_39.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_fxSelectionBackgroundCopy_png_40,
                 68, 268, 251, 89,
                 0, 0, cachedImage_fxSelectionBackgroundCopy_png_40.getWidth(), cachedImage_fxSelectionBackgroundCopy_png_40.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_compression_png_41,
                 180, 276, 129, 21,
                 0, 0, cachedImage_compression_png_41.getWidth(), cachedImage_compression_png_41.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_gain_png_42,
                 92, 276, 50, 17,
                 0, 0, cachedImage_gain_png_42.getWidth(), cachedImage_gain_png_42.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_rectangle20Copy_png_43,
                 180, 156, 121, 21,
                 0, 0, cachedImage_rectangle20Copy_png_43.getWidth(), cachedImage_rectangle20Copy_png_43.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_rectangle20_png_44,
                 180, 204, 121, 21,
                 0, 0, cachedImage_rectangle20_png_44.getWidth(), cachedImage_rectangle20_png_44.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_tunerDroplets_png_45,
                 220, 300, 61, 31,
                 0, 0, cachedImage_tunerDroplets_png_45.getWidth(), cachedImage_tunerDroplets_png_45.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_tuner_png_46,
                 228, 308, 41, 47,
                 0, 0, cachedImage_tuner_png_46.getWidth(), cachedImage_tuner_png_46.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_tunerDroplets_png_47,
                 92, 300, 61, 31,
                 0, 0, cachedImage_tunerDroplets_png_47.getWidth(), cachedImage_tunerDroplets_png_47.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_tuner_png_48,
                 100, 308, 41, 47,
                 0, 0, cachedImage_tuner_png_48.getWidth(), cachedImage_tuner_png_48.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_input_png_49,
                 92, 156, 58, 21,
                 0, 0, cachedImage_input_png_49.getWidth(), cachedImage_input_png_49.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_output_png_50,
                 92, 204, 76, 20,
                 0, 0, cachedImage_output_png_50.getWidth(), cachedImage_output_png_50.getHeight());

    g.setColour (Colours::black);
    g.drawImage (cachedImage_fx_png_51,
                 108, 95, 190, 17,
                 0, 0, cachedImage_fx_png_51.getWidth(), cachedImage_fx_png_51.getHeight());

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void LiveInstrument::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="LiveInstrument" componentName=""
                 parentClasses="public Component" constructorParams="" variableInitialisers=""
                 snapPixels="8" snapActive="1" snapShown="1" overlayOpacity="0.330"
                 fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff">
    <IMAGE pos="-20 -4 404 644" resource="rectangle1_png" opacity="1" mode="0"/>
    <IMAGE pos="-20 4 400 576" resource="pmAppBackground_png" opacity="1"
           mode="0"/>
    <IMAGE pos="332 12 37 27" resource="menualt512_png" opacity="1" mode="0"/>
    <IMAGE pos="68 18 241 19" resource="roundedRectangle1_png" opacity="1"
           mode="0"/>
    <IMAGE pos="72 22 232 15" resource="syncedTo_ChrissMacbook_png" opacity="1"
           mode="0"/>
    <IMAGE pos="84 92 234 33" resource="tab_png" opacity="1" mode="0"/>
    <IMAGE pos="52 92 21 15" resource="backArrowCopy4_png" opacity="1" mode="0"/>
    <IMAGE pos="44 116 303 391" resource="dialogBackground_png" opacity="1"
           mode="0"/>
    <IMAGE pos="68 380 251 108" resource="fxSelectionBackgroundCopy2_png"
           opacity="1" mode="0"/>
    <IMAGE pos="68 140 251 108" resource="fxSelectionBackgroundCopy2_png"
           opacity="1" mode="0"/>
    <IMAGE pos="116 382 4 105" resource="bg_png" opacity="1" mode="0"/>
    <IMAGE pos="148 382 4 105" resource="bg_png" opacity="1" mode="0"/>
    <IMAGE pos="172 382 4 105" resource="bg_png" opacity="1" mode="0"/>
    <IMAGE pos="204 382 4 105" resource="bg_png" opacity="1" mode="0"/>
    <IMAGE pos="228 382 4 105" resource="bg_png" opacity="1" mode="0"/>
    <IMAGE pos="252 382 4 105" resource="bg_png" opacity="1" mode="0"/>
    <IMAGE pos="284 382 4 105" resource="bg_png" opacity="1" mode="0"/>
    <IMAGE pos="114 420 7 66" resource="progress_png" opacity="1" mode="0"/>
    <IMAGE pos="114 422 7 64" resource="progressKopia_png" opacity="1" mode="0"/>
    <IMAGE pos="170 440 3 46" resource="progress_png" opacity="1" mode="0"/>
    <IMAGE pos="202 448 3 38" resource="progress_png" opacity="1" mode="0"/>
    <IMAGE pos="226 420 3 66" resource="progress_png" opacity="1" mode="0"/>
    <IMAGE pos="250 440 3 46" resource="progress_png" opacity="1" mode="0"/>
    <IMAGE pos="282 420 3 66" resource="progress_png" opacity="1" mode="0"/>
    <IMAGE pos="148 448 3 38" resource="progress_png" opacity="1" mode="0"/>
    <IMAGE pos="146 440 7 44" resource="progressKopia_png" opacity="1" mode="0"/>
    <IMAGE pos="170 440 6 46" resource="progressKopia_png" opacity="1" mode="0"/>
    <IMAGE pos="202 448 7 38" resource="progressKopia_png" opacity="1" mode="0"/>
    <IMAGE pos="226 422 7 64" resource="progressKopia_png" opacity="1" mode="0"/>
    <IMAGE pos="250 440 6 46" resource="progressKopia_png" opacity="1" mode="0"/>
    <IMAGE pos="282 422 6 64" resource="progressKopia_png" opacity="1" mode="0"/>
    <IMAGE pos="108 412 18 15" resource="head_png" opacity="1" mode="0"/>
    <IMAGE pos="140 428 18 15" resource="head_png" opacity="1" mode="0"/>
    <IMAGE pos="164 436 18 15" resource="head_png" opacity="1" mode="0"/>
    <IMAGE pos="196 444 18 15" resource="head_png" opacity="1" mode="0"/>
    <IMAGE pos="220 412 18 15" resource="head_png" opacity="1" mode="0"/>
    <IMAGE pos="244 436 18 15" resource="head_png" opacity="1" mode="0"/>
    <IMAGE pos="276 412 18 15" resource="head_png" opacity="1" mode="0"/>
    <IMAGE pos="76 388 15 12" resource="eq_png" opacity="1" mode="0"/>
    <IMAGE pos="68 268 251 89" resource="fxSelectionBackgroundCopy_png"
           opacity="1" mode="0"/>
    <IMAGE pos="180 276 129 21" resource="compression_png" opacity="1" mode="0"/>
    <IMAGE pos="92 276 50 17" resource="gain_png" opacity="1" mode="0"/>
    <IMAGE pos="180 156 121 21" resource="rectangle20Copy_png" opacity="1"
           mode="0"/>
    <IMAGE pos="180 204 121 21" resource="rectangle20_png" opacity="1" mode="0"/>
    <IMAGE pos="220 300 61 31" resource="tunerDroplets_png" opacity="1"
           mode="0"/>
    <IMAGE pos="228 308 41 47" resource="tuner_png" opacity="1" mode="0"/>
    <IMAGE pos="92 300 61 31" resource="tunerDroplets_png" opacity="1" mode="0"/>
    <IMAGE pos="100 308 41 47" resource="tuner_png" opacity="1" mode="0"/>
    <IMAGE pos="92 156 58 21" resource="input_png" opacity="1" mode="0"/>
    <IMAGE pos="92 204 76 20" resource="output_png" opacity="1" mode="0"/>
    <IMAGE pos="108 95 190 17" resource="fx_png" opacity="1" mode="0"/>
  </BACKGROUND>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: pmAppBackground_png, 33185, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/PM App Background.png"
static const unsigned char resource_LiveInstrument_pmAppBackground_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,64,0,0,1,194,8,6,0,0,0,158,232,16,121,0,0,32,0,73,68,65,84,120,156,236,
189,249,183,35,87,149,239,249,217,17,210,29,50,111,14,182,211,233,33,141,157,54,120,192,6,202,15,40,67,1,15,48,131,169,194,20,80,80,175,123,245,234,254,161,255,179,254,161,187,223,91,189,250,53,83,149,
121,148,25,76,81,152,114,153,201,184,48,101,192,134,244,144,206,180,157,78,167,115,184,247,74,138,56,187,127,216,17,82,72,10,205,17,138,144,238,249,172,165,204,43,41,134,163,24,190,177,207,222,251,236,
35,238,215,215,81,29,146,188,178,31,41,16,244,47,210,255,71,102,185,204,250,217,229,6,22,237,91,96,240,59,201,91,56,217,174,104,206,178,153,229,187,223,7,12,33,153,237,12,52,161,239,131,81,187,31,181,
221,161,101,7,54,224,98,100,251,16,108,29,2,23,79,94,127,26,36,109,135,216,254,68,122,191,47,221,125,95,59,178,159,243,30,144,123,128,155,166,220,91,4,252,6,213,103,1,232,158,130,129,115,161,218,251,88,
213,254,80,237,125,94,4,65,8,251,215,208,189,107,246,119,223,254,115,150,159,106,223,218,91,121,112,113,29,177,225,190,99,160,249,251,70,1,7,4,3,223,187,156,253,72,127,59,250,190,27,60,206,227,218,164,
3,239,211,253,229,93,212,131,191,57,61,87,131,203,186,156,117,203,163,177,212,189,121,14,10,219,192,123,129,123,81,142,140,184,99,71,209,4,62,10,60,0,252,30,56,11,188,201,178,239,12,207,129,192,11,160,
167,104,62,4,250,23,232,194,215,214,17,224,195,201,107,23,120,13,120,14,120,125,193,237,122,60,93,188,0,122,138,226,46,224,131,192,245,37,108,251,16,240,158,228,245,42,240,12,38,136,30,207,66,120,1,244,
44,202,73,224,47,81,61,181,164,253,221,150,188,158,7,126,134,249,12,61,158,185,240,2,232,153,151,16,248,48,202,95,84,180,255,251,48,33,252,33,190,91,236,153,19,47,128,158,121,184,1,229,17,208,35,21,183,
99,7,248,10,240,20,240,108,197,109,241,172,32,94,0,61,211,99,25,11,119,128,126,161,226,150,12,242,81,204,79,248,84,213,13,241,172,22,94,0,61,179,112,55,232,195,53,77,72,249,0,194,22,240,227,170,27,226,
89,29,188,0,122,166,229,126,84,63,81,117,35,198,162,220,131,217,169,79,84,221,20,207,106,48,197,80,3,207,202,49,56,98,101,113,238,7,234,45,126,61,238,6,62,85,117,35,60,171,129,183,0,215,14,129,56,198,
6,78,164,67,158,22,226,182,218,91,126,195,220,11,250,38,202,239,22,219,140,160,113,76,193,15,19,79,141,240,2,184,110,72,128,118,58,72,20,217,248,213,133,198,198,202,17,224,139,5,136,104,21,124,2,244,26,
202,75,115,173,45,216,88,106,87,79,135,167,167,24,188,0,174,27,130,221,180,81,4,155,97,114,3,207,107,193,232,223,20,216,178,42,248,2,240,127,2,123,51,175,41,1,116,218,16,71,16,120,79,209,186,226,207,236,
58,34,130,182,247,147,174,112,208,43,252,49,219,235,30,148,227,115,174,91,159,23,124,97,222,117,181,19,129,122,11,112,157,241,22,224,58,34,98,221,183,214,190,149,197,154,239,38,254,203,162,155,85,9,202,
73,224,30,224,15,83,175,147,30,63,23,123,235,111,205,241,103,119,93,9,2,52,234,64,220,73,162,194,51,153,77,183,2,135,171,104,118,73,36,65,156,233,205,70,226,120,68,189,58,207,58,225,45,192,181,69,0,135,
182,246,173,64,42,204,16,16,209,143,149,213,170,138,104,96,163,69,38,143,20,73,172,63,109,183,41,40,138,238,169,49,94,0,215,25,9,204,146,105,181,160,185,49,173,0,158,162,156,146,86,85,243,1,224,215,64,
107,228,18,34,137,239,175,109,199,202,27,127,107,143,23,192,117,39,8,208,78,11,9,2,8,27,147,211,58,68,31,90,78,195,170,64,238,6,126,155,251,85,218,219,237,180,237,161,17,4,11,166,16,121,86,1,47,128,7,
129,32,64,59,109,164,59,183,199,168,27,91,78,162,114,227,178,154,85,1,39,115,127,187,98,130,23,59,75,124,22,239,26,63,40,120,1,60,16,72,146,27,216,134,198,198,24,183,150,222,189,204,86,85,192,205,185,
159,38,185,147,26,181,125,183,247,128,225,5,240,160,16,36,195,186,36,30,55,66,100,89,85,157,171,98,7,251,141,103,251,63,22,139,150,43,35,102,9,244,172,43,94,0,15,12,201,84,149,81,52,234,172,223,6,28,95,
106,147,170,225,195,12,10,160,115,150,43,233,197,239,192,225,157,29,7,13,33,25,33,50,196,233,229,54,164,50,110,2,142,246,222,142,154,159,214,115,16,240,22,224,65,101,120,148,195,117,85,53,165,2,110,5,
46,3,190,216,193,1,199,11,224,65,36,53,118,156,203,70,60,215,105,228,199,36,246,123,150,159,231,32,227,5,240,160,163,221,106,49,7,72,0,245,52,54,191,176,159,82,243,128,227,5,240,96,178,1,108,3,155,192,
78,146,254,18,86,219,164,165,114,15,112,7,240,14,86,42,235,34,214,37,190,130,141,20,105,39,159,123,129,92,115,188,0,174,63,59,88,116,247,6,224,58,208,227,40,215,1,205,106,155,85,57,155,216,164,238,96,
98,56,72,27,244,34,240,118,242,74,255,158,189,182,160,167,182,120,1,92,47,182,176,96,198,141,116,5,143,19,195,139,121,223,87,247,16,140,14,254,110,96,137,211,217,228,105,135,9,225,235,192,155,192,133,
228,189,103,69,241,2,184,218,28,194,196,238,38,236,70,61,65,122,78,189,198,141,227,85,224,60,112,2,229,16,112,12,179,8,39,17,96,199,56,251,80,185,138,137,225,89,76,24,223,42,182,169,158,50,241,2,184,90,
52,48,161,187,29,19,189,27,80,157,53,151,115,23,179,90,222,2,46,37,127,43,86,62,254,160,4,66,158,71,228,79,64,26,9,110,96,34,184,131,85,194,57,134,185,13,174,103,242,61,178,147,188,238,76,222,95,197,132,
240,28,38,178,222,66,172,49,94,0,235,207,13,192,45,216,16,174,155,176,110,238,180,92,163,191,171,118,9,115,246,231,37,191,189,2,220,183,80,75,87,7,177,114,87,221,254,111,132,61,16,222,130,190,73,148,182,
232,9,225,245,216,185,184,129,241,247,77,42,136,239,78,222,95,192,196,240,108,242,127,167,152,159,224,41,2,47,128,245,227,4,221,27,78,111,103,250,225,105,23,48,129,187,6,188,13,114,193,254,159,212,25,
238,126,125,117,142,182,174,42,23,45,15,112,226,252,201,251,152,21,119,62,243,217,22,104,218,13,62,130,185,33,174,163,111,116,73,31,233,178,239,7,90,160,231,48,33,124,39,217,110,123,129,223,225,89,16,
47,128,245,224,38,224,61,152,149,119,188,167,73,99,181,235,2,214,213,58,15,188,1,92,233,191,151,167,25,218,213,151,12,124,126,220,146,107,196,101,236,193,0,164,69,79,103,26,6,183,15,188,10,250,106,247,
19,59,132,55,98,150,250,205,88,116,249,80,206,186,155,216,144,195,211,201,251,54,102,25,190,98,219,60,80,15,161,90,224,5,176,58,78,2,119,162,220,206,116,195,208,174,97,130,119,22,225,85,44,103,109,49,
156,203,10,192,57,148,125,102,235,98,175,34,253,243,4,107,50,26,102,241,66,8,111,38,175,103,73,131,37,202,109,152,216,229,68,226,1,139,52,223,73,207,127,248,167,164,125,47,51,174,114,181,167,48,188,0,
46,151,163,88,18,238,157,88,78,222,164,229,47,96,55,195,89,204,66,43,168,78,187,128,198,244,186,129,74,242,207,27,88,128,101,157,249,115,255,219,108,62,76,97,161,115,135,29,203,55,64,127,133,157,247,212,
143,123,11,163,131,77,119,37,175,14,38,132,47,37,237,245,3,150,75,194,11,96,249,164,221,158,212,218,155,196,57,76,244,94,69,202,74,169,80,112,185,21,80,214,189,11,182,203,80,87,95,204,10,12,83,127,96,
41,249,67,151,147,215,239,129,32,185,14,78,99,69,25,118,114,150,111,98,46,145,247,96,150,255,31,129,23,241,41,54,133,227,5,176,60,110,5,189,7,187,208,55,38,44,251,26,240,34,72,49,93,219,113,72,144,20,
255,204,45,253,254,10,112,127,169,251,175,150,215,115,63,213,228,129,16,54,151,145,63,233,128,51,201,11,208,180,155,124,10,75,191,25,228,48,240,160,189,244,117,224,5,204,42,220,45,187,161,7,1,47,128,197,
114,27,214,133,60,153,76,200,205,136,59,234,18,230,244,182,20,21,73,157,242,37,215,164,75,39,252,142,227,100,6,180,161,182,189,132,89,42,163,34,154,171,206,203,35,191,137,29,224,32,92,250,100,72,22,80,
177,93,222,134,101,0,220,150,188,6,185,41,121,125,20,59,87,175,97,126,195,253,165,180,116,13,17,247,235,42,203,192,229,164,33,136,210,87,167,85,134,254,200,44,151,89,63,187,92,174,142,12,46,151,126,156,
183,112,178,93,209,156,101,51,203,219,247,27,32,247,1,247,50,62,152,225,64,254,12,60,207,96,69,226,238,38,7,44,178,81,191,99,148,78,246,125,158,151,31,45,54,47,72,127,14,220,32,119,130,126,126,212,151,
43,76,7,248,63,38,46,213,152,100,172,67,223,4,234,48,218,106,212,17,95,234,224,27,205,91,236,40,246,48,189,39,73,187,25,69,132,89,133,127,0,119,30,130,129,109,185,225,109,119,253,190,121,109,27,248,108,
236,111,200,59,6,46,217,126,238,10,153,229,70,21,162,93,174,187,211,91,128,243,115,20,19,189,247,130,142,139,156,158,199,46,208,51,192,110,101,149,135,37,241,117,145,88,127,163,251,122,127,198,124,129,
121,190,169,85,230,87,19,151,80,53,11,57,108,212,161,86,224,101,224,183,160,191,5,61,133,249,3,79,51,60,100,175,129,37,176,223,7,114,14,120,6,115,101,120,166,192,11,224,236,156,2,222,11,220,149,255,164,
3,236,169,252,60,240,123,11,100,84,126,51,25,206,129,147,105,82,62,126,12,124,169,252,6,45,141,22,240,155,137,75,41,137,47,176,244,246,204,202,89,224,44,42,255,138,101,16,220,141,5,80,6,185,37,121,93,
192,174,191,63,224,75,122,141,197,119,129,167,239,2,223,138,240,33,144,91,186,159,12,235,218,5,132,223,131,252,137,180,108,146,100,23,28,49,242,160,244,46,112,98,241,117,90,244,102,0,159,128,242,215,172,
75,74,140,240,24,67,51,193,141,64,129,141,73,117,17,150,210,5,30,222,87,223,3,87,111,65,185,15,27,114,215,127,225,244,22,219,3,125,30,229,183,100,203,120,249,46,112,23,47,128,147,5,240,46,224,125,140,
154,83,214,120,1,123,226,190,102,219,31,108,127,197,2,40,98,129,143,206,254,176,31,115,52,13,224,127,31,110,212,202,241,91,224,103,83,47,173,14,154,155,73,68,120,212,205,88,11,1,76,197,234,48,102,17,222,
75,126,20,25,204,255,249,27,224,63,128,61,47,128,61,188,0,230,11,224,113,144,251,17,110,197,162,114,121,156,7,254,4,122,150,238,208,170,116,251,53,21,192,118,123,154,238,111,118,91,55,2,127,55,221,10,
181,228,5,224,71,51,121,32,212,65,163,9,205,141,85,17,192,44,183,131,220,129,9,98,158,123,43,2,206,160,188,4,250,162,23,64,47,128,131,130,112,24,27,180,254,129,49,141,126,17,248,29,4,231,122,237,24,220,
77,13,5,176,211,182,57,129,103,31,242,245,30,208,207,204,186,82,13,120,19,228,155,51,7,157,84,109,182,188,205,205,49,129,144,218,10,96,218,189,221,6,189,15,243,85,143,10,102,93,0,158,198,210,177,50,235,
31,44,1,244,65,16,35,21,190,247,49,186,203,247,103,224,151,172,106,125,183,116,232,219,236,188,128,13,223,203,203,75,171,51,143,143,236,230,141,69,205,242,115,77,19,194,234,163,193,243,176,7,252,26,235,
246,222,131,61,208,7,171,10,157,0,190,136,9,224,179,12,10,225,1,225,160,11,160,0,127,137,93,32,163,132,239,247,192,115,216,19,115,245,72,19,158,23,187,143,191,11,124,29,171,133,183,10,60,141,13,33,155,
157,238,241,90,73,225,27,196,97,190,233,231,233,61,224,143,12,44,147,38,93,191,140,9,230,185,101,54,176,106,14,114,23,248,30,224,131,140,30,245,240,28,240,239,136,92,206,255,58,200,180,99,112,55,21,119,
129,69,50,237,75,62,220,187,198,132,4,232,73,52,80,253,26,211,215,39,172,138,231,128,39,23,222,202,214,33,243,5,186,216,222,247,9,98,218,109,29,236,214,13,80,93,23,120,116,163,84,223,139,137,225,168,243,
248,34,22,52,218,235,181,117,125,187,192,7,81,0,239,192,132,239,198,17,141,58,131,89,16,151,108,249,81,130,81,161,0,6,233,111,201,252,175,106,203,167,214,139,132,189,27,196,57,104,239,39,235,201,252,214,
141,106,3,248,91,70,31,187,170,249,29,240,211,185,215,78,143,167,115,246,119,152,116,131,81,8,194,222,50,233,57,21,232,158,211,236,49,237,30,247,81,145,214,193,55,75,21,192,244,175,251,128,15,147,95,183,
48,141,26,63,135,210,242,2,88,222,238,89,162,0,62,0,60,64,254,147,111,15,248,119,224,79,8,253,22,95,85,2,152,222,104,131,251,79,47,60,85,187,81,251,254,143,147,107,63,57,54,105,20,211,37,55,107,24,64,
24,38,227,93,201,191,129,198,209,179,120,30,4,30,154,109,229,82,81,224,71,8,47,206,181,118,86,248,226,216,142,151,115,182,217,52,109,40,24,176,168,83,241,147,228,187,188,255,9,134,175,15,213,228,30,79,
63,175,76,0,1,66,148,119,97,22,225,45,57,75,183,129,51,88,73,175,254,251,194,11,96,33,187,103,9,2,120,2,243,243,189,107,68,35,126,9,60,11,210,201,219,205,82,4,48,144,254,110,107,106,197,233,160,192,57,
187,57,211,207,179,175,190,118,38,55,193,224,103,169,149,216,104,64,35,180,253,206,34,132,125,93,62,189,19,168,195,152,225,75,192,227,32,151,102,13,248,246,9,95,20,39,162,71,254,57,207,179,240,178,239,
179,214,120,144,156,203,32,17,195,33,97,204,8,42,10,56,187,239,115,207,67,169,2,152,21,164,211,88,207,40,111,220,177,2,79,97,70,66,102,61,47,128,139,238,158,18,5,112,19,51,241,31,24,177,243,51,152,248,
189,213,183,129,50,5,80,2,250,74,80,245,137,88,114,19,184,184,247,153,203,8,93,94,155,230,245,231,57,181,155,179,17,154,69,56,173,16,246,11,32,152,53,253,49,170,139,16,255,9,120,2,27,224,60,194,242,207,
161,207,226,75,172,190,236,231,139,210,61,78,57,231,77,178,162,152,138,100,70,20,179,109,208,212,58,76,68,161,92,1,76,255,184,31,248,43,242,7,4,190,14,252,2,56,235,5,176,152,221,83,146,0,222,143,89,125,
121,99,154,206,99,194,55,48,52,170,96,1,76,215,11,132,110,69,14,151,116,117,156,27,182,234,6,47,232,69,69,110,18,105,100,56,43,132,249,37,178,250,215,129,225,167,191,13,199,250,16,203,11,144,92,192,206,
225,75,189,143,166,16,192,65,225,75,207,65,89,199,56,143,60,113,28,18,198,236,123,233,93,230,154,73,203,73,123,1,67,219,95,88,0,193,210,194,62,196,232,89,2,255,136,242,52,104,47,210,238,5,112,174,221,
83,176,0,30,6,62,14,156,206,217,217,85,224,231,136,252,113,116,91,134,119,51,81,0,7,135,220,166,127,164,126,164,174,117,55,194,162,75,47,246,170,24,20,194,70,163,219,131,206,237,234,65,158,0,166,159,61,
128,221,56,101,205,43,242,58,240,91,144,23,135,197,110,140,0,166,199,87,181,215,213,93,182,240,77,98,148,48,118,69,80,44,16,211,237,74,3,67,190,67,181,98,23,139,11,96,250,209,73,208,15,147,111,225,199,
152,53,248,155,254,213,189,0,206,178,123,10,18,192,77,132,123,177,46,239,96,110,99,7,11,237,63,9,196,163,47,250,41,5,176,251,62,245,215,101,210,36,92,182,59,155,233,222,102,111,206,58,221,116,89,82,33,
12,131,196,63,24,244,11,71,223,255,221,127,50,235,119,255,217,192,44,135,187,176,20,163,69,197,240,42,102,241,253,129,110,21,229,60,177,203,249,172,107,241,105,47,192,81,55,225,155,68,55,135,51,211,238,
174,79,81,122,221,104,160,231,71,206,8,224,168,135,88,247,253,208,31,3,223,41,216,185,252,16,249,245,46,95,2,126,137,166,121,178,94,0,103,217,61,5,8,224,251,48,225,203,171,100,249,44,240,12,146,169,152,
59,171,0,6,57,62,59,151,253,223,101,190,203,254,172,21,186,201,178,164,55,136,72,191,24,166,93,119,152,36,128,217,207,26,244,38,3,186,25,235,34,79,170,56,26,97,130,151,78,23,249,198,116,214,94,206,67,
166,27,220,72,5,97,6,63,97,157,201,62,136,178,215,154,100,4,81,200,88,138,153,31,237,6,4,102,58,1,76,223,223,143,69,255,243,206,225,25,224,103,224,174,122,1,156,126,247,204,47,128,108,131,126,30,36,175,
74,203,89,224,41,144,183,134,86,157,36,128,65,230,251,108,30,93,42,120,221,155,41,99,129,174,195,77,53,72,218,5,238,250,8,3,186,63,52,47,191,109,164,40,246,209,196,220,20,135,64,55,232,157,104,135,69,
225,247,176,17,28,253,83,66,78,43,128,65,166,125,113,148,148,185,103,117,31,70,179,146,39,140,125,190,69,232,63,118,154,209,155,169,4,16,208,77,224,35,228,251,7,99,208,127,67,229,183,35,54,230,5,112,96,
247,204,41,128,119,1,159,32,191,123,245,20,162,207,230,248,7,147,191,135,132,180,215,142,52,234,214,215,149,133,190,139,224,160,220,76,89,178,81,227,238,28,186,3,190,204,233,4,48,187,209,129,247,99,170,
110,77,18,192,52,181,68,211,168,110,54,135,239,128,147,27,108,145,222,121,236,30,163,129,243,153,124,148,35,128,201,178,114,10,139,22,231,85,75,58,3,252,136,190,98,172,94,0,243,118,207,140,2,216,196,132,
239,238,156,141,157,5,254,21,184,56,58,66,204,240,73,119,216,141,147,90,60,125,65,138,53,181,238,230,33,235,135,74,29,243,89,247,192,72,171,112,20,11,10,96,106,237,165,231,43,214,129,228,101,79,46,121,
130,216,21,197,156,123,99,180,0,166,159,126,10,171,69,56,200,46,54,42,231,76,102,101,47,128,3,187,103,6,1,188,3,248,207,12,15,221,233,96,194,247,124,255,54,50,219,14,210,13,37,159,15,250,242,242,210,79,
60,163,73,47,220,32,115,227,32,153,227,158,186,14,198,109,100,6,1,236,126,149,90,158,201,255,93,95,236,1,235,234,22,201,224,195,190,123,78,131,94,87,58,141,54,231,11,32,88,214,197,199,200,47,189,245,60,
240,36,105,180,208,11,96,223,238,153,66,0,67,204,212,206,155,175,246,57,144,95,51,56,71,170,104,114,2,211,155,49,61,129,169,224,65,247,76,248,155,102,126,250,110,30,201,248,157,232,125,158,165,47,201,
55,30,248,46,147,119,59,148,223,166,189,27,71,51,231,114,157,2,27,117,33,27,4,147,204,121,37,243,144,211,220,72,111,8,250,33,236,62,29,12,146,92,193,242,54,255,224,5,176,127,247,76,16,192,91,17,62,205,
240,147,229,50,240,19,224,181,252,171,63,99,110,247,165,110,12,239,206,83,32,121,199,56,43,122,125,15,155,65,145,203,9,62,229,250,24,189,224,45,141,193,99,62,238,225,214,91,97,27,120,152,252,220,193,63,
161,252,136,116,100,128,23,192,177,2,248,97,108,108,226,32,207,1,255,138,164,71,106,220,141,147,119,128,61,75,39,111,196,194,80,145,7,29,255,189,167,6,36,93,223,244,212,12,37,241,247,25,27,31,37,191,178,
250,59,192,143,65,95,247,2,152,47,128,71,65,62,205,240,36,68,215,64,254,5,43,220,216,91,173,207,55,225,241,120,42,33,107,29,246,110,197,219,64,63,133,165,62,13,242,52,202,51,195,31,31,108,1,188,13,248,
107,134,61,226,47,34,238,159,33,136,186,203,207,90,202,201,227,241,44,135,108,36,25,215,64,131,79,98,19,187,15,242,50,54,7,117,111,160,194,1,22,192,191,192,18,44,7,249,5,240,171,108,112,209,227,241,172,
8,189,251,246,30,224,211,57,75,236,3,223,198,186,198,28,68,1,188,19,243,21,220,52,240,229,159,129,159,147,86,102,246,120,60,171,206,81,44,163,227,142,129,207,35,172,168,194,111,192,69,67,107,149,136,184,
95,95,247,169,37,237,43,141,110,52,51,159,237,48,186,188,250,171,216,208,168,163,248,72,134,199,179,14,92,198,242,120,111,29,241,253,46,86,174,174,197,216,196,208,226,104,144,159,197,93,7,86,109,26,70,
143,199,51,158,147,19,190,63,132,13,115,93,26,141,252,202,13,30,143,199,179,254,44,197,204,76,136,39,47,226,241,120,60,203,163,1,124,171,228,125,236,99,25,148,127,5,114,58,231,251,179,88,192,227,109,204,
25,234,77,82,143,231,224,160,152,14,157,196,102,167,27,28,235,31,129,254,24,228,2,22,51,152,87,31,226,228,213,183,190,184,95,229,85,179,41,16,203,215,251,4,22,6,207,86,107,126,3,248,41,194,5,175,121,30,
143,7,180,129,242,65,224,193,129,47,206,99,21,221,223,42,122,132,80,129,2,152,86,234,200,12,92,183,66,6,127,199,112,205,176,243,192,119,186,171,121,1,244,120,60,189,162,23,239,1,62,147,179,192,211,192,
51,67,149,176,23,96,112,254,140,249,81,71,183,60,60,1,8,59,192,163,192,177,129,37,95,4,126,88,216,126,61,30,207,186,241,2,150,2,247,232,192,231,15,37,255,63,211,45,88,156,78,3,48,39,193,220,214,87,118,
194,156,180,46,91,111,168,198,141,40,127,143,114,172,59,86,215,94,191,194,139,159,199,227,153,204,89,148,111,163,180,6,52,228,33,108,202,91,67,51,211,155,2,185,245,5,198,32,238,23,199,251,43,251,78,92,
35,45,40,234,114,134,166,41,192,29,32,95,200,89,241,159,129,223,15,181,205,119,129,15,48,163,206,187,31,243,120,48,209,254,83,111,127,31,6,253,27,134,220,104,250,7,108,28,49,185,117,39,211,137,188,38,
92,75,226,126,113,204,54,48,73,4,187,194,167,86,204,210,169,205,83,218,223,168,7,176,121,121,179,180,128,239,131,188,150,91,203,205,11,224,122,147,173,31,215,87,166,140,241,215,102,238,220,45,19,214,241,
172,56,185,2,72,50,62,248,115,12,39,73,191,2,242,4,217,98,10,206,245,10,34,167,243,40,195,200,226,41,102,1,66,98,57,230,136,96,42,124,221,41,32,83,63,223,80,223,251,175,176,48,118,150,43,192,119,64,175,
245,42,202,14,110,191,251,143,103,93,200,94,116,131,149,184,101,198,193,238,58,88,109,90,38,94,212,158,85,101,172,0,2,114,47,54,7,73,150,22,240,93,224,77,91,39,173,0,175,116,231,73,78,203,252,247,61,132,
141,158,130,41,253,115,134,166,23,89,28,219,220,170,113,156,52,40,183,143,157,39,126,111,2,255,31,54,205,161,231,32,144,206,13,146,206,199,155,94,55,177,235,77,88,52,15,78,109,27,81,102,187,93,7,184,127,
120,30,32,126,143,77,180,148,101,19,248,10,131,53,7,251,230,134,78,231,135,142,135,174,153,97,147,47,85,200,216,65,212,177,11,56,221,96,254,181,246,41,134,197,239,21,224,155,64,123,242,111,242,172,60,
233,69,229,20,226,142,93,55,46,51,240,103,209,148,133,193,114,236,46,182,125,68,81,210,229,241,66,120,128,248,29,240,207,3,159,5,192,215,25,206,56,233,93,55,206,217,245,18,117,122,26,231,28,1,3,33,22,
84,251,23,28,123,97,233,231,65,239,237,223,6,47,0,255,99,161,159,232,89,13,186,194,151,92,92,157,206,114,4,41,181,52,227,24,58,145,23,194,131,199,239,129,127,26,208,174,45,208,175,147,63,79,241,192,181,
154,24,118,170,4,125,115,225,166,83,12,166,194,55,254,98,250,2,170,119,14,172,255,28,170,63,42,250,215,122,106,198,160,240,69,145,93,80,5,37,167,206,214,14,18,55,77,42,132,83,93,187,158,213,231,37,84,
191,131,170,102,244,167,145,136,224,232,170,51,93,255,177,185,100,114,162,30,83,249,105,30,101,184,168,225,179,216,112,21,207,186,50,74,248,210,239,170,108,23,12,8,225,176,191,199,179,118,156,7,190,65,
127,209,100,1,190,10,188,123,154,13,136,251,249,209,222,187,52,98,151,221,84,54,232,33,0,250,37,134,11,26,218,16,149,116,161,161,139,174,59,118,197,71,129,87,145,172,67,57,142,199,79,68,158,77,123,201,
59,175,162,0,199,177,10,224,55,38,127,111,3,33,86,12,227,26,112,14,43,136,123,33,191,92,91,234,174,201,109,108,114,13,59,75,131,8,66,8,147,231,188,143,26,215,156,137,81,224,129,197,187,65,219,16,248,95,
129,173,129,13,254,11,42,255,209,219,216,240,249,23,247,116,198,111,168,3,11,13,10,160,89,126,167,6,182,241,51,68,127,219,183,146,23,192,245,96,22,225,235,174,147,253,163,111,185,67,216,24,207,247,0,39,
166,108,193,37,122,213,130,94,235,125,60,65,0,173,209,160,138,170,229,184,74,35,236,229,186,122,33,172,41,115,11,32,192,14,42,95,101,184,154,204,99,192,217,41,5,112,32,71,171,95,0,243,196,239,73,224,185,
228,169,222,91,201,11,224,106,147,205,179,139,227,217,186,185,195,2,184,3,220,143,101,10,12,102,206,207,194,91,192,47,129,51,83,11,32,152,0,166,130,231,133,176,230,44,36,128,160,178,5,124,13,187,230,178,
124,27,244,245,241,2,56,104,253,117,247,39,128,140,22,63,192,11,224,154,144,181,248,210,215,196,76,128,193,109,116,255,8,64,254,18,155,240,170,200,19,252,50,232,15,65,59,83,11,96,138,23,194,154,179,176,
0,130,117,131,7,69,80,65,191,13,250,198,224,30,197,61,125,100,96,103,217,111,1,120,4,56,61,240,205,83,16,60,219,91,206,11,224,74,51,104,241,205,35,124,221,109,1,150,143,245,215,228,229,101,21,195,101,
224,219,40,123,163,26,144,43,128,41,185,66,40,195,55,148,103,201,20,34,128,36,41,49,121,150,224,127,7,46,102,63,152,84,5,225,97,134,197,239,217,228,229,89,117,242,242,248,22,143,234,222,202,168,164,212,
226,56,10,252,61,112,243,92,107,103,126,183,182,59,201,239,142,124,212,120,125,216,103,56,58,12,22,29,238,11,224,6,35,124,131,0,159,64,185,123,32,79,250,105,224,169,162,91,235,89,50,89,225,235,116,138,
18,62,128,235,80,190,132,210,24,204,175,47,225,181,13,124,25,184,101,238,214,38,199,65,227,24,237,180,208,86,219,134,76,137,36,99,71,61,43,204,62,202,183,6,202,105,53,146,235,115,39,253,108,148,5,248,
151,152,227,58,203,47,233,166,186,120,86,146,244,198,86,237,9,95,113,35,40,142,99,213,191,151,205,23,129,235,22,218,66,90,84,51,177,8,251,132,208,91,132,245,39,77,223,235,123,1,54,20,247,155,88,122,85,
150,191,37,9,200,229,9,224,251,129,255,52,240,217,179,152,0,14,238,149,110,191,221,251,145,235,75,159,240,69,208,110,23,61,116,236,56,230,120,46,174,194,248,244,164,211,46,220,184,240,150,210,227,148,
21,194,216,15,177,91,9,52,253,103,72,136,46,51,60,241,219,17,172,128,2,226,254,237,72,246,139,188,90,252,207,3,63,153,170,17,66,207,161,60,212,58,31,4,169,132,64,146,34,5,49,26,197,249,193,141,110,16,
107,68,242,114,118,81,1,115,74,167,231,89,119,48,127,220,70,177,13,159,139,111,129,36,145,190,49,65,144,33,210,7,249,160,147,61,57,46,97,128,132,13,159,80,93,58,115,6,65,6,7,112,228,115,51,230,50,201,
114,54,232,93,244,114,43,200,103,50,239,1,121,149,105,197,175,15,47,104,149,146,90,50,34,208,137,208,86,27,109,71,243,71,118,71,179,3,242,53,144,141,129,235,166,170,215,87,177,17,38,197,144,90,126,177,
67,219,109,52,107,57,167,199,215,179,42,156,7,190,55,112,189,156,74,171,193,28,195,134,184,101,121,19,248,167,153,119,147,150,203,247,44,159,76,23,142,118,34,124,157,68,248,138,191,97,111,0,253,123,134,
135,31,85,140,126,5,116,208,127,189,24,169,16,70,206,186,197,237,142,185,18,202,57,174,158,105,136,157,25,134,221,50,147,83,61,32,95,6,190,151,221,76,3,180,129,57,5,201,216,156,150,103,213,179,61,167,
163,107,138,42,4,13,115,44,123,231,96,249,116,171,162,184,164,171,155,230,241,81,210,205,41,59,160,127,11,108,212,244,252,126,2,184,10,188,92,232,86,147,200,176,198,177,185,213,131,216,242,8,195,176,231,
106,240,212,157,151,193,61,77,50,195,92,128,245,139,179,227,231,218,152,211,112,1,51,206,63,17,151,66,54,184,209,181,248,146,178,84,229,89,38,59,88,192,163,14,62,191,113,252,53,112,91,41,91,206,28,119,
77,142,59,29,159,62,83,46,201,117,238,146,202,206,11,229,80,241,12,22,219,160,161,42,131,3,211,191,67,118,146,145,121,137,109,158,96,9,3,139,13,250,94,113,113,116,171,220,42,68,73,112,195,165,221,177,
82,247,188,163,202,215,64,106,214,237,29,201,23,129,199,129,51,165,108,61,61,15,170,150,80,29,37,22,97,35,160,91,33,219,83,44,58,34,32,50,59,63,81,149,157,193,180,133,255,193,192,80,145,133,81,77,196,
207,63,25,11,33,237,106,101,133,47,181,248,202,37,181,252,86,69,252,82,30,161,76,17,132,204,3,201,161,45,133,40,68,26,65,34,132,120,33,92,20,193,220,58,0,58,255,36,232,57,124,55,187,181,39,177,185,60,
138,67,176,130,173,157,196,39,53,203,252,195,158,30,217,174,85,39,238,143,234,46,199,9,127,152,213,20,191,148,71,128,59,75,223,75,55,8,5,218,114,232,126,108,19,242,8,189,172,33,207,108,164,51,82,58,45,
37,253,40,85,164,231,73,43,187,148,129,8,234,20,237,116,124,196,108,22,250,162,186,29,180,213,177,99,184,220,232,227,14,240,95,88,93,241,75,249,60,240,224,82,246,148,10,158,115,232,190,162,123,106,147,
55,42,150,182,237,111,129,233,8,64,157,51,3,170,164,99,214,0,94,103,174,92,191,25,73,135,168,196,206,59,138,39,145,157,201,170,179,140,168,238,72,182,176,32,89,221,3,30,211,242,16,86,113,250,143,75,217,
91,183,188,24,104,164,208,1,105,136,29,205,144,76,10,135,167,15,73,3,76,73,176,163,68,189,144,248,169,35,33,16,79,92,178,40,156,67,154,13,104,132,61,255,149,127,36,26,131,193,141,56,19,220,40,117,191,
185,35,65,70,21,151,92,7,158,160,79,4,71,140,4,153,149,110,62,90,198,213,163,201,49,77,3,144,14,43,195,181,9,52,147,235,223,15,37,77,72,70,140,105,114,253,167,73,231,37,210,96,153,226,7,16,4,104,236,16,
17,27,90,228,135,21,245,44,187,188,168,110,53,214,242,58,139,31,88,153,55,88,150,37,152,34,116,45,63,221,3,218,130,108,96,66,24,42,196,222,16,0,44,151,53,142,151,18,51,168,98,240,122,87,225,129,131,221,
29,206,90,124,157,168,103,241,45,39,170,59,138,117,23,191,148,135,129,38,54,209,246,114,73,13,237,56,17,194,86,98,17,110,36,190,174,3,220,53,214,78,50,199,243,146,2,166,213,8,160,8,154,136,160,108,84,
211,132,74,233,171,192,236,208,40,130,184,114,225,3,139,246,126,133,245,23,191,148,79,96,247,64,53,5,126,211,123,60,6,221,13,160,13,178,161,208,72,44,66,5,220,1,49,16,42,114,5,52,42,123,212,136,88,82,
163,211,196,31,120,0,50,165,7,135,172,197,174,231,2,168,222,18,222,0,253,58,232,170,71,123,103,229,163,152,8,254,170,178,22,4,0,10,29,65,59,2,33,72,83,205,34,12,19,191,216,186,223,30,74,111,220,186,164,
106,88,62,213,9,32,10,162,104,220,65,194,52,55,96,77,237,254,193,174,110,55,170,91,155,129,244,13,172,92,248,65,19,191,148,15,99,137,42,229,165,130,77,67,106,17,58,208,189,16,90,33,178,17,195,86,34,132,
142,197,3,53,117,36,8,146,26,149,209,210,235,7,52,170,61,160,230,248,215,118,27,217,216,160,27,1,90,23,198,14,89,171,205,133,220,64,229,107,88,81,211,131,204,199,49,9,250,247,170,27,98,193,18,235,2,235,
94,8,237,0,217,84,216,140,33,116,214,45,94,23,33,20,73,50,30,34,38,79,81,84,60,213,59,224,210,122,107,173,54,178,217,236,230,0,173,60,213,13,89,155,133,6,22,240,56,232,226,151,242,87,88,156,182,30,83,
63,100,133,240,90,8,251,33,178,25,195,86,42,132,193,106,119,154,146,174,174,182,59,144,206,38,185,124,31,96,13,16,177,73,121,218,192,230,166,125,182,138,34,216,29,28,79,210,213,173,173,240,129,23,191,
81,60,148,252,95,15,17,132,140,16,10,122,173,9,251,13,100,59,130,237,40,233,26,203,234,5,75,146,30,144,182,218,152,59,172,154,246,215,67,0,161,151,31,216,106,195,198,138,89,130,217,224,134,115,22,220,
136,93,93,133,15,96,27,171,1,233,197,47,159,135,176,123,227,23,85,55,164,15,193,34,196,177,160,87,55,208,86,3,217,140,145,102,12,27,241,234,8,97,119,164,71,39,49,16,170,107,115,125,4,16,44,61,38,153,183,
66,54,55,234,47,130,227,10,145,214,83,248,192,206,249,87,176,185,117,61,163,249,32,86,246,180,62,150,96,74,144,228,139,68,1,218,14,209,64,77,8,183,59,245,23,194,64,32,86,180,213,178,247,21,251,194,235,
87,158,37,72,125,130,245,56,64,185,84,83,136,180,8,210,110,175,23,191,233,120,8,139,16,215,147,64,161,225,0,65,119,155,184,183,183,209,43,155,38,126,141,56,17,202,26,33,245,18,63,168,163,0,66,237,158,
18,93,6,166,151,236,206,185,177,26,149,128,5,155,62,178,202,110,111,27,120,161,194,253,207,195,7,233,249,5,235,137,36,66,40,130,94,217,196,93,60,132,94,217,174,151,16,166,221,222,154,221,211,245,234,2,
103,233,138,96,187,30,221,225,52,170,219,137,235,50,100,109,86,190,194,162,19,136,47,198,30,54,73,245,85,172,226,248,251,42,108,203,172,164,101,180,158,174,180,21,147,144,100,20,137,19,244,242,22,186,
219,68,182,59,200,225,54,52,99,136,130,106,210,103,250,2,30,212,70,252,160,174,22,96,74,210,29,166,221,169,38,105,184,59,253,33,150,206,82,238,44,107,101,33,88,146,243,201,138,219,241,15,152,248,193,178,
139,16,20,195,131,212,221,18,76,9,212,44,63,39,232,229,109,220,91,135,209,171,91,118,37,52,147,20,154,101,145,21,191,226,167,101,93,152,250,90,128,41,129,5,70,132,22,108,44,201,18,236,11,110,56,43,203,
147,14,213,91,29,139,15,122,221,222,193,121,95,150,205,15,128,75,153,247,245,191,238,242,121,16,203,19,252,215,170,27,50,21,129,66,16,67,28,162,111,31,70,119,55,145,141,8,217,106,195,86,199,186,200,113,
137,54,80,210,107,170,171,248,193,170,92,136,65,26,29,46,185,59,60,114,200,26,181,60,121,83,240,21,170,23,191,199,128,179,3,159,45,183,4,91,177,188,31,203,244,124,170,234,134,76,77,224,172,123,220,9,209,
253,38,122,117,27,57,212,66,142,236,34,205,8,141,195,226,163,198,117,245,227,15,176,137,88,235,27,0,0,32,0,73,68,65,84,26,2,8,54,94,48,137,14,203,230,102,177,34,184,26,67,214,102,165,14,221,222,60,241,
131,213,30,191,0,240,1,204,18,124,178,234,134,204,68,224,204,42,116,1,122,101,11,183,215,68,14,183,8,14,239,67,51,50,107,208,21,96,17,214,48,218,59,138,213,17,64,40,39,48,50,56,100,77,221,170,68,117,199,
81,103,241,131,245,40,1,254,64,242,255,106,137,32,152,53,216,140,33,22,220,165,195,232,181,109,130,195,251,200,225,61,179,8,163,112,254,96,73,77,163,189,163,88,45,1,132,76,158,96,42,130,204,110,79,8,246,
36,84,32,138,172,30,95,154,145,30,164,27,92,212,72,153,243,196,79,220,237,196,237,214,93,252,214,137,213,21,65,128,64,145,32,2,215,192,93,218,129,171,91,200,206,30,193,145,93,164,17,163,179,90,132,53,
142,246,142,98,245,4,16,122,51,165,117,58,54,108,14,166,179,4,69,147,46,128,160,45,27,92,174,145,131,160,248,42,80,125,167,62,157,115,67,92,206,151,89,180,183,236,224,186,221,245,6,197,57,121,111,219,
252,50,213,139,223,247,152,44,126,209,50,26,178,36,86,91,4,33,233,26,91,113,5,247,246,17,116,111,203,44,194,173,150,117,141,1,162,112,252,54,106,30,237,29,197,106,10,32,88,210,103,199,124,117,19,171,200,
8,118,130,227,0,189,214,68,219,97,47,39,42,160,36,151,124,86,184,70,9,224,224,251,28,1,12,6,83,22,180,183,157,254,253,124,25,184,121,238,230,22,195,15,129,151,167,88,110,149,131,32,121,60,128,157,136,
159,85,221,144,133,8,28,210,116,208,110,226,246,54,161,25,33,27,29,235,26,239,236,217,253,146,39,132,221,94,89,102,202,214,21,161,177,210,238,232,180,150,152,42,178,149,227,19,76,133,207,9,122,109,3,221,
111,152,163,55,181,4,75,253,241,211,8,160,14,191,31,20,192,161,54,230,182,249,81,180,114,241,123,28,225,204,208,167,249,135,120,117,238,144,233,121,31,54,199,200,63,87,221,144,133,9,227,222,125,115,117,
27,189,186,133,236,110,19,28,187,138,108,181,80,23,244,132,48,21,191,253,182,157,235,64,86,42,196,213,88,249,107,49,104,36,39,32,66,182,26,137,233,237,122,93,221,189,166,9,95,59,180,207,150,153,4,186,
20,228,81,224,84,197,141,120,28,244,76,254,87,43,126,125,205,198,189,88,73,227,39,170,110,72,33,4,218,237,2,187,43,135,208,107,219,200,206,46,193,145,107,200,118,11,85,43,214,170,251,73,49,211,174,255,
124,117,104,212,125,48,200,84,4,161,69,135,247,98,228,144,253,158,174,240,117,194,222,88,201,245,227,81,144,83,21,139,204,227,224,206,228,126,163,1,7,76,0,1,238,78,254,95,15,17,76,144,102,4,26,224,222,
57,130,94,57,132,28,217,35,56,122,5,141,90,160,97,70,70,86,235,124,175,174,15,112,144,64,64,29,186,39,104,251,16,180,147,174,238,218,89,124,93,106,98,249,229,116,123,173,47,148,188,114,45,130,14,221,89,
176,215,146,181,20,65,68,145,13,27,65,226,222,62,134,219,109,18,158,56,215,45,214,186,138,172,129,249,151,33,84,104,53,161,21,154,240,213,161,10,70,57,212,65,252,126,70,159,248,73,255,75,199,78,110,179,
182,39,38,195,221,192,167,170,110,68,41,136,34,155,45,136,54,209,214,54,4,209,202,158,209,138,39,69,42,10,177,0,67,212,68,227,141,117,237,238,38,200,23,209,202,197,239,199,160,127,232,189,77,158,163,221,
155,32,21,194,145,119,197,58,92,116,211,112,111,226,148,254,113,213,13,41,7,65,247,142,16,108,238,161,172,86,240,35,101,245,131,32,89,226,100,102,185,245,157,68,245,17,224,182,138,207,217,19,160,19,170,
185,200,192,255,35,23,56,8,220,131,185,154,126,80,117,67,10,39,140,112,251,135,144,214,97,100,115,23,226,38,171,166,130,171,157,6,211,69,193,133,104,212,24,200,145,91,43,30,65,57,93,113,27,158,64,38,149,
178,154,202,18,112,172,183,15,112,144,187,176,135,215,227,85,55,164,88,236,20,234,238,14,193,198,46,90,231,233,43,70,176,30,62,64,209,228,233,179,182,247,211,35,80,3,241,155,166,142,223,116,247,64,135,
245,75,134,158,196,105,236,60,174,21,18,118,112,251,219,184,214,54,132,157,170,155,51,51,171,239,3,20,5,215,64,227,53,181,254,84,234,32,126,63,70,38,117,123,19,116,61,158,169,37,113,154,53,180,4,5,208,
221,35,4,27,251,201,56,132,213,209,148,245,240,1,198,205,170,91,80,22,159,3,57,93,113,27,158,237,15,120,140,66,45,31,108,116,234,139,199,56,13,124,140,85,31,54,151,37,140,208,214,54,110,5,125,129,171,
253,184,150,196,247,23,135,57,67,200,86,158,71,48,223,81,149,60,201,84,133,63,19,119,222,248,212,151,44,107,240,212,93,136,247,177,78,221,225,228,108,234,181,163,118,13,172,80,79,108,181,5,16,172,235,
187,126,212,161,219,251,36,240,220,212,75,107,200,12,186,182,118,79,171,57,56,205,58,137,96,24,225,218,155,232,254,33,36,92,157,98,63,171,43,128,226,192,133,86,175,108,189,172,191,207,177,82,226,151,90,
127,51,141,3,141,177,64,200,65,231,52,150,212,190,22,72,160,232,222,97,235,145,173,200,51,110,69,131,32,118,195,173,159,245,39,15,163,53,232,246,138,78,111,249,137,66,220,152,245,65,84,118,41,158,85,226,
84,82,208,226,177,170,27,178,48,129,89,129,178,127,24,217,190,186,18,190,192,213,12,130,136,205,107,96,254,134,122,31,224,25,120,24,184,187,226,243,241,75,152,65,252,80,59,7,218,72,206,195,10,94,75,245,
224,20,102,9,174,190,8,10,104,103,19,57,116,141,85,184,30,86,55,17,122,157,210,45,148,143,211,27,64,95,21,191,67,248,229,76,107,8,16,53,234,254,144,95,21,78,1,159,4,126,82,117,67,22,65,194,24,109,111,
65,107,19,154,109,136,39,84,146,174,152,21,84,17,171,60,161,110,117,252,12,19,120,152,94,89,245,170,120,26,248,233,76,107,164,86,248,252,231,161,254,230,193,242,185,143,149,247,9,218,117,225,174,29,65,
86,224,254,92,61,1,20,192,173,141,213,145,116,123,43,229,105,224,153,185,214,116,13,230,212,49,101,189,230,5,41,146,180,59,188,186,132,17,174,189,149,140,14,137,168,243,179,110,197,124,128,150,108,171,
42,235,224,251,123,24,164,6,226,167,179,139,95,146,127,137,134,139,248,254,14,218,80,184,89,56,5,124,9,248,199,170,27,50,47,2,232,254,97,130,205,86,98,171,212,83,103,86,207,2,116,193,202,22,95,204,176,
218,150,31,36,221,223,133,246,191,242,39,177,100,110,197,166,56,93,205,227,20,198,184,214,22,174,181,85,235,122,129,43,20,4,73,124,127,171,111,253,125,2,173,92,252,254,128,204,41,126,146,252,227,130,249,
230,100,246,204,194,73,224,11,216,84,163,43,134,34,8,186,119,136,96,99,15,165,158,85,163,87,200,2,20,96,166,209,6,117,228,33,224,254,138,219,240,28,11,21,232,116,22,249,93,60,8,181,210,39,114,137,220,
14,124,190,234,70,204,69,24,225,90,219,184,253,195,72,24,215,82,0,27,171,147,78,146,88,127,171,107,114,124,28,13,170,142,246,62,131,184,167,231,94,59,245,253,197,205,196,250,91,232,218,241,62,192,233,
185,19,235,14,127,171,234,134,204,138,136,162,187,135,209,141,150,125,80,51,189,169,87,107,198,160,53,124,122,204,192,199,169,62,213,229,25,204,239,55,63,233,168,143,98,30,68,62,10,60,27,39,49,17,92,45,
194,24,23,109,160,173,109,179,2,107,198,138,14,133,91,41,62,142,74,245,226,39,90,128,248,133,214,253,149,122,250,115,14,0,169,8,174,148,37,40,226,208,253,109,180,153,90,129,245,185,118,86,194,2,212,213,
117,23,213,193,242,251,119,102,178,252,212,4,46,239,21,207,157,247,231,41,142,213,179,4,3,135,235,52,209,206,6,4,245,178,2,107,94,77,64,64,226,5,239,185,9,43,231,246,228,102,216,225,232,167,217,135,169,
94,252,206,3,255,10,100,218,57,56,131,219,32,54,201,124,31,233,170,46,92,169,90,111,107,204,73,86,172,178,180,0,218,217,64,54,247,171,110,74,31,141,90,91,87,226,208,104,19,162,38,4,179,221,120,146,251,
38,231,174,31,74,169,209,156,13,232,136,101,243,150,87,128,143,40,242,23,211,181,180,52,126,7,252,116,104,56,210,144,96,103,222,143,117,235,9,90,108,193,131,26,95,120,43,193,105,224,43,88,1,133,250,251,
83,195,216,170,70,111,180,145,141,86,109,198,8,215,215,2,20,171,52,162,251,135,172,235,53,107,238,95,247,246,114,3,226,164,253,183,94,42,172,125,203,56,155,205,181,187,173,116,153,108,27,180,127,253,158,
16,62,4,84,45,126,207,97,53,253,166,32,243,155,210,223,172,218,75,114,22,129,160,148,216,187,175,7,184,56,55,1,95,3,190,193,42,136,160,10,236,31,130,212,23,88,3,234,27,4,17,135,182,183,237,73,49,79,133,
217,172,160,141,19,64,201,19,192,193,101,242,44,192,92,73,120,8,149,7,103,111,108,161,60,135,240,228,204,146,229,20,58,177,173,214,8,96,35,125,66,43,68,201,68,231,197,94,42,190,47,93,12,199,89,21,17,12,
99,180,189,1,173,45,100,179,30,86,96,61,45,192,116,174,143,206,198,204,93,223,10,121,8,168,94,252,166,182,252,48,75,175,21,153,207,111,179,129,220,112,24,142,110,64,51,128,80,33,142,64,219,232,155,49,
188,3,20,59,247,84,77,159,188,43,201,234,136,32,64,123,11,54,234,97,5,214,211,2,20,135,118,182,204,233,94,179,168,209,8,234,96,249,253,9,209,201,226,39,152,165,215,138,160,25,194,13,59,200,241,109,228,
232,22,28,74,166,22,109,71,104,171,109,11,59,144,99,14,189,26,66,44,43,146,55,112,32,57,14,124,25,19,193,250,18,198,104,123,211,172,192,141,86,50,162,168,58,234,103,1,166,243,252,182,55,86,37,226,248,
126,170,183,252,94,7,126,56,118,9,17,232,68,176,31,193,206,38,114,203,113,228,198,163,112,116,11,154,98,130,184,223,178,101,212,153,85,232,212,236,137,166,34,71,28,250,118,3,130,194,188,129,53,124,242,
174,60,39,128,207,0,63,170,186,33,19,105,109,193,70,187,234,86,212,208,2,20,103,79,8,93,9,235,175,14,150,223,31,17,125,98,228,183,130,9,217,181,22,108,53,145,123,111,70,110,57,14,59,155,16,59,216,109,
67,59,182,101,210,32,239,160,198,69,130,236,68,232,181,16,58,73,247,120,113,106,127,114,87,148,247,0,215,99,165,180,234,149,115,146,18,196,104,148,250,2,247,146,252,210,138,154,82,217,158,243,16,7,113,
19,157,35,237,165,2,234,224,243,251,35,48,90,252,0,118,59,176,215,65,110,61,78,240,225,59,145,123,110,182,0,199,181,22,236,117,204,15,56,9,5,66,69,14,71,224,10,123,96,250,40,112,121,92,143,249,4,183,170,
110,200,104,20,109,109,90,85,161,10,169,87,65,84,193,196,79,3,75,128,174,47,31,130,26,88,126,140,176,252,68,160,29,217,235,198,29,130,219,174,131,147,71,45,13,225,202,30,253,57,62,83,18,9,114,56,66,119,
155,208,14,32,116,148,155,161,238,89,144,29,122,129,145,250,89,130,129,131,168,137,182,183,144,173,234,172,192,250,88,128,162,137,245,215,168,187,245,247,32,240,161,138,219,48,214,242,211,107,45,16,33,
184,231,36,193,131,183,193,201,35,176,215,134,253,206,124,226,7,38,158,161,34,135,59,73,50,181,215,175,21,32,21,193,141,170,27,146,79,106,5,86,23,8,169,145,0,58,155,232,72,3,106,92,242,234,3,88,215,183,
74,46,145,39,126,2,180,29,92,235,16,156,56,76,248,159,78,33,119,157,48,255,222,181,118,207,191,183,8,145,32,135,34,216,112,16,47,124,233,120,5,93,14,59,212,117,142,145,192,140,30,226,70,101,254,254,122,
4,65,210,58,115,209,28,35,62,150,199,61,168,124,180,226,54,156,71,120,124,232,1,33,160,123,49,178,29,16,220,117,12,57,117,12,36,128,43,45,8,10,76,96,86,129,134,67,142,180,209,11,91,182,109,207,42,112,
35,240,55,88,166,64,245,161,215,148,228,94,215,214,38,18,70,149,84,137,169,135,5,40,138,70,27,104,28,214,85,0,31,4,62,93,113,27,206,0,223,33,199,159,163,215,98,130,99,77,194,15,220,128,220,118,196,172,
190,253,168,28,27,171,19,32,135,59,102,9,70,11,93,62,245,185,17,15,6,239,2,254,158,186,5,70,130,24,109,109,160,237,106,2,159,213,87,132,78,202,44,153,239,175,166,226,167,65,213,221,222,51,136,14,91,126,
10,180,28,114,67,147,224,61,71,160,33,112,181,3,97,88,174,117,38,10,219,14,174,78,170,44,51,150,90,59,122,215,148,250,6,70,90,155,208,140,151,94,49,186,22,22,160,198,141,36,28,94,59,1,124,144,234,125,
126,103,200,43,123,228,128,150,34,55,134,4,119,109,219,161,219,119,203,241,172,197,1,178,25,65,211,217,232,144,249,240,253,231,106,72,69,240,112,213,13,233,18,58,52,106,162,157,229,91,129,21,11,96,50,
211,91,28,214,209,250,171,131,248,189,202,160,248,9,38,126,17,200,173,130,220,214,128,142,218,107,89,146,18,11,108,70,200,78,123,209,110,176,167,26,118,128,175,83,183,135,80,187,185,116,27,168,49,77,30,
108,105,36,169,47,184,160,110,169,47,247,168,86,46,126,251,34,124,183,239,19,193,42,179,56,144,155,58,200,137,16,218,106,143,177,101,166,81,9,16,5,200,78,27,119,121,195,218,52,251,232,144,122,221,124,
7,143,45,108,242,245,127,168,186,33,0,4,206,44,192,78,19,154,237,165,165,198,84,151,8,45,10,26,214,209,247,119,15,200,167,43,110,195,57,208,225,177,189,145,157,43,185,169,133,28,3,218,225,140,54,252,64,
68,120,145,195,30,11,108,58,130,227,109,226,55,15,205,51,225,77,173,51,221,15,8,183,0,127,7,124,31,184,90,113,91,0,208,246,38,210,72,170,192,47,33,42,92,237,72,144,56,173,175,84,27,1,124,0,228,227,21,
183,225,44,232,99,67,159,186,196,242,59,177,139,236,196,246,164,28,249,144,20,75,120,182,215,14,176,1,114,8,244,4,142,235,128,67,192,53,224,34,34,111,130,188,129,204,40,72,2,116,4,57,178,79,112,117,19,
109,133,208,152,201,138,247,67,225,234,193,141,244,2,35,213,138,96,224,236,186,238,108,192,102,59,201,53,45,87,27,170,25,127,34,169,239,47,168,83,218,203,3,216,36,70,85,114,22,43,113,222,143,10,56,65,
174,191,98,126,183,246,102,254,153,51,193,219,4,189,19,231,222,133,93,220,59,83,236,119,15,243,55,254,7,34,231,167,110,173,19,164,233,144,35,251,184,189,157,89,31,165,190,11,92,31,182,168,139,8,138,162,
157,38,210,136,172,54,64,201,86,96,163,50,227,43,170,85,37,174,7,208,202,197,239,53,100,64,252,210,202,44,46,64,142,93,70,14,239,143,182,252,68,66,148,15,17,199,247,67,188,49,85,145,131,30,219,192,221,
136,220,13,188,132,200,207,65,46,78,92,75,64,59,33,178,211,38,184,220,65,91,141,89,173,64,79,125,168,135,8,6,14,162,16,58,13,179,2,139,43,190,145,75,53,42,228,196,38,58,175,135,245,119,63,213,91,126,87,
176,242,69,9,118,210,53,6,58,77,130,227,151,145,157,61,123,104,12,249,252,4,224,164,198,238,51,196,241,209,197,187,12,114,7,112,7,240,52,34,207,76,92,220,145,88,129,45,220,222,6,226,211,251,86,153,45,
172,168,234,127,173,186,33,196,225,146,124,128,203,78,132,78,38,59,162,30,2,120,10,13,62,81,113,27,246,17,125,204,82,130,50,159,106,128,70,33,193,145,107,200,145,107,246,84,28,154,208,45,0,248,11,226,
232,35,196,69,187,212,228,33,224,6,36,152,80,104,21,52,10,145,35,109,228,114,4,173,134,229,7,78,62,181,190,11,92,79,118,176,232,240,99,84,229,156,23,135,118,26,72,51,180,236,130,18,173,192,229,91,128,
42,168,171,133,239,239,189,192,127,174,184,13,111,0,223,99,48,43,95,5,141,66,194,227,87,8,142,93,177,60,73,29,28,211,43,219,184,248,243,184,248,230,25,187,187,211,35,242,110,224,24,200,248,50,235,14,104,
56,194,27,118,137,207,29,181,11,118,242,249,245,65,144,250,114,43,240,63,99,215,230,165,165,239,93,176,94,98,107,3,57,84,238,220,33,75,22,192,164,232,65,110,217,225,165,114,55,245,16,191,111,229,125,145,
90,126,193,177,43,104,148,211,21,16,118,112,238,171,56,119,168,252,227,40,39,128,47,34,124,119,236,174,226,16,14,181,145,173,142,213,12,108,78,108,151,79,131,169,55,71,233,249,4,151,47,130,129,51,151,
79,39,130,102,100,17,225,18,12,193,37,7,65,18,223,95,213,226,167,60,92,101,3,72,197,47,231,132,106,167,65,112,100,151,240,186,203,61,203,175,15,1,167,95,3,183,204,65,237,183,37,185,145,63,30,185,132,130,
224,144,237,54,238,234,6,162,19,235,111,249,46,112,253,105,80,165,8,162,214,21,78,167,197,45,65,54,150,155,7,88,125,233,173,187,65,170,22,191,183,64,243,45,191,84,252,174,127,199,82,132,134,198,71,11,
224,190,128,211,173,165,63,67,132,123,128,243,40,207,143,90,68,59,32,135,246,145,141,67,201,140,126,149,187,57,60,139,147,136,160,252,55,44,93,106,121,4,106,3,37,162,13,164,217,41,165,124,254,82,5,80,
171,21,192,119,215,64,252,34,224,219,195,85,93,4,141,26,4,71,174,18,94,151,136,95,156,235,71,251,36,49,119,84,88,72,229,147,192,75,140,186,17,28,208,104,35,155,17,122,109,27,130,177,83,212,86,254,52,244,
76,77,3,43,170,250,223,151,190,103,149,36,32,18,81,198,37,179,60,31,96,181,226,119,3,240,217,42,27,128,137,223,119,200,155,184,58,110,16,236,92,38,60,122,17,237,132,54,67,91,118,49,17,8,228,35,196,220,
183,172,198,142,225,83,160,223,203,189,24,21,36,232,32,141,22,142,67,147,46,87,111,30,174,22,215,3,95,197,210,181,150,55,249,122,226,11,236,138,96,193,86,224,210,124,128,21,22,93,168,131,207,239,18,86,
216,96,32,193,84,209,104,147,96,251,10,193,177,11,73,89,176,28,203,79,245,227,196,250,192,210,90,59,158,219,129,155,65,115,71,140,104,12,52,247,144,224,216,36,137,243,81,224,213,227,36,240,63,1,223,101,
201,62,65,109,55,147,241,230,90,168,49,181,132,46,112,90,166,105,86,5,204,180,107,126,241,172,131,207,239,18,232,55,24,122,106,42,196,27,72,179,133,28,125,203,2,30,46,183,192,232,105,108,152,94,157,120,
8,179,102,135,113,1,52,218,16,118,96,252,244,166,222,2,92,77,178,69,85,151,35,130,129,131,216,10,167,72,179,216,210,249,229,119,129,85,208,40,47,132,61,226,250,159,233,183,141,173,129,247,110,168,129,
229,103,23,202,112,151,193,53,64,28,193,177,215,205,87,22,109,228,249,252,2,224,51,229,55,115,102,110,70,229,122,96,120,184,92,44,16,198,72,24,225,218,91,72,189,202,156,121,138,33,141,14,127,139,188,107,
160,12,210,49,194,97,177,215,83,185,245,0,3,133,78,211,234,253,247,221,220,138,164,239,187,2,230,250,223,103,35,136,221,101,6,215,25,164,43,136,167,85,43,247,249,237,2,223,20,201,243,151,8,184,16,57,254,
58,52,247,33,218,4,242,70,79,200,135,168,106,184,226,68,244,30,224,169,188,111,68,28,218,104,161,186,227,237,188,245,37,21,193,255,139,101,148,215,23,133,56,41,160,18,198,133,89,129,229,142,131,83,122,
19,29,77,124,209,255,154,159,27,129,71,10,104,253,162,60,198,40,63,87,212,64,14,191,131,28,186,146,136,31,12,31,0,1,244,189,166,32,181,124,221,158,255,121,226,239,109,238,39,214,223,200,147,233,163,192,
171,79,128,141,29,94,222,67,186,224,137,211,202,11,130,164,153,220,241,82,171,61,223,128,86,62,7,106,7,120,28,225,237,220,111,93,8,27,251,200,225,203,208,217,74,70,198,228,156,4,225,86,208,122,205,224,
213,207,113,204,41,254,198,208,55,130,117,241,149,113,209,175,229,69,18,61,101,114,28,179,4,115,130,124,5,19,168,141,59,15,147,121,132,11,176,2,75,10,130,88,193,3,237,52,39,47,90,28,167,65,170,182,252,
174,98,121,126,215,114,191,213,16,130,152,224,240,101,123,56,184,6,99,124,161,31,43,173,149,197,145,47,208,26,36,191,13,198,92,95,94,0,215,135,227,88,116,248,31,201,123,32,22,140,182,54,144,237,180,215,
189,152,126,149,99,186,6,88,61,175,56,92,150,245,119,154,234,187,189,87,25,55,221,160,218,63,178,117,205,158,92,209,38,99,196,239,4,150,119,85,119,242,71,170,39,53,12,39,92,155,190,11,188,94,52,176,60,
193,111,81,166,8,138,154,174,68,13,27,35,188,160,188,20,47,128,98,101,157,52,106,44,171,226,203,105,170,23,191,61,38,205,181,170,1,52,58,73,169,159,205,145,139,1,32,124,96,69,162,7,249,151,159,10,58,170,
107,239,89,119,190,138,141,24,41,47,58,44,54,68,206,170,70,47,150,23,88,172,0,42,214,160,168,185,44,223,223,105,170,23,191,152,137,19,77,91,114,179,4,177,29,27,29,59,215,65,19,75,225,89,5,242,175,60,113,
73,65,203,145,75,140,94,215,179,14,60,10,252,55,202,114,115,136,154,190,68,13,51,42,134,74,197,77,79,163,240,33,106,26,44,203,250,59,2,242,72,13,140,140,255,129,140,240,249,101,9,34,27,11,237,38,250,69,
111,103,213,197,65,52,73,234,150,113,70,160,79,16,92,95,182,233,37,75,151,38,130,26,53,204,168,24,127,157,141,165,88,11,80,116,89,145,223,27,129,207,151,185,131,41,104,3,63,4,94,155,188,104,82,7,113,186,
185,78,111,95,172,89,53,32,41,104,57,225,33,216,94,82,107,60,213,144,70,135,191,15,35,50,34,22,33,181,2,227,212,23,56,159,205,80,108,26,76,82,201,184,100,241,59,85,131,84,151,125,224,27,200,20,97,127,
193,146,55,167,183,180,111,90,164,97,181,98,252,181,181,218,86,174,103,26,142,3,255,5,139,14,79,97,40,204,138,179,73,185,130,116,30,225,217,183,80,156,5,152,206,233,233,74,181,254,78,65,77,196,111,154,
156,39,81,19,191,206,212,201,155,155,76,55,141,101,93,200,239,222,164,210,86,253,180,7,158,122,144,206,49,114,182,208,173,6,36,86,96,8,141,249,202,101,21,148,7,104,62,31,45,55,237,229,20,72,213,226,23,
37,197,76,77,252,186,247,119,126,105,40,68,160,221,176,239,167,27,115,184,67,217,163,115,138,101,116,89,123,209,49,19,183,123,14,32,143,2,255,47,69,119,135,19,35,67,26,243,13,33,43,198,2,20,76,133,203,
179,254,110,161,122,203,15,172,2,202,229,161,79,135,199,240,154,0,116,172,130,197,12,149,145,235,60,242,35,143,252,43,78,5,66,135,72,167,234,58,144,158,122,145,22,85,45,110,236,112,26,112,115,225,92,163,
67,22,23,192,36,213,65,227,210,102,122,219,198,76,232,170,121,2,184,48,213,146,201,113,208,206,134,157,16,55,245,113,89,234,208,153,210,208,36,42,215,128,49,185,48,190,30,224,193,227,16,22,24,249,38,5,
151,215,215,40,68,54,226,73,169,87,67,44,30,4,73,51,179,203,153,234,242,22,224,179,104,165,14,243,8,248,62,194,43,83,175,17,40,186,191,137,107,207,92,190,103,99,214,198,85,76,126,23,88,5,68,144,180,71,
144,127,89,248,52,152,131,201,14,240,117,44,131,226,92,33,91,236,230,5,134,51,87,138,41,164,11,172,81,41,206,158,155,128,191,45,99,195,51,16,49,107,225,71,209,100,78,211,166,253,63,155,118,175,146,255,
15,198,9,96,48,49,55,203,247,141,15,46,135,176,123,187,208,192,136,70,141,164,106,244,244,44,150,8,45,106,170,171,83,77,132,61,11,39,81,249,114,145,27,156,3,5,190,137,232,76,85,111,37,116,184,189,45,220,
254,134,157,140,120,166,227,187,74,86,81,139,17,99,129,85,3,68,98,243,125,150,48,147,151,103,109,120,148,162,82,100,82,95,96,212,152,201,10,92,204,2,236,142,249,44,148,147,216,120,194,42,81,108,80,247,
108,17,171,36,1,216,93,221,66,29,22,5,158,141,85,242,1,94,70,243,45,64,117,1,18,6,115,231,102,121,14,20,95,2,254,43,69,148,210,18,69,227,36,47,112,74,230,247,1,166,138,91,172,245,119,4,173,92,252,192,
234,249,189,57,211,26,10,210,140,113,87,182,113,123,27,54,80,123,54,235,15,86,75,0,175,142,236,197,198,210,171,5,56,250,73,236,203,97,121,82,190,204,196,241,244,83,144,184,159,136,167,247,5,206,111,1,
166,214,95,113,158,156,45,234,145,234,242,36,54,247,237,108,4,118,240,163,43,219,102,253,205,215,245,91,165,200,232,149,81,95,104,28,32,162,72,160,118,44,242,89,165,238,190,167,92,210,192,200,63,2,239,
44,186,49,141,195,169,125,129,243,37,66,23,111,253,157,4,249,107,170,207,131,251,46,232,171,243,172,40,205,24,119,233,48,122,117,11,217,136,44,42,53,59,11,159,252,37,242,124,254,199,10,81,18,253,149,177,
201,169,62,8,226,201,114,24,27,54,247,3,224,204,220,91,73,203,99,197,211,249,2,231,179,0,85,208,226,210,94,234,224,243,131,69,10,57,138,221,244,209,165,67,160,106,115,227,206,119,127,79,174,42,83,15,94,
99,100,100,92,80,20,105,22,55,113,141,231,192,16,96,229,237,30,103,65,17,212,40,156,106,70,194,249,4,48,45,117,180,184,135,187,46,226,247,15,44,80,197,86,54,98,226,75,135,136,175,110,18,108,196,139,68,
62,175,97,93,195,186,135,78,159,30,249,77,44,72,51,70,154,49,58,187,15,212,227,1,19,193,197,162,195,42,214,11,107,196,73,101,162,252,197,230,10,130,168,22,34,126,215,3,95,169,65,148,240,49,100,129,132,
204,52,242,123,233,16,226,100,81,207,86,27,139,134,29,93,104,43,229,242,6,99,30,22,218,9,105,28,110,33,97,108,99,195,71,159,223,85,242,119,122,150,207,223,0,255,15,243,70,135,37,201,70,208,196,23,56,226,
58,156,221,2,44,166,91,147,206,31,80,181,137,240,20,11,38,98,74,35,198,237,110,16,95,222,180,240,251,226,174,253,183,169,183,0,254,116,236,183,78,97,35,50,27,118,124,156,215,7,65,60,227,8,233,21,85,157,
67,4,211,49,194,233,104,164,124,169,105,168,206,216,219,90,92,0,183,64,190,168,42,85,79,248,253,111,34,238,217,133,183,18,42,238,202,38,218,10,96,107,241,73,90,128,23,128,59,22,222,74,57,188,136,140,25,
15,237,64,3,133,205,24,117,33,19,174,173,170,31,126,158,250,179,133,137,224,99,192,91,51,173,153,116,82,109,94,114,70,11,224,108,237,89,248,154,61,142,229,252,212,32,218,203,92,209,222,44,18,58,232,4,
68,111,28,66,35,144,164,58,247,130,221,250,23,129,143,80,191,186,128,17,240,163,113,151,128,118,2,130,195,29,194,237,14,26,77,124,176,122,1,244,76,195,22,150,34,51,123,96,164,91,41,134,145,99,210,103,
19,192,197,110,236,180,68,118,213,150,95,33,227,15,211,8,147,219,221,38,188,46,130,134,226,174,88,86,145,52,93,239,246,158,239,152,61,13,124,102,209,54,22,204,191,48,225,215,104,71,8,182,237,88,140,152,
48,51,139,239,2,123,102,97,206,232,176,90,98,254,200,32,200,212,44,244,192,174,139,248,61,206,162,226,39,138,4,14,237,52,137,247,182,32,14,9,175,111,17,30,23,226,203,13,226,139,13,19,194,0,100,35,189,
199,103,62,118,47,160,60,68,125,172,192,243,8,127,28,187,68,50,35,160,28,158,122,170,143,78,186,214,98,77,243,28,32,30,193,74,105,77,63,74,43,237,254,170,228,250,2,167,79,132,158,223,250,59,10,82,7,241,
251,33,232,153,133,182,144,90,125,123,91,184,253,45,20,8,66,135,182,109,220,107,120,93,155,240,104,155,248,74,147,232,141,38,241,229,6,210,84,164,153,28,188,217,142,225,143,169,71,29,68,128,127,154,184,
132,19,84,98,164,145,148,38,154,124,93,121,225,243,204,195,163,88,206,238,12,69,74,146,107,50,77,146,206,92,121,211,165,193,8,153,164,231,129,235,118,242,250,143,162,149,139,223,51,8,47,46,178,1,9,29,
26,7,184,221,45,92,167,137,4,14,201,38,130,43,22,8,17,104,92,215,33,220,137,136,222,220,32,186,208,196,93,13,144,70,34,132,211,251,8,95,195,134,155,29,89,164,221,5,240,20,50,185,67,235,90,1,225,117,45,
130,237,216,252,127,213,167,55,121,214,147,13,122,209,225,233,68,48,181,2,227,0,66,237,187,54,167,19,166,88,176,62,29,140,188,178,251,116,81,193,106,126,125,129,234,111,224,127,3,126,51,247,218,162,136,
40,174,213,196,237,111,38,149,78,198,140,51,84,112,123,1,52,148,230,173,45,194,235,59,196,23,155,196,111,55,112,151,67,72,45,194,233,4,226,71,192,87,230,110,251,34,88,251,126,141,240,236,68,91,77,1,7,
205,147,109,36,84,180,141,183,239,60,101,210,160,55,229,230,244,133,138,93,96,101,243,251,54,52,238,70,236,214,216,74,66,201,2,67,190,235,0,114,238,230,157,164,129,85,71,123,31,71,22,24,82,147,116,121,
227,221,109,171,238,28,232,84,195,107,108,142,20,193,69,130,52,148,230,169,22,141,147,109,226,11,77,58,175,108,224,222,9,8,182,157,101,58,141,23,194,215,129,159,1,31,155,251,55,204,207,191,16,240,31,192,
216,54,106,36,232,94,72,120,99,139,240,88,27,183,159,148,71,155,44,240,29,172,160,106,213,189,3,207,106,210,192,146,165,159,128,9,254,105,232,183,2,211,201,212,153,116,241,169,88,101,133,180,11,60,221,
83,189,46,226,247,35,224,76,255,141,216,255,3,198,229,169,73,50,219,148,182,55,112,113,56,107,105,251,238,238,52,22,116,87,32,84,26,183,182,9,142,68,116,94,219,32,186,208,64,247,133,96,203,217,67,100,
180,96,252,22,229,20,202,29,75,177,170,44,44,241,3,9,228,79,35,151,145,68,248,218,66,176,237,104,158,222,35,60,217,177,241,225,211,119,125,29,62,18,236,89,156,135,177,235,104,10,23,87,90,158,173,119,35,
141,14,130,36,67,188,186,209,147,233,72,196,79,170,22,191,39,64,95,232,251,36,247,198,148,156,239,4,2,197,197,33,218,177,231,195,84,86,223,56,210,225,114,215,4,217,86,54,239,219,167,113,177,65,231,149,
38,241,91,102,49,201,214,56,51,139,127,194,114,161,110,88,172,33,19,137,129,239,18,142,24,26,152,90,182,251,66,176,165,52,223,213,34,60,209,33,216,118,104,91,208,253,38,210,140,166,245,115,206,55,143,
161,199,51,204,103,129,139,76,83,192,88,1,237,21,114,25,147,173,170,246,68,159,254,145,158,58,39,171,22,191,95,50,141,73,156,69,50,175,208,6,241,107,58,159,111,145,165,254,5,180,45,184,107,1,193,209,152,
205,7,246,216,124,223,62,225,241,24,119,37,64,247,146,177,196,137,79,173,207,70,82,190,141,227,66,223,231,197,190,34,148,111,143,28,23,237,4,183,27,160,14,154,55,119,216,188,119,151,230,237,251,72,67,
237,243,216,84,79,163,112,218,228,22,47,128,158,34,249,59,44,221,110,50,153,226,8,195,93,224,36,159,11,39,201,130,83,11,192,23,169,94,252,158,195,4,112,118,4,16,135,70,13,180,147,250,60,203,11,101,234,
190,77,28,212,184,49,34,188,62,38,60,223,32,122,173,73,124,217,4,36,216,26,240,17,10,17,49,223,64,249,28,194,93,197,54,134,11,8,223,39,28,40,114,154,118,117,59,130,108,40,205,155,219,132,55,118,8,143,
196,104,36,184,107,97,191,140,165,195,143,162,16,105,196,116,187,28,249,50,231,187,192,158,34,73,3,35,223,100,156,37,40,86,204,69,156,128,184,209,65,16,141,167,158,235,99,7,248,60,202,141,51,53,183,120,
158,130,41,34,150,121,36,249,65,218,105,246,126,119,217,182,73,34,22,238,90,0,33,52,111,235,208,56,17,17,191,221,32,190,20,18,189,209,64,91,3,62,66,91,231,7,196,220,7,220,15,156,88,176,21,151,129,103,
9,248,221,96,219,52,18,116,63,32,56,18,211,76,124,151,225,81,179,142,221,94,208,251,13,35,126,151,70,153,170,188,249,215,88,140,5,66,86,109,42,80,79,125,73,69,240,9,96,180,15,155,164,106,121,168,249,62,
64,141,3,75,247,8,38,90,64,117,241,249,253,4,116,68,133,226,9,36,86,158,107,55,123,149,35,236,139,130,154,54,105,255,128,3,119,213,132,176,113,115,39,121,133,116,94,222,32,122,179,97,70,214,150,203,54,
233,121,85,158,71,185,11,229,110,224,93,204,86,67,240,18,240,28,1,191,19,233,151,39,109,11,26,11,225,17,165,121,106,159,240,198,196,199,215,201,8,223,52,191,41,25,136,46,129,243,29,93,207,50,9,129,207,
49,41,58,172,2,46,200,179,0,19,223,223,228,139,118,27,248,26,90,121,183,247,73,100,84,121,246,9,36,150,159,137,223,76,193,158,226,73,133,112,215,68,38,56,226,216,124,223,62,141,183,66,162,115,77,226,11,
161,69,93,55,250,162,198,127,2,254,132,114,72,225,20,202,13,192,117,152,43,98,27,187,24,98,96,23,216,67,184,32,112,30,56,219,39,151,10,186,31,160,1,132,215,199,214,45,191,33,34,56,236,186,62,203,153,69,
44,141,47,185,0,17,47,130,158,165,243,48,86,95,243,165,220,111,197,178,64,134,124,128,170,65,95,148,100,4,91,152,211,177,122,241,51,191,223,236,164,226,215,218,76,186,151,245,114,71,153,143,16,194,19,
17,225,13,49,241,133,144,248,124,131,248,205,6,238,178,88,193,129,144,212,74,223,197,158,118,246,196,235,157,186,84,0,135,5,40,78,82,116,34,65,54,149,224,68,68,227,230,152,198,141,29,100,83,209,86,70,
248,22,20,47,155,39,56,247,248,122,89,244,148,201,23,176,17,35,57,37,220,52,71,0,69,193,77,206,206,197,74,90,85,61,80,255,121,22,17,63,192,181,55,122,65,159,186,145,118,35,119,3,19,194,27,35,26,39,35,
226,183,19,33,124,39,176,232,235,190,229,227,105,90,140,64,176,191,141,110,218,187,8,40,130,56,144,80,145,109,37,56,230,104,92,31,19,220,16,19,94,103,227,120,221,126,128,94,149,194,99,180,230,82,233,19,
65,197,87,133,246,148,207,215,24,51,223,79,79,0,197,46,82,155,208,123,236,6,31,97,218,112,115,121,252,17,248,201,92,107,6,54,12,205,181,54,109,136,223,100,63,103,181,164,66,184,23,88,241,133,163,142,240,
134,22,186,47,38,86,187,98,41,52,177,224,118,77,12,243,230,99,87,7,193,33,37,216,114,200,150,137,159,108,171,249,247,34,65,91,182,110,119,159,37,144,35,130,245,50,187,61,235,202,87,201,17,65,145,108,16,
68,147,238,239,232,139,127,11,120,4,228,230,242,218,171,183,54,120,0,0,32,0,73,68,65,84,57,21,191,180,215,28,194,21,216,208,62,183,223,76,18,188,107,46,126,57,104,203,196,138,0,27,78,119,4,26,183,68,221,
200,45,163,30,96,138,117,153,67,181,202,205,145,117,127,221,213,229,206,191,100,62,193,238,168,34,223,5,246,44,139,175,98,21,150,254,144,253,176,27,4,209,180,102,86,190,176,88,105,106,173,188,219,251,
52,86,217,101,118,2,77,70,49,36,221,222,112,245,196,175,15,7,234,4,58,214,181,5,38,203,73,39,57,207,21,163,42,36,193,103,63,14,216,179,76,62,141,93,115,221,180,175,238,5,168,163,179,40,210,186,252,21,
138,159,0,60,13,250,204,92,171,119,197,111,179,247,126,121,108,96,149,113,14,37,127,111,96,199,189,193,100,51,182,201,44,86,210,106,105,250,6,208,76,162,79,101,168,114,18,87,39,6,109,150,176,253,37,33,
75,206,203,26,203,240,96,218,213,227,19,88,162,244,57,128,70,215,34,208,238,63,89,54,128,175,169,74,213,150,223,175,68,152,79,252,36,241,249,165,150,95,185,226,119,4,27,175,123,34,249,255,24,54,227,253,
10,223,128,229,144,92,119,223,198,146,177,203,232,135,11,22,4,138,64,142,98,17,193,170,175,227,89,121,6,248,109,242,119,29,68,199,129,28,7,254,182,234,134,44,200,151,176,107,239,13,243,1,142,126,198,60,
10,149,139,223,25,208,95,204,101,222,164,209,222,253,205,50,125,126,183,0,119,217,255,114,125,25,59,88,83,20,120,211,194,51,101,35,111,97,221,158,135,202,223,87,161,36,19,208,215,197,180,23,168,79,99,
22,65,72,2,35,141,110,202,196,176,248,125,86,171,31,222,118,70,132,199,231,90,51,200,88,126,197,71,123,175,7,222,3,156,86,173,60,34,190,202,108,131,92,147,50,199,92,247,124,158,231,75,219,73,57,92,76,
255,200,139,234,47,31,73,211,171,170,206,253,45,146,175,230,141,5,110,96,117,247,111,90,122,115,250,121,134,238,19,112,70,202,137,246,54,129,15,98,115,246,122,209,43,16,213,52,117,167,104,33,236,83,142,
215,129,125,86,231,6,238,86,58,182,227,83,165,225,37,217,220,210,181,98,48,10,151,14,38,174,250,6,95,76,252,178,209,222,197,197,47,4,222,159,188,182,23,221,152,39,31,213,226,45,157,129,155,86,177,121,
86,138,173,164,83,30,175,245,191,157,174,200,98,25,172,171,248,65,191,0,54,176,217,219,106,32,126,186,128,229,151,136,95,250,126,49,238,5,249,48,22,200,240,148,76,207,210,89,252,142,27,81,237,251,2,171,
33,128,138,89,172,189,15,186,15,136,101,170,145,212,34,109,170,76,122,2,168,58,125,65,193,242,120,1,145,249,196,47,141,246,182,154,189,247,243,115,20,213,79,2,183,46,178,17,207,68,134,238,46,85,144,69,
99,194,42,163,138,178,94,91,17,115,230,2,54,144,191,143,66,142,205,180,104,218,237,93,137,227,53,55,169,0,126,22,171,34,82,37,103,177,121,60,38,51,120,97,139,93,237,174,213,40,34,224,113,7,118,60,124,
146,110,185,164,117,175,135,191,112,50,77,41,182,209,27,78,111,220,225,77,92,158,123,163,203,101,100,192,102,209,99,51,21,186,190,62,191,65,26,88,217,152,119,87,220,142,151,152,52,249,118,246,132,56,232,
169,160,245,13,92,39,76,102,124,154,251,204,53,129,15,1,31,152,119,3,158,153,136,24,83,12,97,230,27,61,29,51,237,198,118,217,222,196,44,171,186,23,97,125,109,236,183,90,240,84,13,41,73,234,248,65,17,63,
176,161,112,119,87,220,134,231,176,178,86,70,142,231,26,164,55,220,43,143,116,24,223,252,226,119,11,240,89,148,67,243,110,192,51,51,19,157,75,26,139,141,93,158,134,84,252,198,143,43,113,88,116,181,234,
7,254,56,28,214,27,26,137,117,133,139,159,175,6,39,75,201,202,172,19,163,103,133,91,14,137,248,45,112,34,83,39,237,252,23,195,221,192,195,245,72,180,247,12,98,34,56,225,174,20,204,245,145,153,236,102,
12,175,81,111,1,124,3,179,142,199,162,73,89,179,66,72,197,47,158,234,248,173,21,203,45,5,210,207,239,200,90,126,243,176,120,132,234,54,204,5,224,169,49,26,143,185,76,187,150,203,212,55,239,235,147,23,
169,148,252,89,249,114,152,208,221,159,142,217,143,223,90,81,149,0,158,3,126,186,216,38,22,62,91,167,176,153,236,60,213,48,147,249,210,21,193,193,211,158,118,125,167,191,28,46,2,123,179,236,123,201,76,
63,98,37,157,183,123,222,91,33,43,126,7,148,145,179,194,149,200,155,8,255,184,216,38,100,209,232,252,73,148,71,23,107,131,103,65,102,190,235,52,18,164,161,189,156,96,1,162,145,41,47,99,54,196,121,224,
206,89,247,191,4,134,242,255,38,174,16,39,165,197,102,154,194,155,254,110,239,1,102,217,62,192,87,64,191,199,34,242,165,11,62,245,224,102,172,26,132,167,90,66,44,242,62,125,89,124,21,52,194,124,130,129,
131,56,164,191,154,209,212,188,74,61,5,240,60,57,249,127,147,208,56,76,38,158,202,77,253,25,166,43,126,85,122,192,234,193,50,115,221,254,136,77,85,55,63,221,162,173,204,43,161,199,17,190,188,80,27,60,
69,49,123,93,185,52,213,37,10,32,72,130,30,233,231,179,241,242,204,107,44,135,87,38,47,146,131,10,218,9,144,102,60,121,89,81,136,131,100,254,107,61,144,126,191,44,203,234,2,155,248,45,114,176,179,226,
55,31,1,240,165,53,79,108,63,56,196,153,153,11,103,63,167,215,176,164,232,163,133,182,105,113,114,39,238,153,140,89,126,26,7,72,195,141,62,30,98,69,66,52,10,23,57,118,107,197,50,108,224,151,40,210,242,
155,159,79,130,207,243,91,27,22,207,129,171,99,121,172,171,115,175,57,41,21,40,181,252,58,19,167,188,61,80,148,109,1,94,98,222,122,126,208,157,187,23,183,176,78,111,131,222,179,232,70,60,107,197,57,160,
78,215,68,132,205,239,188,16,218,9,144,141,184,191,120,76,87,252,194,233,253,132,7,132,50,131,32,151,129,111,44,54,176,70,32,14,139,24,250,243,185,3,239,236,168,31,85,207,45,49,126,184,217,242,121,147,
41,18,160,39,162,130,118,64,54,34,32,25,29,21,7,104,167,209,29,51,239,233,209,40,233,97,240,138,192,15,89,228,132,10,189,40,223,98,226,119,31,54,212,205,83,63,102,142,120,22,200,21,108,114,156,170,139,
128,164,20,19,152,9,20,52,128,40,36,104,198,184,40,241,249,121,114,41,35,10,124,6,22,232,246,66,98,178,135,201,36,237,11,137,95,3,243,253,213,13,135,249,123,174,96,85,138,175,97,233,32,157,228,187,128,
94,122,72,147,252,78,75,218,201,105,51,123,38,92,209,40,214,230,13,38,119,176,210,118,206,149,242,81,48,175,80,31,1,28,59,254,119,42,210,121,240,20,92,28,90,170,75,55,109,204,247,123,243,40,90,0,207,176,
176,248,97,145,170,88,122,62,192,249,183,245,193,133,218,82,44,111,98,23,249,107,192,91,212,123,52,194,65,225,60,245,168,254,211,198,174,137,249,72,31,127,10,218,238,249,203,93,28,34,27,174,196,153,71,
87,159,34,131,32,111,2,143,47,116,156,133,36,217,53,200,124,48,55,33,90,249,197,125,25,120,30,155,217,238,146,253,28,127,33,206,141,208,115,226,167,69,79,23,163,46,145,224,115,20,241,107,162,129,188,72,
135,69,134,195,66,182,190,150,20,101,1,94,3,30,91,124,51,154,248,43,10,49,217,239,163,186,177,206,14,120,138,222,156,174,158,69,73,70,47,144,142,94,152,84,33,102,58,246,177,177,193,85,79,103,186,152,16,
143,170,230,34,73,93,197,162,170,198,172,33,69,88,128,215,16,190,201,162,254,156,36,90,69,234,247,91,188,93,239,95,120,11,243,241,50,240,36,194,149,138,246,191,126,4,88,161,206,118,208,29,253,33,0,141,
184,55,26,100,126,206,81,189,0,78,93,1,102,20,185,99,122,83,159,96,90,37,221,235,224,16,139,90,128,103,49,159,223,244,227,57,243,16,155,204,200,146,52,23,108,145,113,138,229,103,249,59,224,7,152,31,212,
83,20,105,26,71,59,232,155,229,79,163,192,38,80,10,220,162,73,242,47,3,15,20,208,210,121,217,101,238,17,32,100,18,160,25,121,239,168,171,203,220,194,245,163,177,192,197,115,22,209,66,186,189,128,37,105,
22,55,3,213,189,69,109,104,74,28,240,13,68,47,78,92,210,51,61,201,20,167,218,202,43,133,165,38,130,139,59,113,206,1,49,230,41,171,130,249,243,17,19,11,111,108,33,211,212,117,80,117,214,101,77,153,215,
71,118,142,66,124,126,36,23,121,50,159,71,49,39,40,0,110,47,100,75,211,243,29,204,151,228,41,138,174,248,37,186,52,120,109,164,73,64,139,23,242,140,88,196,2,91,156,249,253,127,58,65,252,82,132,181,159,
222,114,94,230,17,192,125,24,83,207,79,38,189,180,247,10,146,193,217,157,133,38,51,26,228,70,150,59,233,205,127,144,222,64,254,34,43,134,73,226,151,65,93,33,209,224,42,253,181,243,9,96,146,49,49,245,111,
79,242,3,61,253,204,218,129,136,128,111,210,61,148,57,165,169,198,5,231,4,250,122,26,201,24,197,254,129,139,11,115,172,168,13,77,129,2,255,214,255,137,79,58,93,136,212,31,60,133,248,245,89,129,225,66,
78,254,133,199,224,206,73,26,133,158,29,37,25,40,48,229,242,137,21,40,62,24,210,199,44,2,120,21,248,46,217,167,101,222,129,116,131,95,229,245,93,178,104,209,130,113,184,200,141,77,224,231,228,69,191,53,
185,51,103,173,210,123,208,73,243,64,167,17,191,204,58,26,139,5,68,230,55,192,207,1,15,206,189,246,252,204,63,250,35,181,124,103,249,205,202,164,89,243,14,28,211,166,193,188,1,252,35,50,197,216,222,137,
7,87,135,255,44,86,36,78,20,186,181,209,236,3,207,140,252,54,237,14,251,39,238,116,12,70,123,103,185,73,37,169,133,55,127,110,224,171,88,38,67,115,222,13,204,201,156,5,80,147,18,35,115,8,217,82,38,86,
95,33,166,241,1,190,1,124,139,34,42,85,44,135,101,141,237,252,195,196,37,98,138,200,83,91,127,178,209,222,69,70,53,207,127,172,149,106,70,133,204,149,255,183,112,64,195,251,170,187,76,178,0,47,2,223,42,
197,100,46,103,2,230,38,176,83,202,150,135,121,105,170,165,34,204,237,233,11,114,228,51,67,192,99,18,170,146,12,123,157,203,194,57,7,188,107,254,189,207,204,21,230,10,190,44,126,51,170,175,132,223,101,
156,5,168,152,207,175,120,202,179,192,119,88,206,60,39,17,211,206,222,149,38,170,30,240,217,183,114,145,226,196,47,101,1,235,104,217,22,224,92,249,127,139,84,215,236,199,95,143,48,190,32,234,183,65,203,
137,142,149,103,130,111,151,181,225,1,46,50,139,13,155,138,160,42,52,189,79,16,72,82,160,138,21,191,46,243,205,26,248,6,246,96,91,214,68,97,51,79,208,94,156,248,37,86,160,31,30,146,107,1,238,99,62,191,
114,146,67,203,245,63,108,149,185,241,12,151,102,94,35,205,200,143,14,120,86,190,144,140,237,45,73,252,152,219,10,116,44,215,10,172,91,69,234,3,201,224,211,238,18,54,170,97,191,180,61,150,27,134,95,86,
20,239,218,220,107,70,98,66,216,116,69,38,127,79,143,194,84,39,160,140,92,198,52,103,47,14,208,193,210,77,133,239,107,174,124,204,87,128,219,74,104,205,32,23,177,82,105,83,83,164,245,151,221,230,65,55,
2,27,153,3,123,9,248,134,76,147,234,50,15,73,55,176,140,19,153,97,89,2,184,88,169,127,7,68,130,4,131,153,252,37,95,141,105,49,129,73,169,57,2,68,193,188,93,201,17,219,76,186,188,145,216,118,75,22,255,
57,175,179,101,89,101,139,87,127,46,136,146,239,199,218,147,250,0,29,232,55,40,51,213,69,147,97,75,229,222,227,203,170,255,55,223,126,148,100,8,32,208,73,167,40,28,40,224,86,38,169,0,78,179,27,71,113,
2,168,88,213,150,102,226,54,93,150,229,59,123,251,223,194,122,63,101,187,82,222,41,105,187,91,216,212,175,126,92,250,148,164,105,48,143,77,149,228,60,47,130,117,253,202,191,238,151,245,60,219,156,127,
213,196,15,216,73,125,129,75,124,4,167,67,199,210,145,42,227,22,76,199,107,23,133,38,142,207,197,202,87,189,11,187,201,255,56,253,126,103,222,199,235,192,29,51,175,53,27,101,13,189,59,9,220,141,77,72,
230,153,130,0,171,234,178,112,65,198,145,36,247,154,22,217,157,26,205,178,146,181,231,155,96,61,141,6,71,98,71,190,10,255,75,183,32,5,99,94,5,139,114,250,59,219,193,188,190,185,148,163,192,71,139,105,
212,72,150,17,8,185,80,210,118,15,177,188,64,224,90,208,96,25,254,136,120,41,214,31,44,90,152,117,122,102,31,110,151,21,191,131,232,120,78,141,206,78,8,13,55,111,213,239,119,176,84,167,195,204,18,136,
154,237,120,191,138,242,145,153,214,152,141,139,216,184,250,50,120,23,11,245,78,14,30,229,250,204,210,193,237,203,75,2,94,86,85,143,163,192,145,153,214,56,200,226,151,146,254,246,78,56,111,29,191,180,
240,196,108,93,84,157,233,245,22,229,94,71,197,204,255,155,207,157,172,206,144,213,90,48,93,210,167,12,252,63,45,162,22,77,92,222,93,191,204,169,38,111,195,106,1,78,198,137,175,194,209,71,82,6,77,102,
30,15,153,218,140,183,2,191,43,182,77,125,156,3,222,93,210,182,203,234,98,167,110,153,170,74,123,173,36,25,11,48,113,0,105,206,203,205,249,138,131,101,135,217,175,98,37,8,150,193,116,101,247,231,41,91,
180,238,100,131,49,179,29,151,116,233,91,139,110,210,0,101,137,148,50,199,8,144,41,57,149,252,191,44,55,208,90,208,155,19,68,251,254,75,24,184,58,231,17,179,229,142,122,232,96,3,204,143,47,97,95,39,177,
174,112,126,66,107,122,131,31,240,60,171,177,56,230,117,194,108,97,231,120,246,17,57,211,81,86,80,240,2,208,42,105,219,167,38,47,226,25,164,200,137,209,243,89,190,0,92,100,57,2,8,22,145,124,60,247,27,
95,6,107,60,137,127,24,55,247,5,114,138,242,4,240,34,38,84,69,7,20,202,203,182,88,206,8,150,181,163,170,137,195,203,164,172,20,131,60,78,51,116,225,137,175,183,54,11,243,63,40,78,23,216,138,60,230,43,
86,58,158,87,75,216,38,88,111,100,190,212,172,3,78,249,22,224,242,41,43,197,96,20,159,2,254,239,37,239,115,125,208,52,64,52,243,133,120,43,54,244,177,44,159,215,43,192,123,10,220,94,76,121,67,237,78,151,
180,221,181,199,91,128,139,115,24,19,65,207,114,17,224,150,18,183,95,116,247,250,117,202,42,3,236,253,127,115,179,142,2,120,137,242,198,90,142,226,94,224,161,37,239,115,125,208,185,221,6,101,70,131,231,
175,248,147,79,89,254,191,77,108,42,88,207,28,172,163,0,2,188,88,193,62,31,196,91,130,203,166,76,199,255,46,197,138,96,217,233,47,158,57,24,87,17,122,149,249,3,240,193,10,246,123,47,112,3,240,47,192,155,
21,236,127,117,73,45,192,217,46,199,235,153,117,88,220,108,156,167,152,132,232,50,139,173,250,232,239,2,172,99,16,4,44,55,239,37,202,175,234,145,199,9,224,239,128,51,192,111,40,239,201,191,126,76,172,
82,147,203,205,148,103,241,191,66,49,2,120,150,242,134,168,157,46,105,187,7,130,101,205,127,80,5,63,167,26,1,76,57,157,188,206,3,47,96,55,193,178,125,147,43,200,204,34,56,219,152,236,217,40,170,80,72,
89,209,223,147,248,234,47,11,177,174,22,32,88,50,235,57,202,141,20,78,195,205,201,11,122,109,186,148,188,174,37,47,63,124,41,101,246,235,241,166,18,90,145,114,13,235,77,28,93,112,59,190,251,91,83,150,
226,3,148,32,41,189,189,124,177,253,25,240,245,165,239,117,52,215,39,175,44,29,172,10,241,126,242,119,140,117,151,148,124,97,148,228,251,136,57,202,83,36,219,156,38,29,35,196,122,8,101,156,53,193,124,
164,35,10,155,206,244,179,78,145,76,179,180,104,163,70,112,142,197,4,176,77,121,254,96,31,0,89,144,242,186,192,66,55,198,236,218,32,13,202,189,76,243,121,139,234,124,129,211,210,76,94,101,118,229,234,
202,43,44,62,1,87,67,209,155,153,161,155,41,179,9,236,121,166,45,124,145,207,27,204,112,213,235,244,207,155,134,32,101,90,191,7,130,198,12,7,124,58,210,234,87,49,104,27,116,95,112,187,16,108,65,120,76,
33,4,93,86,189,22,227,159,129,255,141,245,77,249,89,101,138,122,0,191,139,25,4,112,198,107,126,209,252,189,178,252,127,183,43,234,175,233,5,89,236,0,102,187,181,65,242,234,128,94,17,220,59,130,187,36,
232,174,117,129,221,62,196,23,3,52,194,58,87,203,235,14,239,3,223,91,218,222,60,211,82,164,83,228,174,130,182,147,199,101,224,237,5,214,47,171,0,106,213,190,237,181,96,177,32,72,166,212,149,182,4,90,130,
118,180,87,252,51,83,11,85,66,179,8,227,183,132,240,122,181,103,255,60,94,172,249,120,21,243,195,248,140,249,245,228,8,227,74,147,45,206,57,224,186,57,214,107,49,211,12,109,179,220,12,122,120,214,198,
120,134,153,47,8,146,10,95,12,26,9,218,198,92,235,105,225,207,48,89,110,80,92,27,182,92,124,81,8,79,96,158,175,229,21,240,254,1,240,191,44,109,111,158,101,115,27,229,85,137,62,15,220,63,199,122,37,86,
103,150,147,229,109,251,224,48,155,5,152,118,152,35,208,142,88,119,54,26,248,110,210,246,18,203,47,126,11,194,235,64,154,160,105,172,179,92,107,240,10,202,247,129,207,151,186,23,79,85,156,162,92,1,156,
135,178,242,62,79,224,203,95,21,194,100,31,96,182,43,27,129,238,9,110,87,208,22,38,118,225,84,91,233,39,196,44,193,11,224,246,48,81,20,146,201,184,75,124,193,159,129,95,204,216,90,207,106,80,102,74,200,
85,230,235,94,151,149,255,231,211,95,10,98,180,116,101,162,185,180,5,221,23,116,47,233,238,130,137,216,34,22,91,19,80,112,23,65,175,88,160,100,73,193,145,95,37,47,207,122,177,65,185,129,129,121,138,153,
150,85,0,245,116,73,219,61,112,12,251,0,211,183,81,210,53,141,233,137,82,38,183,111,97,52,217,150,66,252,14,104,11,130,235,172,69,75,152,214,232,23,32,187,192,39,74,223,147,103,153,220,73,121,101,167,
94,101,54,63,224,85,102,10,128,76,205,54,229,142,126,57,80,52,250,102,44,83,146,192,6,61,225,75,45,193,178,44,51,49,63,160,219,7,189,128,5,71,210,8,113,185,252,14,37,198,151,176,90,39,202,236,26,206,218,
157,245,221,223,21,192,18,81,99,192,129,102,125,112,137,117,182,44,36,41,110,30,191,97,150,96,176,157,8,113,185,109,248,61,74,19,248,88,169,123,241,44,139,235,40,175,60,214,62,102,209,13,14,101,28,133,
23,192,21,32,208,200,70,102,104,154,187,183,220,105,44,251,73,186,191,238,2,184,203,150,59,216,77,169,41,143,223,242,255,183,119,230,205,110,92,231,153,255,29,0,247,94,238,187,22,82,20,37,89,18,45,219,
50,37,89,182,227,56,142,157,56,41,103,153,76,18,199,85,147,201,212,252,63,223,32,250,72,83,73,101,50,89,61,78,98,167,172,56,150,108,209,218,168,149,20,37,82,92,68,137,162,200,75,242,242,242,46,0,206,252,
241,156,131,62,104,116,3,104,160,27,104,224,246,83,213,188,196,214,104,244,242,244,187,62,47,252,51,227,183,100,85,40,7,138,20,8,200,226,94,23,213,1,82,9,32,228,136,6,33,241,149,1,117,160,13,173,27,42,
156,174,29,96,18,46,241,101,224,175,176,124,135,42,192,60,235,120,0,56,93,208,186,63,1,190,52,196,251,238,82,204,200,206,125,200,194,173,144,19,26,165,33,190,16,53,215,62,119,71,36,88,63,8,102,27,81,6,
186,24,172,3,255,138,229,33,164,38,93,117,141,204,38,142,81,156,236,198,37,134,27,231,94,196,72,77,80,146,167,66,142,40,117,51,181,105,184,246,185,79,160,189,2,102,145,73,88,170,31,2,255,23,120,9,73,25,
85,152,45,44,18,233,47,230,141,53,134,155,58,88,84,249,75,153,85,141,102,18,165,87,132,54,139,192,38,180,175,2,27,96,246,163,123,112,241,125,196,175,1,239,96,121,10,248,2,154,190,85,97,54,112,148,226,
98,112,87,144,18,115,63,20,49,6,97,145,202,43,201,29,13,224,119,129,95,2,183,167,188,45,201,8,186,77,218,215,45,172,67,253,30,131,89,116,46,113,177,36,184,14,188,132,229,117,11,79,0,79,81,73,144,207,2,
142,34,11,190,8,12,106,111,187,77,49,215,210,17,202,19,169,159,27,52,144,148,208,67,104,146,217,153,233,110,78,31,24,96,17,236,29,104,110,90,26,247,154,73,196,5,61,214,209,128,163,183,209,144,156,199,
169,228,136,202,140,67,200,98,42,226,236,24,36,112,80,84,33,118,149,253,45,0,94,12,161,14,252,22,112,28,13,19,42,237,36,51,179,36,133,233,230,199,150,250,189,134,218,142,160,112,187,248,251,227,38,240,
174,91,246,97,57,134,110,32,247,76,228,219,43,100,193,46,138,233,196,24,36,111,95,205,255,152,33,196,213,96,142,0,127,130,14,226,171,20,151,205,26,29,54,138,11,54,175,88,234,123,13,245,3,72,27,119,114,
210,90,16,13,54,58,5,236,196,178,19,149,41,220,131,102,3,239,167,138,27,78,19,247,83,12,1,222,69,6,66,90,59,90,17,2,168,7,24,127,48,83,133,4,164,201,97,221,15,252,1,114,249,126,193,164,169,101,16,92,92,
208,180,161,117,221,98,215,160,126,111,16,23,156,60,252,116,183,171,68,97,132,6,150,189,72,182,104,55,234,225,220,230,150,5,38,81,226,61,60,14,160,237,155,39,60,68,113,242,88,151,73,38,192,235,20,163,
1,88,101,127,11,194,160,44,240,23,81,97,240,73,138,43,46,29,29,53,89,131,237,85,176,151,44,245,251,12,181,157,78,196,97,250,227,62,155,104,40,211,103,211,222,144,33,240,93,224,177,105,111,68,206,56,76,
113,245,128,105,110,110,81,238,239,145,130,214,187,229,49,140,32,234,14,36,24,224,227,131,69,29,228,145,209,113,137,47,41,57,82,59,72,164,87,88,161,63,180,143,74,93,15,58,34,26,200,147,41,162,28,230,19,
146,11,162,139,184,54,22,40,174,174,113,203,163,97,135,39,137,195,192,31,163,4,192,207,40,19,189,88,36,236,213,130,230,85,75,189,109,168,31,68,2,15,155,84,233,137,36,88,55,171,89,152,215,61,84,84,61,224,
38,42,136,142,215,3,22,241,93,247,81,174,112,201,92,97,148,59,255,19,192,127,163,140,61,179,13,9,40,180,174,90,154,87,36,240,96,170,52,68,47,186,201,111,158,81,100,230,52,78,118,55,41,38,254,183,171,128,
117,86,112,24,117,42,220,94,224,123,104,92,224,27,200,42,156,62,156,140,151,89,130,246,77,139,93,85,209,116,109,143,43,149,153,236,80,246,242,193,141,29,176,91,103,63,28,66,9,168,34,10,147,47,0,79,7,143,
63,44,224,59,96,112,215,73,133,49,48,222,88,76,149,122,124,27,197,7,95,96,184,62,201,137,192,44,41,35,220,188,100,169,31,50,212,239,117,3,217,39,55,138,179,92,240,228,183,245,126,255,131,20,147,13,190,
138,206,38,159,72,44,170,245,174,202,0,23,136,188,130,223,247,3,127,134,84,84,202,1,43,145,85,179,16,185,196,166,78,103,22,201,150,66,103,132,41,91,141,252,160,56,1,209,54,221,73,143,149,2,190,99,30,203,
147,74,133,70,206,193,160,175,162,54,177,147,192,7,121,174,120,36,132,46,241,117,75,115,3,234,15,152,142,117,184,37,208,33,63,219,111,180,193,60,211,98,145,10,202,87,80,156,209,82,12,1,86,221,31,5,35,
75,22,120,88,236,69,2,11,23,81,67,250,244,235,224,140,171,23,188,13,246,156,165,241,128,193,236,6,187,198,124,187,196,53,89,125,118,179,47,249,65,217,10,221,243,197,34,138,163,93,45,96,221,222,2,92,166,
152,190,227,138,0,11,198,184,49,192,126,120,208,45,39,129,119,40,129,228,188,217,38,210,107,158,183,212,239,131,218,62,3,11,115,90,42,83,115,163,14,54,134,58,192,243,76,128,32,145,212,34,8,208,175,179,
136,216,183,175,99,172,80,32,38,81,0,251,53,224,47,128,103,39,244,125,233,176,174,44,198,64,243,35,75,243,195,54,182,5,102,222,162,44,222,242,91,119,228,55,152,220,231,141,254,227,40,74,73,185,133,172,
191,34,188,156,99,204,128,94,231,172,163,72,11,48,196,2,240,44,216,227,200,45,126,127,34,223,154,4,223,71,92,119,45,116,231,219,106,161,219,107,100,9,206,186,53,88,147,69,107,215,109,116,187,217,106,73,
159,94,100,155,22,103,50,157,0,63,193,218,245,17,182,105,16,42,247,119,2,152,20,1,122,236,6,126,7,37,74,158,71,202,26,83,131,89,82,203,92,243,130,165,126,16,106,135,12,102,187,107,163,243,195,162,102,
9,158,252,214,6,198,252,182,34,142,50,108,63,187,181,80,27,250,224,15,111,253,101,59,30,213,248,203,9,96,210,4,232,113,12,248,115,224,101,84,72,61,29,120,105,173,22,180,174,89,218,43,150,250,1,163,216,
160,117,101,35,179,2,79,126,119,43,203,47,5,217,166,197,89,242,189,1,250,121,219,195,97,47,50,22,42,20,140,105,198,228,22,129,95,7,126,128,146,37,211,129,59,209,205,54,192,21,78,55,47,91,108,83,207,153,
89,136,194,212,3,242,155,53,171,117,114,200,102,81,181,115,190,123,84,214,95,41,49,45,11,48,196,65,164,61,120,14,120,139,226,42,234,251,195,11,42,52,212,70,215,94,109,83,219,91,163,190,91,110,113,71,88,
161,108,168,169,166,209,174,5,7,114,250,199,180,140,216,142,132,5,134,87,59,111,161,52,196,184,251,179,157,121,29,85,247,199,132,80,6,2,244,120,196,45,239,162,210,153,169,197,7,205,18,216,77,67,235,170,
165,125,221,98,118,27,234,251,13,38,148,223,47,3,234,138,87,218,85,27,13,183,47,207,241,44,35,30,34,11,1,182,173,18,34,117,70,219,175,174,8,61,227,184,134,5,170,4,200,196,80,70,7,239,9,36,206,249,50,26,
68,52,121,4,153,98,90,234,34,177,203,150,218,33,67,109,191,58,73,104,78,57,70,152,68,126,21,6,97,103,166,119,27,160,233,18,34,163,220,92,44,163,36,211,170,233,111,19,68,153,44,192,16,13,224,215,80,182,
248,37,138,153,179,48,28,106,46,62,216,132,214,39,150,246,13,139,217,235,44,194,37,166,227,26,123,242,187,19,196,252,202,121,28,203,134,253,153,63,97,129,77,11,139,25,57,169,134,74,170,178,19,96,21,255,
155,32,202,74,128,30,7,128,223,7,222,68,110,241,116,162,112,190,167,120,17,104,66,251,170,165,125,211,82,219,165,140,113,109,39,17,17,22,189,63,235,234,102,177,43,46,219,91,185,189,89,112,8,41,156,103,
211,237,243,110,108,131,225,36,213,188,235,235,219,44,179,29,159,202,253,157,32,242,22,67,40,10,79,162,121,188,39,153,182,246,160,75,148,88,95,58,179,108,169,237,53,212,246,104,68,167,143,23,21,66,134,
13,96,3,236,74,59,178,42,182,142,182,95,94,56,2,156,205,244,9,11,108,88,168,215,6,19,154,63,46,155,118,148,227,239,39,11,86,152,16,26,22,254,29,13,63,42,123,223,225,118,164,61,248,5,212,73,114,106,170,
91,83,7,227,70,238,180,174,89,90,55,44,181,29,74,160,212,118,26,106,187,141,220,166,166,205,37,86,104,26,208,94,83,173,162,158,24,127,157,91,20,143,144,149,0,157,150,162,89,111,195,210,0,18,52,232,38,
213,98,148,34,179,162,90,246,42,164,160,129,78,134,179,88,190,2,60,67,249,231,15,220,227,150,227,192,79,153,182,8,171,147,219,194,34,114,186,105,105,213,69,128,181,221,6,179,205,80,219,97,192,216,145,
51,200,166,1,237,187,150,246,45,23,243,27,53,43,89,1,84,115,154,125,90,156,81,185,145,169,91,88,48,201,251,223,205,166,182,27,46,60,145,253,24,29,203,252,137,10,99,33,204,2,191,2,156,198,242,53,68,46,
101,199,1,36,194,250,6,134,151,177,133,200,17,13,15,35,241,85,22,100,154,181,111,91,218,55,219,152,69,131,217,97,20,47,220,165,217,197,24,35,125,190,33,200,208,52,160,189,234,200,207,199,252,42,183,119,
28,52,80,61,224,149,81,62,108,55,45,166,145,144,21,118,143,59,2,20,163,221,160,170,225,231,19,70,35,118,32,239,0,63,197,114,26,169,184,148,221,45,6,248,50,202,22,255,138,226,6,97,103,134,89,0,48,208,134,
246,114,155,246,178,178,198,181,93,142,16,183,187,44,114,205,64,219,89,135,177,139,166,67,126,55,171,246,182,156,241,0,163,16,160,65,105,184,186,133,109,166,251,6,102,128,117,244,220,104,214,223,2,89,
203,116,42,140,141,180,58,192,43,192,63,96,57,129,202,81,202,30,113,218,6,124,139,104,54,73,17,218,111,163,161,6,102,201,185,76,77,104,93,107,131,49,146,235,223,238,136,112,39,114,147,27,6,90,86,18,93,
117,104,223,81,217,13,117,170,108,111,190,56,138,110,152,35,193,174,59,43,176,78,52,29,216,43,240,140,126,156,238,167,252,225,167,121,66,27,120,181,65,139,126,49,165,83,192,121,100,13,62,58,169,45,27,
3,247,2,127,138,220,249,83,20,163,210,59,58,234,96,234,238,94,210,114,45,119,203,109,76,221,96,118,42,86,104,118,128,217,105,176,27,208,94,174,74,93,10,194,189,192,18,178,217,178,193,143,24,184,171,14,
33,111,237,217,13,59,174,128,66,85,255,55,57,124,0,252,18,184,221,232,152,241,233,102,251,45,224,39,192,203,88,190,128,92,206,178,227,43,192,151,128,247,80,71,73,17,122,109,227,193,215,21,122,55,249,182,
35,195,134,193,44,26,216,238,95,103,18,228,87,118,11,191,8,60,76,22,117,152,16,53,84,230,114,23,216,101,84,85,184,201,168,174,175,199,231,70,254,100,133,97,113,9,120,5,19,13,179,106,116,2,234,131,83,246,
203,192,139,192,25,44,223,65,69,165,101,198,18,170,31,60,142,220,157,55,167,187,57,125,16,38,80,172,50,190,166,9,230,128,227,165,226,9,112,161,240,111,40,31,30,100,84,2,4,168,67,107,185,13,55,13,181,109,
140,107,165,239,39,191,1,232,91,241,102,54,8,183,128,151,48,189,131,218,20,3,244,110,240,112,119,176,207,128,191,117,241,193,175,32,89,171,50,99,17,248,38,114,49,126,1,220,156,238,230,12,128,137,52,10,
237,186,147,235,47,190,231,120,43,94,52,71,70,254,164,83,224,97,29,108,203,210,110,169,246,51,163,230,95,136,170,251,163,56,188,140,172,190,196,35,211,232,28,180,13,100,51,13,143,83,200,26,124,22,185,
155,101,199,67,110,121,21,197,8,203,162,233,146,12,35,161,3,211,48,163,84,173,101,197,86,140,48,110,67,94,76,182,58,210,26,157,24,32,53,39,152,177,233,110,86,174,55,124,4,228,73,128,229,138,123,79,15,
87,49,131,19,162,178,0,189,249,222,68,206,208,240,212,176,6,252,28,56,131,196,77,103,161,108,230,25,162,217,197,239,77,121,91,210,225,139,106,239,130,217,77,85,251,87,12,142,146,133,0,221,117,210,94,179,
157,254,112,192,89,132,35,223,172,106,192,225,76,159,232,143,173,126,166,172,163,107,123,168,146,184,110,49,4,63,16,40,123,48,247,83,84,54,243,52,240,121,36,233,93,102,236,2,126,27,201,110,253,18,184,
62,221,205,73,65,195,149,86,44,152,142,91,92,33,87,60,8,188,54,244,187,107,110,94,76,147,238,152,185,43,78,183,119,45,102,71,230,184,237,97,242,149,165,203,22,206,240,215,250,236,251,0,107,192,89,76,134,
164,167,137,19,160,119,133,71,15,234,190,6,188,134,229,56,42,157,41,123,97,167,159,93,252,33,146,221,186,49,221,205,73,134,93,181,152,218,68,92,225,173,134,195,232,108,31,60,179,218,215,250,109,164,140,
29,112,115,152,185,235,228,211,134,191,118,166,151,253,53,82,22,162,238,70,63,204,238,185,117,26,120,1,147,93,45,170,87,14,171,197,40,241,192,56,206,0,239,99,121,6,37,74,202,14,31,31,124,13,197,7,203,
51,14,201,199,156,214,92,66,100,246,239,212,101,195,81,6,137,35,56,11,175,61,104,206,114,13,181,56,110,154,44,132,50,157,4,136,75,228,180,55,44,166,6,198,204,228,13,246,42,134,147,192,229,204,159,116,
162,21,189,197,47,94,200,49,110,230,103,71,11,149,159,252,29,89,100,200,167,139,167,209,16,247,135,167,188,29,221,168,203,242,176,190,214,172,66,158,24,156,13,118,66,8,67,137,155,26,103,37,14,39,132,186,
135,105,76,127,243,19,4,55,173,146,56,184,184,102,54,233,254,105,98,29,229,30,254,142,81,200,207,19,125,11,26,61,114,128,126,7,108,56,83,126,124,92,5,254,222,170,136,250,171,72,214,170,204,216,14,124,
15,37,72,94,98,216,97,218,19,128,93,183,80,207,28,99,170,208,31,253,45,48,239,250,54,237,112,55,31,159,40,217,176,42,104,135,126,199,106,242,214,159,255,61,155,129,43,239,183,121,221,170,109,179,220,157,
71,103,140,225,69,70,109,110,240,162,21,27,250,219,235,2,251,199,77,183,228,23,124,127,7,201,110,61,131,44,173,178,227,113,20,159,121,5,149,206,76,23,113,87,120,182,92,149,108,152,236,5,184,11,137,144,
46,39,110,71,203,145,69,22,203,187,243,57,87,224,94,22,2,12,201,60,110,233,117,136,97,40,226,158,6,82,139,153,51,161,134,66,124,206,195,237,43,137,47,253,51,242,60,33,55,145,85,229,245,7,203,222,254,83,
71,201,156,199,81,39,201,116,213,102,252,144,158,77,51,74,166,126,118,48,249,223,117,136,36,2,196,145,223,40,168,1,173,190,3,149,234,76,178,255,215,41,217,216,86,74,18,199,191,199,147,96,146,228,215,116,
240,25,202,238,158,98,220,173,241,55,38,95,41,153,104,1,134,104,58,139,99,199,216,95,29,199,117,224,199,88,14,1,95,167,252,149,240,251,144,218,204,19,136,192,47,77,101,43,124,185,197,186,197,108,75,17,
229,156,3,216,166,187,0,39,135,68,25,122,219,26,83,224,192,184,223,82,79,92,193,81,38,217,130,216,2,219,238,67,126,30,158,4,211,183,123,82,104,3,47,98,120,43,151,181,185,201,137,118,141,46,201,178,70,
223,107,200,39,68,54,40,170,14,237,26,240,67,43,41,240,175,83,254,250,193,67,192,31,162,172,225,73,224,246,196,183,192,223,197,124,209,250,188,185,194,45,157,145,182,21,196,59,139,71,111,33,178,101,148,
137,110,189,176,96,189,100,86,55,38,103,253,89,220,140,227,33,223,239,61,224,201,30,131,16,23,141,100,237,242,107,91,53,62,241,67,215,177,24,106,42,156,93,119,117,66,197,153,196,231,128,115,88,190,206,
108,196,7,31,67,238,251,171,168,215,112,178,48,72,141,100,222,18,34,237,88,216,195,116,34,0,0,32,0,73,68,65,84,153,137,119,33,139,199,125,232,118,18,213,145,101,33,140,126,48,128,181,208,54,241,245,21,
239,245,248,235,117,156,223,50,185,99,0,121,197,249,226,232,168,117,7,207,185,83,109,48,1,26,162,150,172,157,20,221,141,240,18,150,15,81,182,184,236,250,104,53,224,89,84,50,243,51,38,41,194,234,101,241,
55,80,146,106,30,8,48,109,58,97,219,130,41,252,2,244,237,104,154,63,93,196,254,180,93,190,180,79,188,20,11,75,250,126,205,130,226,143,129,69,130,5,175,80,196,222,175,57,215,183,73,36,98,235,48,152,0,221,
113,179,235,192,162,203,106,21,91,38,252,9,240,207,192,99,110,62,201,228,235,164,178,225,32,134,63,69,9,146,95,49,76,87,65,30,240,65,246,166,233,57,168,35,96,26,138,62,46,42,3,3,207,249,136,60,138,108,
244,63,130,39,192,162,238,40,209,239,40,210,250,11,174,206,28,127,71,180,237,121,239,156,79,48,252,148,162,84,154,234,10,23,217,117,18,231,233,52,134,254,61,6,236,29,48,187,76,167,36,163,96,156,5,251,
1,202,192,62,75,126,122,105,249,67,187,240,139,200,53,126,15,120,3,153,243,197,99,195,170,107,103,188,240,196,45,38,111,113,251,198,203,12,111,47,244,172,243,125,225,5,219,211,22,138,213,210,44,176,206,
214,2,172,228,180,178,139,104,198,247,185,194,170,175,131,30,237,180,100,150,185,254,191,190,53,252,10,91,74,134,152,157,38,58,21,227,189,196,73,127,9,44,241,240,175,141,189,45,222,148,29,153,239,13,212,
82,55,11,241,65,208,175,120,1,130,12,86,90,189,229,160,215,146,214,28,194,7,234,23,25,135,4,27,136,0,39,57,112,115,25,245,94,239,70,114,106,253,10,123,252,243,71,40,150,60,110,160,12,255,56,185,223,126,
176,232,119,62,206,184,205,166,233,104,161,155,176,235,242,205,21,109,116,188,198,41,95,83,156,143,32,206,231,221,235,160,48,187,179,243,77,239,223,46,111,60,254,255,240,113,93,161,59,53,16,36,111,76,
54,2,4,176,78,252,209,187,93,147,33,64,143,125,168,46,239,145,108,27,61,53,92,65,217,226,143,11,35,64,191,207,12,10,227,207,94,125,224,55,145,114,119,133,249,199,41,146,172,236,34,8,208,137,83,216,59,
182,111,17,123,246,206,82,75,52,251,116,242,25,242,101,224,223,128,255,71,89,37,172,186,113,24,248,99,224,219,20,233,154,120,203,47,73,170,169,252,168,38,161,205,63,174,2,255,132,20,217,39,119,123,30,
34,192,50,84,25,76,23,124,66,164,54,213,150,172,139,88,46,2,223,0,78,76,101,11,178,225,9,52,85,239,36,69,205,38,9,122,184,177,68,37,182,101,181,6,163,237,154,76,210,168,194,52,176,134,159,215,61,73,99,
169,174,110,15,187,97,7,122,68,163,9,49,214,192,174,185,74,241,108,10,210,121,227,23,72,122,235,235,192,177,169,109,197,112,88,64,238,222,81,20,3,201,223,130,53,68,197,235,109,20,23,44,163,196,81,247,
9,89,201,188,206,39,222,68,228,55,89,137,126,119,190,219,181,225,238,252,217,45,192,0,237,59,86,241,192,233,138,41,94,7,126,132,229,8,154,0,119,124,106,91,50,28,142,185,229,44,202,130,125,148,251,55,120,
210,91,67,36,88,38,177,203,222,237,152,13,1,166,10,195,226,44,240,22,102,10,18,120,46,47,209,94,165,171,221,173,31,70,151,226,246,34,145,43,22,179,203,76,162,62,112,16,62,114,203,89,212,183,187,103,170,
91,51,24,143,185,229,12,178,100,243,117,5,125,205,147,39,65,95,48,61,45,151,56,253,187,43,2,156,15,92,69,158,77,254,55,244,97,80,7,154,50,202,104,19,69,150,7,18,224,56,23,132,175,179,89,177,152,221,46,
51,60,125,135,230,18,150,191,66,195,143,158,161,252,65,246,227,72,150,255,231,80,64,11,144,65,78,72,27,21,94,76,218,37,238,180,99,165,190,163,60,234,219,21,70,193,6,34,190,201,198,249,66,248,98,231,59,
54,42,52,26,146,215,198,31,198,226,138,162,219,43,150,218,158,137,21,73,15,130,90,107,52,43,224,107,148,223,45,222,14,252,46,42,14,125,9,73,0,229,135,26,234,29,110,1,219,205,228,72,208,147,95,255,243,
161,34,192,217,197,5,224,121,224,238,212,182,192,143,37,189,227,24,47,99,5,196,120,22,160,135,39,193,155,65,76,112,250,36,8,82,115,254,41,150,211,192,119,40,191,91,236,135,52,189,129,68,22,242,11,32,215,
141,90,231,86,173,72,176,232,99,228,201,175,201,160,178,226,202,5,158,61,44,35,209,130,243,83,221,10,55,215,196,174,102,183,252,130,85,228,183,49,62,38,104,55,220,227,242,156,218,87,128,191,166,108,3,
143,210,241,101,224,191,163,65,77,249,193,159,32,119,173,168,181,168,99,52,60,249,49,240,213,10,101,194,6,42,229,250,107,152,34,249,25,162,82,151,17,45,63,143,6,26,93,153,207,220,11,119,129,217,59,22,
150,76,52,83,164,28,181,104,109,148,150,127,19,37,31,158,165,184,118,164,60,176,13,248,61,164,153,120,138,65,147,203,134,133,63,70,119,45,108,34,97,213,60,93,98,159,124,105,5,143,251,163,28,190,66,133,
65,120,9,141,181,24,109,22,71,94,112,68,103,87,137,70,148,142,113,11,173,161,78,133,252,44,193,142,242,170,29,155,157,11,194,26,34,193,255,13,57,169,205,22,139,67,192,119,129,255,2,220,155,203,26,125,
189,96,211,185,15,190,123,100,92,139,208,147,95,54,27,59,243,44,215,10,19,197,5,224,111,208,200,216,233,147,159,85,166,215,174,141,79,126,160,24,224,110,52,5,237,71,227,111,97,0,239,159,3,181,93,154,45,
98,203,117,175,223,64,153,215,139,78,136,245,192,148,183,103,16,30,112,203,155,72,104,97,124,132,214,96,29,201,208,215,137,200,208,6,203,32,120,242,219,36,171,40,67,229,2,151,19,229,136,243,121,248,115,
213,223,176,135,44,115,25,4,159,5,62,134,50,165,103,198,91,93,12,117,96,221,210,94,7,179,199,168,22,109,147,178,184,196,30,23,220,114,2,41,206,76,67,27,47,11,158,68,170,40,47,209,209,175,27,3,158,126,
252,168,68,71,126,166,238,18,37,117,34,141,152,52,50,12,99,126,21,230,1,39,41,195,36,68,15,87,200,111,253,236,226,28,11,219,194,50,152,223,194,114,27,37,12,198,135,119,179,218,208,94,181,152,117,139,217,
99,36,165,85,206,139,229,20,186,1,60,139,228,153,202,140,3,192,239,163,64,244,75,164,76,52,203,4,31,166,112,199,166,51,55,182,30,35,195,48,156,225,201,208,91,126,48,138,61,87,89,128,229,193,199,168,40,
127,114,234,230,253,80,67,201,142,85,11,43,96,107,193,200,206,156,16,47,131,249,35,52,109,253,211,177,215,220,114,139,117,3,149,218,96,175,41,251,104,118,187,11,202,103,9,203,131,53,44,63,135,142,44,127,
62,49,183,226,240,176,91,94,69,165,51,227,119,147,248,184,138,63,46,205,32,216,28,186,201,161,101,232,173,250,209,244,8,39,219,43,90,33,9,55,208,249,243,110,41,110,71,97,140,122,37,200,37,24,196,27,249,
181,118,126,175,129,164,168,253,52,54,3,124,31,203,63,160,187,65,54,4,154,93,182,233,124,245,64,159,139,69,247,131,86,45,102,175,137,132,85,91,148,205,14,184,228,150,195,136,8,123,167,134,149,11,207,32,
215,248,85,20,172,206,15,97,98,196,187,33,158,36,107,96,22,204,184,193,232,178,116,41,111,69,220,66,22,223,249,41,111,135,96,209,77,181,161,74,18,123,211,70,207,249,228,170,227,149,206,121,55,170,1,101,
248,35,224,72,253,185,167,143,189,143,228,154,66,119,248,56,240,62,62,235,51,236,151,120,129,212,126,213,255,62,184,190,138,126,200,146,235,35,46,231,101,176,130,229,12,26,127,121,15,229,142,15,250,65,
219,159,67,101,77,249,207,88,240,119,102,79,120,238,120,155,186,25,199,146,223,143,164,194,42,76,22,239,2,63,196,196,194,39,241,27,89,191,27,91,191,247,102,90,143,123,113,1,157,71,55,45,246,182,141,44,
190,80,20,181,173,197,44,152,113,170,75,190,131,19,85,174,63,247,244,177,38,112,25,248,66,108,115,31,199,242,22,208,30,118,178,148,245,50,76,131,106,192,252,133,180,230,44,138,58,176,228,222,156,199,44,
214,252,241,25,26,122,180,11,56,56,229,109,25,132,237,168,206,241,16,82,202,41,78,111,207,157,144,198,152,200,29,206,126,236,14,48,158,196,122,133,108,184,2,252,20,95,2,54,136,168,38,65,128,53,39,171,
183,97,177,55,172,140,163,6,189,101,89,161,231,129,137,122,204,227,97,155,254,219,250,57,36,159,7,136,0,1,86,177,52,233,158,86,213,64,86,207,123,125,86,219,13,127,1,12,123,17,56,5,7,156,124,141,217,110,
242,152,112,86,20,44,150,243,40,52,176,151,50,15,105,18,246,161,100,206,26,121,196,116,211,224,78,66,51,250,0,237,61,136,176,43,20,139,187,192,139,192,11,152,96,176,209,180,9,176,134,8,240,182,35,191,
54,189,86,95,124,29,129,37,72,219,61,61,208,29,54,160,80,214,31,132,207,214,159,123,170,163,35,250,9,226,225,251,130,215,247,0,59,24,182,220,98,20,226,234,20,78,59,107,112,1,204,98,45,250,145,229,195,
109,36,178,176,138,146,36,11,253,223,62,117,28,67,253,197,183,208,182,23,3,235,18,36,217,177,147,242,139,85,204,58,206,160,49,18,202,238,102,33,170,162,8,208,160,43,167,13,118,89,89,222,142,213,23,190,
63,141,0,131,197,196,171,19,18,183,213,28,4,254,52,246,236,74,253,185,167,30,12,159,184,132,108,176,251,131,231,238,65,110,213,133,174,193,70,222,252,12,255,63,42,252,143,216,68,180,98,157,91,229,75,47,
252,119,150,11,215,176,246,29,247,255,131,148,91,118,203,147,204,94,180,151,243,29,217,233,238,190,6,70,105,72,223,67,69,128,69,225,60,240,11,140,121,157,240,10,157,54,1,186,43,197,174,130,189,105,49,
27,136,12,211,200,174,223,115,254,97,188,70,181,251,61,71,80,133,75,72,147,159,1,255,152,36,135,245,18,42,77,248,122,240,220,23,145,203,151,111,183,72,28,13,84,237,125,211,170,230,103,155,129,37,87,70,
227,205,226,144,120,167,143,77,84,52,250,6,179,81,63,232,69,88,223,7,254,147,60,91,155,140,52,217,76,185,218,30,183,42,162,105,132,101,129,43,163,2,96,3,236,45,139,245,131,59,199,20,229,179,97,21,73,236,
252,51,134,7,137,185,189,136,252,254,15,64,253,47,79,28,235,30,51,39,124,108,109,143,37,184,23,89,58,239,143,183,185,3,224,19,36,32,26,94,67,67,152,54,129,166,137,172,12,159,26,47,7,154,192,69,107,249,
16,205,77,45,187,236,214,1,148,244,106,145,119,209,107,118,89,162,189,104,78,110,133,241,97,129,159,25,195,11,132,3,204,227,23,248,164,44,64,79,122,62,65,182,1,118,69,6,14,45,58,70,141,25,214,218,75,177,
0,227,46,113,240,158,253,192,159,36,108,249,223,24,163,86,140,250,115,79,29,139,130,136,221,184,140,8,111,95,240,220,62,116,129,159,79,88,105,190,240,68,232,47,166,13,96,93,100,104,215,233,37,195,176,
147,97,122,88,69,73,163,235,200,236,46,115,124,176,129,98,131,199,208,197,50,190,91,236,227,182,254,184,13,135,237,168,12,171,194,120,56,15,252,11,112,185,199,160,153,36,1,134,215,99,75,122,0,220,117,
245,191,43,68,50,108,65,192,104,108,2,76,122,205,176,0,124,159,222,107,240,31,129,101,255,157,245,231,78,244,29,166,246,1,150,99,40,134,228,113,16,217,99,147,27,122,18,146,33,200,222,242,100,184,1,108,
154,40,27,228,239,56,48,77,50,92,6,222,197,178,132,98,168,101,198,78,100,129,237,67,174,211,120,77,138,62,22,51,188,21,184,131,238,18,172,10,217,112,29,120,30,195,43,184,144,198,68,9,48,180,242,60,233,
173,3,119,44,246,14,50,9,214,137,10,154,195,58,210,248,230,229,71,128,13,224,207,144,177,22,226,135,24,205,44,241,223,57,200,251,182,192,223,3,63,64,230,164,199,55,144,17,59,121,57,169,48,150,0,93,173,
90,182,230,226,133,139,6,227,91,102,124,220,48,139,178,73,62,216,0,126,134,50,112,95,69,69,202,101,198,163,104,27,95,36,75,233,83,28,126,127,251,166,245,193,251,187,60,129,140,217,66,11,233,91,190,62,
209,111,141,187,155,109,228,218,110,2,77,171,191,190,14,56,102,233,77,8,222,242,219,23,123,254,95,81,146,183,11,245,231,190,28,88,128,201,167,162,5,78,99,217,71,55,9,30,115,95,214,179,210,137,34,110,29,
110,18,89,135,155,200,58,220,12,50,148,195,164,204,243,197,29,224,61,44,159,186,111,223,63,224,253,211,68,3,85,200,31,117,255,31,173,126,208,147,160,9,254,159,142,157,84,46,112,86,156,194,240,83,194,242,
180,36,139,42,237,137,172,22,160,55,58,188,85,223,116,86,222,186,164,212,236,42,186,221,251,214,215,97,180,37,139,177,0,15,35,221,204,48,6,191,134,225,135,120,158,50,221,223,25,89,128,253,171,248,91,192,
143,129,223,166,59,96,125,2,153,153,255,150,250,201,73,34,180,14,125,208,213,213,238,216,26,208,64,181,106,13,100,33,250,68,138,47,170,44,22,94,118,235,9,52,168,105,123,225,223,56,58,238,115,203,19,168,
87,244,242,72,107,201,89,186,168,2,231,80,149,70,254,109,142,113,120,34,115,215,135,79,68,218,77,219,45,98,18,38,45,167,139,163,192,31,198,158,107,1,127,75,152,16,10,97,226,22,160,123,178,15,206,99,217,
133,218,172,60,246,51,137,236,112,86,248,59,87,104,29,182,144,133,232,77,246,77,192,26,221,13,38,151,72,185,6,188,131,197,208,157,101,47,35,118,160,26,189,58,138,249,102,187,77,132,23,73,250,62,93,164,
252,229,67,211,198,103,24,158,71,98,23,42,93,234,99,185,141,108,1,134,213,21,109,23,95,95,147,149,199,93,100,229,249,248,238,184,10,226,249,90,128,251,233,45,114,198,89,126,159,37,173,195,56,169,190,238,
24,160,207,224,245,199,243,200,196,12,21,82,30,6,126,7,248,201,192,79,79,11,177,192,43,109,213,173,177,110,177,46,136,107,22,76,100,25,122,115,191,152,154,195,77,116,39,63,131,172,193,71,114,255,134,124,
241,52,34,194,147,168,11,102,56,24,134,153,13,82,142,138,206,242,226,53,116,174,228,143,208,202,243,174,109,19,197,242,154,116,31,187,108,153,253,73,226,0,26,235,17,199,143,24,48,164,221,182,211,98,128,
131,127,232,123,168,204,35,204,178,28,192,117,140,12,252,116,25,16,47,179,105,209,177,12,37,234,96,92,71,10,69,78,184,91,67,195,208,111,160,253,57,254,156,230,226,176,128,110,116,71,80,201,76,178,91,17,
135,15,173,164,159,83,219,168,44,192,36,92,6,254,29,175,210,158,33,91,219,215,2,140,147,158,203,218,218,53,87,152,188,65,36,79,151,199,156,152,52,228,99,1,222,143,234,252,226,215,205,63,3,151,82,215,97,
192,184,223,222,235,2,7,111,26,128,51,168,196,99,111,240,220,61,200,28,253,96,224,167,203,132,208,93,246,86,139,115,145,117,71,68,174,114,141,94,226,204,7,55,208,196,173,26,218,135,101,206,140,238,6,62,
143,38,234,93,97,88,183,56,253,156,218,78,69,128,33,110,161,89,53,191,36,156,214,56,42,1,26,36,54,224,159,179,174,115,98,35,32,61,175,226,84,52,233,13,218,222,108,4,248,8,138,249,133,239,216,4,254,9,175,
106,223,135,0,59,82,110,159,253,197,111,36,111,156,107,75,235,92,228,241,191,116,30,63,77,119,219,28,232,130,254,49,112,163,235,253,73,255,15,158,179,105,223,49,77,132,251,192,207,203,48,64,195,96,106,
146,242,50,53,109,123,207,208,167,180,223,158,244,56,194,78,44,143,163,249,36,101,182,8,65,145,161,247,208,16,119,137,226,167,253,78,127,113,245,254,238,189,192,159,23,181,129,51,132,117,12,63,35,205,
120,200,66,128,113,17,219,150,209,77,188,109,117,141,57,165,246,169,206,238,30,135,0,225,219,244,86,14,124,140,225,199,168,242,48,125,29,126,4,172,203,88,39,91,128,161,219,50,152,140,62,70,238,208,195,
193,115,219,81,113,235,199,20,169,64,50,9,152,96,9,197,94,93,188,196,182,136,226,132,241,187,231,104,68,190,137,246,219,105,100,77,239,237,255,246,169,194,171,7,125,1,57,79,215,250,190,59,185,210,160,
142,6,193,151,217,234,45,26,111,2,255,138,233,179,255,6,17,96,16,163,51,62,190,189,225,18,25,222,173,109,199,222,59,205,61,62,58,1,126,151,94,241,140,155,192,223,98,98,35,86,227,235,240,156,230,111,0,
137,4,232,79,82,191,179,134,235,170,248,12,153,235,15,197,190,254,56,50,71,103,155,4,61,76,194,226,200,208,47,38,76,154,140,71,134,155,104,24,250,77,148,101,47,243,16,247,6,58,246,71,17,121,39,139,44,
36,235,69,46,178,117,9,240,18,242,148,78,3,173,190,123,32,141,240,194,243,171,41,194,83,119,20,221,5,201,225,57,91,6,140,70,128,223,165,87,59,242,58,240,15,36,237,191,48,167,17,214,9,251,243,208,66,253,
185,39,147,203,96,172,43,108,52,241,21,164,95,200,215,176,172,161,2,233,16,199,81,9,69,190,18,76,101,65,220,66,244,132,232,238,184,38,84,172,29,45,139,118,221,41,115,91,100,109,149,51,23,39,236,66,241,
60,67,154,18,73,175,21,184,21,9,112,21,248,15,52,119,183,215,101,75,66,60,78,237,207,181,205,192,202,107,18,85,114,148,141,240,226,200,70,128,75,192,127,69,189,235,33,62,2,254,30,39,108,144,72,128,241,
226,109,223,20,225,12,187,94,2,196,153,207,158,232,220,197,108,66,23,47,29,159,162,248,95,92,226,252,113,116,208,251,187,72,179,142,36,50,244,139,39,195,248,251,134,63,65,175,160,196,211,14,202,61,196,
221,160,76,177,63,230,55,186,94,237,181,2,151,216,90,4,248,30,42,209,208,181,144,28,227,138,30,135,139,47,216,223,140,12,148,174,82,149,50,19,94,28,195,19,224,65,84,230,18,239,160,58,139,196,31,250,199,
11,91,129,69,12,29,66,244,36,88,127,238,75,199,162,15,216,128,252,82,46,102,67,194,107,221,184,129,229,50,186,8,66,183,237,33,20,51,250,40,241,83,243,134,248,9,233,103,165,120,50,140,139,55,246,223,167,
30,155,192,57,44,183,136,212,186,203,138,37,116,35,188,15,133,64,84,54,211,123,129,54,216,26,4,120,25,248,15,12,111,16,142,12,139,95,180,161,167,16,196,156,109,16,102,153,89,210,11,49,28,1,30,71,153,222,
248,48,178,87,49,252,188,103,93,97,117,70,59,104,118,240,175,133,223,227,174,65,243,217,159,187,44,176,207,98,246,107,137,139,101,244,76,188,123,162,59,139,91,67,173,115,241,137,95,183,128,127,193,58,
203,160,236,89,224,34,144,64,126,38,140,233,152,216,123,211,51,200,71,81,6,254,16,229,199,7,88,78,18,182,113,233,119,46,0,255,147,114,75,135,141,131,139,168,128,188,215,226,243,143,227,199,187,173,34,
221,196,34,252,89,36,187,36,12,38,192,223,36,89,37,232,71,192,133,174,247,134,94,105,139,110,15,182,223,254,178,129,5,104,195,187,74,191,141,142,91,52,109,162,98,225,158,213,115,14,203,30,186,39,169,45,
161,20,246,121,138,156,88,86,102,196,239,220,190,227,36,200,40,155,240,70,148,126,151,191,133,229,29,180,31,143,166,190,171,28,216,143,102,23,251,248,160,117,39,169,183,0,231,173,107,184,9,252,210,89,
42,201,165,25,225,241,247,23,174,247,18,108,236,125,179,106,233,165,33,157,0,235,192,239,209,155,236,104,1,63,194,112,177,243,222,48,198,215,114,22,95,51,88,215,160,253,101,28,1,218,49,134,25,117,220,
99,79,132,189,95,124,30,85,251,223,27,60,87,67,193,242,27,196,99,68,91,17,73,238,114,56,245,42,126,49,244,226,83,20,19,217,77,175,12,80,217,112,24,185,54,107,192,117,12,45,52,216,125,158,8,240,52,146,
95,186,156,232,226,66,231,216,90,159,52,243,214,222,188,18,94,28,201,4,232,219,218,238,141,189,251,22,202,244,126,154,20,154,235,106,219,203,88,222,83,255,203,39,250,10,162,14,70,184,49,222,122,137,63,
15,23,83,50,196,159,115,239,234,219,179,183,229,16,183,14,252,190,77,218,191,17,214,129,247,157,236,150,111,75,44,43,22,81,37,255,18,34,190,199,153,143,203,93,51,119,13,111,226,163,79,161,103,228,9,47,
172,29,141,147,222,86,65,47,1,62,138,6,23,197,203,189,46,1,255,136,225,110,143,197,28,175,109,28,97,255,153,107,63,72,232,4,25,7,129,181,210,85,145,174,231,143,2,223,163,183,195,225,2,240,19,107,83,186,
9,42,68,136,89,131,38,126,225,68,251,238,4,234,38,137,7,144,43,20,131,255,0,222,5,226,231,188,98,219,97,44,119,43,17,93,26,186,9,240,43,72,52,56,142,55,129,23,186,222,239,227,163,177,117,140,188,25,185,
19,96,8,119,119,11,125,124,107,217,13,124,139,222,154,158,59,72,65,249,66,69,128,67,34,78,134,4,143,133,109,214,242,85,212,187,59,79,46,102,89,176,129,202,90,222,48,198,213,185,122,210,243,255,84,164,
151,12,237,143,6,82,67,250,114,194,59,126,97,12,167,0,37,104,221,223,190,73,218,81,54,163,80,2,244,136,7,244,133,95,3,158,74,120,247,203,88,94,46,126,163,230,16,241,147,35,250,255,2,58,209,158,156,240,
22,205,43,54,209,40,212,151,137,146,57,17,114,190,72,231,18,170,239,251,61,84,60,31,226,26,138,159,174,76,194,16,242,83,51,138,69,175,139,102,145,218,197,93,84,198,17,70,74,158,69,129,242,87,25,111,100,
99,152,75,219,26,136,31,201,104,95,111,34,87,226,2,240,77,202,159,40,41,51,110,34,153,170,112,92,64,247,158,175,200,47,13,6,213,174,62,138,229,215,18,94,191,136,212,229,189,184,126,225,104,0,255,99,18,
95,148,128,22,10,220,39,253,208,35,110,217,76,120,109,88,248,174,191,10,66,27,221,112,170,152,224,120,88,2,126,211,253,45,115,91,98,25,225,9,48,13,187,145,178,243,196,250,222,27,216,174,145,151,101,195,
56,197,177,243,90,88,59,14,226,99,2,43,100,199,54,183,84,200,31,19,247,76,170,59,88,133,10,21,182,44,26,88,206,83,252,92,180,97,53,148,45,202,86,30,164,55,56,234,177,140,166,99,237,162,252,130,161,179,
2,47,117,177,135,114,11,45,76,2,27,232,28,243,90,201,105,231,172,31,31,84,133,89,122,177,134,206,167,199,72,174,62,104,162,218,223,126,177,62,195,4,226,248,13,148,113,41,35,78,160,1,236,113,44,32,13,176,
147,147,221,156,45,131,163,192,175,83,238,249,197,121,99,29,149,179,124,136,146,27,27,211,221,156,25,70,148,1,255,13,146,201,237,2,42,119,187,147,240,218,196,97,174,125,127,2,101,48,163,227,16,150,111,
147,220,236,127,17,53,70,71,119,136,42,251,150,31,44,39,80,187,226,188,199,13,223,198,112,146,52,17,215,10,131,209,109,163,221,131,68,80,146,226,121,47,99,202,85,226,86,118,2,244,59,247,119,233,213,24,
4,201,44,253,12,184,212,41,64,245,5,193,241,118,178,10,217,16,237,179,39,81,169,210,188,133,27,150,209,136,215,79,170,27,231,144,8,29,254,248,95,237,195,175,161,190,238,56,214,208,117,122,174,108,251,
122,86,8,16,36,141,243,77,146,99,10,111,99,121,17,104,217,128,236,186,196,25,42,50,204,134,238,253,180,29,213,103,126,113,42,219,146,63,222,69,173,107,66,201,46,202,210,32,222,143,78,208,214,231,94,119,
111,57,140,225,55,72,142,31,159,69,83,238,146,7,186,79,25,179,68,128,96,217,133,218,232,146,20,28,86,128,23,44,156,239,185,59,17,244,37,39,53,157,87,164,216,139,100,13,194,195,40,62,56,11,250,131,105,
80,207,110,114,199,204,214,70,188,97,193,45,113,210,11,255,26,197,233,79,36,172,109,29,17,223,217,50,239,235,89,35,64,255,231,17,212,70,23,151,205,1,17,224,73,66,153,173,184,168,168,73,176,14,147,5,5,
182,46,82,68,88,221,31,63,182,179,204,19,235,226,88,6,158,55,154,79,147,214,50,184,181,144,68,120,174,22,164,71,34,47,126,141,24,190,128,122,204,147,174,193,55,128,87,76,146,213,87,178,125,61,171,4,232,
255,255,45,210,221,178,87,128,95,37,174,35,65,101,183,35,234,90,17,162,208,159,0,193,82,67,243,89,227,35,10,203,136,51,192,243,24,108,130,96,68,233,46,202,194,16,63,167,157,36,151,13,254,223,211,179,223,
187,159,238,67,125,252,247,39,124,195,103,192,11,24,13,38,159,133,125,61,235,4,8,106,153,251,38,201,241,135,155,192,47,176,124,152,184,62,255,184,203,58,180,78,202,203,68,68,24,47,23,223,10,132,56,152,
0,61,30,68,23,68,25,235,7,175,160,27,225,101,32,77,49,167,116,23,101,46,72,10,243,56,162,179,214,58,194,51,189,239,143,127,46,122,220,192,240,13,210,13,142,95,161,125,29,186,199,189,235,44,217,190,158,
7,2,244,255,127,6,105,138,37,237,226,243,40,246,179,150,118,97,119,61,145,100,33,214,76,183,133,152,52,11,101,158,48,60,1,250,255,63,141,246,127,25,186,139,86,145,37,242,65,215,179,243,76,128,33,129,133,
250,131,109,176,237,224,156,238,186,217,39,252,240,100,2,124,16,121,91,73,37,81,151,208,190,94,142,175,99,22,246,245,60,17,32,168,147,225,91,168,152,55,142,117,224,36,150,183,83,215,159,244,68,154,203,
236,9,49,201,109,78,58,217,102,13,217,9,16,212,157,243,91,200,42,159,22,94,117,75,51,233,98,158,133,139,178,47,146,182,59,84,151,14,9,47,126,12,123,110,77,3,9,112,63,134,175,1,15,39,108,73,27,201,129,
189,154,182,93,179,176,175,231,141,0,253,227,19,200,34,73,106,90,255,20,153,235,23,19,63,155,68,128,241,199,177,172,152,53,62,203,44,82,236,202,56,67,247,65,159,21,139,113,52,2,244,143,143,163,36,201,
158,2,182,44,13,203,72,142,62,146,80,155,101,2,28,116,238,120,101,100,11,182,101,245,54,255,186,255,76,156,240,122,126,103,42,1,238,64,153,221,164,236,46,192,7,104,224,211,237,196,85,85,4,152,35,70,35,
64,80,203,220,163,168,126,45,73,241,230,6,240,86,143,69,56,12,1,198,159,106,7,175,5,196,103,252,63,198,168,122,49,137,28,195,117,150,137,24,199,35,64,143,7,81,182,190,72,139,112,5,120,9,213,155,245,191,
216,202,72,128,105,177,183,14,185,225,44,59,197,237,172,127,111,56,50,211,223,128,211,214,157,246,184,247,137,29,24,158,65,83,27,147,235,109,37,83,191,220,243,241,138,0,11,194,232,4,232,255,95,71,241,
193,175,164,124,195,101,20,188,189,146,184,178,97,8,48,137,184,66,183,196,195,17,159,102,0,71,49,197,158,153,192,38,246,217,105,16,99,62,4,232,31,63,134,122,67,243,212,121,91,65,211,215,94,195,244,25,
52,78,247,227,169,93,148,3,136,174,67,118,109,192,218,104,76,109,88,142,98,98,75,248,82,210,111,24,158,0,151,144,44,253,9,146,59,126,110,0,255,137,241,215,72,194,250,102,148,0,231,173,189,41,9,45,228,
242,94,64,173,58,15,196,94,127,192,45,231,129,215,241,117,98,227,162,207,9,175,147,59,98,9,107,128,186,123,107,16,91,76,36,198,240,163,101,180,28,147,113,22,237,255,47,163,142,158,126,162,152,253,176,
233,214,115,30,185,97,229,249,229,73,23,185,191,145,65,100,209,117,141,60,181,29,55,54,237,102,153,232,198,230,71,34,13,212,234,248,20,201,55,167,53,20,227,123,35,183,111,44,25,182,130,5,24,127,241,97,
100,13,166,117,51,156,71,46,213,242,192,117,251,167,146,46,195,180,88,95,218,37,235,2,216,93,8,200,79,117,138,9,228,72,240,183,95,18,38,43,85,228,107,1,134,168,131,125,20,120,8,221,120,134,81,168,254,
8,248,0,204,7,232,162,236,198,0,75,36,124,60,178,85,146,116,67,11,247,183,63,126,158,228,252,99,239,186,134,36,23,198,234,226,199,46,233,59,227,207,37,133,238,178,91,128,143,161,242,165,164,240,80,27,
120,29,204,235,132,202,56,253,214,55,163,22,224,86,36,64,255,159,39,16,17,166,233,14,158,2,222,196,178,146,186,110,255,84,30,4,152,244,90,104,61,132,143,253,133,147,68,142,208,137,222,24,31,197,9,199,
147,38,157,128,241,253,149,180,237,249,17,96,248,196,34,210,126,220,143,234,8,15,184,199,11,232,6,116,6,221,144,150,211,55,158,129,23,98,248,56,245,162,12,137,37,78,108,62,230,6,93,201,135,142,227,221,
182,221,197,196,241,152,48,164,19,93,63,66,40,134,0,31,71,150,120,63,3,224,5,96,165,215,207,238,179,254,138,0,11,66,113,4,8,80,195,242,117,224,97,146,51,150,22,120,7,93,136,87,147,215,87,32,1,246,123,
62,254,27,227,179,82,67,235,162,22,92,32,53,247,31,151,148,193,18,5,208,157,43,78,157,104,120,119,236,251,114,38,192,36,44,34,241,133,155,189,47,229,76,128,225,141,164,233,158,247,33,138,192,77,197,208,
237,170,198,111,72,48,248,38,147,118,225,79,134,0,119,160,115,252,73,146,101,170,218,192,37,52,208,253,82,234,6,84,4,56,5,20,75,128,225,195,71,72,239,47,6,184,5,188,130,229,76,207,26,167,65,128,195,188,
39,201,21,246,86,75,146,5,4,138,69,46,25,76,131,104,102,96,96,237,76,128,0,251,32,39,2,12,244,201,237,6,176,14,182,105,135,119,81,179,16,220,160,215,139,37,192,131,168,115,227,56,233,202,204,111,186,101,
181,119,189,243,79,128,91,33,9,50,44,206,1,231,176,60,130,58,26,226,138,200,123,80,145,239,51,168,28,224,52,101,87,14,238,103,145,132,8,201,122,19,236,134,197,214,128,6,152,5,131,89,36,178,24,103,121,
216,168,183,210,90,96,215,192,174,91,81,128,165,59,217,16,146,94,201,46,216,33,241,32,240,69,44,15,245,121,207,105,36,4,187,58,161,109,42,37,42,2,236,197,57,183,124,145,100,151,97,47,146,132,122,22,185,
198,111,34,235,112,118,145,22,216,247,100,120,23,89,132,139,70,209,185,6,221,49,176,178,35,112,115,237,186,126,19,45,186,45,188,249,192,195,232,6,125,79,202,235,109,20,210,121,11,130,214,181,45,140,138,
0,211,241,54,240,182,85,13,219,151,144,10,70,136,69,68,144,79,34,129,205,211,228,85,66,83,6,132,214,143,119,21,215,44,44,200,42,100,1,237,1,159,32,40,114,164,214,40,8,199,112,53,129,13,103,241,181,221,
243,73,14,225,108,98,7,240,152,181,60,65,250,88,201,38,240,134,49,188,77,73,102,113,148,5,21,1,14,198,89,183,28,69,86,95,156,8,65,25,229,39,16,1,158,70,53,106,229,118,143,179,192,39,71,106,40,73,112,215,
170,24,197,147,97,29,157,73,158,112,194,46,133,73,110,163,183,232,60,233,109,130,109,57,55,119,254,136,239,126,116,206,61,74,250,175,90,71,55,231,55,169,136,47,17,21,1,14,143,75,110,57,138,229,97,212,
222,21,191,227,222,231,150,111,32,34,252,24,117,154,204,31,25,66,199,69,198,199,11,27,38,34,153,112,104,100,145,174,178,183,244,90,218,30,101,113,109,231,255,16,108,207,236,227,62,224,30,44,199,72,22,
252,0,209,253,5,212,181,241,30,243,116,238,21,128,138,0,179,227,18,182,83,42,240,48,138,21,198,79,198,69,84,107,245,101,116,2,158,3,222,167,171,196,96,14,16,198,207,60,25,58,43,204,44,152,200,42,12,221,
209,113,92,229,120,82,194,91,122,77,151,197,245,9,13,255,190,122,240,185,217,197,78,148,197,125,12,216,223,199,178,94,67,49,233,83,248,196,198,108,255,238,137,160,34,192,241,112,222,45,71,208,73,154,228,
142,44,34,233,240,207,163,192,243,187,238,51,179,157,56,137,35,36,67,235,226,109,235,232,34,108,128,169,59,66,244,150,97,28,241,178,154,176,56,57,44,77,105,105,177,45,23,207,243,53,123,243,149,208,168,
163,78,153,135,209,52,196,126,191,236,42,242,54,206,34,187,183,66,6,84,117,128,3,106,214,82,133,14,146,87,187,3,213,19,30,39,61,19,231,241,17,178,12,47,226,201,48,239,58,192,36,140,99,129,141,18,215,11,
201,203,187,199,190,48,59,36,195,176,244,196,91,139,45,58,86,93,164,138,18,108,199,176,101,42,163,90,66,89,202,96,242,169,3,124,16,157,63,15,161,98,240,126,56,131,50,186,201,99,61,19,182,189,167,86,112,
208,227,170,14,176,66,70,172,162,18,131,183,144,91,124,28,157,208,73,17,168,35,68,50,81,23,80,226,228,18,243,86,151,21,191,16,93,199,133,13,95,143,255,173,211,107,221,133,235,42,217,69,52,38,14,35,75,
239,40,189,181,167,113,92,71,113,189,15,32,208,226,171,48,50,42,2,44,14,74,154,88,118,160,59,250,163,164,235,226,29,115,75,219,125,238,34,74,158,204,95,173,86,154,51,23,118,173,248,26,189,48,142,55,95,
56,6,46,145,102,7,138,198,174,163,248,241,89,224,227,57,35,255,169,163,34,192,226,177,138,92,149,119,80,214,248,8,150,123,145,187,211,237,230,24,106,68,100,8,42,171,185,142,244,216,174,160,169,91,243,
137,18,187,73,99,98,7,178,242,238,65,221,68,135,8,5,56,146,195,10,215,48,124,136,142,253,124,85,17,148,12,21,1,78,22,203,110,121,27,217,54,199,144,117,120,12,216,150,112,49,248,178,26,143,155,168,180,
230,2,34,199,249,114,151,231,3,6,145,220,253,72,238,235,40,18,221,24,132,101,100,233,157,67,196,87,97,2,168,8,112,122,104,17,181,221,45,16,197,129,30,32,93,48,116,175,91,62,143,220,229,79,17,17,126,140,
178,129,21,33,78,7,7,80,120,227,126,36,166,145,38,177,22,199,53,116,51,187,0,193,44,147,10,19,67,69,128,229,192,38,10,110,191,135,6,142,31,65,46,242,67,164,15,22,170,17,89,136,39,136,8,241,170,251,123,
141,121,140,33,78,31,75,200,194,59,132,200,238,16,176,123,200,12,121,11,221,176,206,161,88,239,205,57,115,247,103,14,21,1,150,15,62,17,114,9,120,17,93,96,94,182,255,126,210,143,89,72,136,30,43,232,130,
251,204,45,55,220,115,21,134,195,34,202,204,238,71,66,173,126,89,200,176,142,107,200,66,255,24,197,113,239,230,188,141,21,198,64,69,128,229,199,53,183,188,142,101,9,203,97,100,29,222,143,220,225,126,69,
178,187,220,242,104,240,220,109,20,99,242,132,120,27,197,22,55,152,93,161,171,113,209,64,29,23,187,145,59,187,23,56,128,229,0,54,19,217,181,145,213,237,67,19,159,80,227,70,222,27,91,33,63,84,4,56,91,88,
39,234,62,1,197,10,119,162,11,246,8,178,254,6,213,146,237,118,75,168,21,215,116,235,94,71,45,85,107,232,66,24,171,147,164,0,0,1,56,73,68,65,84,94,69,69,218,119,220,50,139,217,200,6,114,91,119,163,253,
181,207,253,221,227,158,95,64,217,248,172,19,235,54,208,141,228,26,10,59,44,163,125,84,89,120,51,132,138,0,103,27,171,110,249,20,63,23,215,178,139,40,70,117,16,149,95,12,154,194,230,245,159,147,6,228,
120,108,34,130,92,65,23,255,10,186,216,215,131,191,254,61,235,136,84,227,194,250,121,192,55,212,45,34,242,218,70,68,98,219,221,243,59,209,111,222,14,236,192,118,132,187,70,133,69,86,242,117,100,217,125,
138,225,58,179,121,67,168,16,160,34,192,249,195,138,91,206,187,199,53,100,245,236,35,138,103,249,108,114,150,227,191,224,150,97,50,156,109,58,50,5,157,197,55,182,121,66,220,36,93,200,127,129,200,181,247,
255,247,36,189,64,36,192,85,4,154,200,234,189,129,110,44,190,14,179,146,147,154,67,84,4,56,255,104,163,139,56,94,91,182,136,101,47,178,148,246,19,185,135,59,221,50,204,184,202,52,212,220,231,199,89,71,
209,216,64,68,183,138,246,205,50,202,202,46,35,11,182,194,22,64,69,128,91,23,27,200,194,1,248,48,246,154,119,41,119,33,23,115,175,251,187,27,197,202,118,186,215,179,36,8,38,137,77,228,150,223,33,114,219,
215,136,8,239,182,123,92,169,167,108,113,252,127,2,40,149,23,40,229,55,13,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::pmAppBackground_png = (const char*) resource_LiveInstrument_pmAppBackground_png;
const int LiveInstrument::pmAppBackground_pngSize = 33185;

// JUCER_RESOURCE: rectangle1_png, 1615, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Background/Rectangle 1.png"
static const unsigned char resource_LiveInstrument_rectangle1_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,64,0,0,1,214,8,6,0,0,0,6,175,80,244,0,0,6,22,73,68,65,84,120,156,237,212,49,
1,0,32,12,192,48,192,191,206,217,0,25,28,77,20,244,234,158,153,187,0,130,206,239,0,128,95,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,
3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,12,16,200,50,64,32,203,0,129,44,3,4,178,30,136,173,7,93,251,116,110,77,0,
0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::rectangle1_png = (const char*) resource_LiveInstrument_rectangle1_png;
const int LiveInstrument::rectangle1_pngSize = 1615;

// JUCER_RESOURCE: menualt512_png, 272, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Header/menu-alt-512.png"
static const unsigned char resource_LiveInstrument_menualt512_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,37,0,0,0,27,8,6,0,0,0,251,238,70,222,0,0,0,215,73,68,65,84,72,137,237,213,59,
74,67,81,20,70,225,239,28,226,35,34,232,40,4,139,180,41,132,136,35,48,157,83,112,42,214,22,218,138,93,50,131,76,33,141,32,169,82,4,44,180,81,147,38,168,157,22,222,192,229,150,130,236,67,200,130,31,118,
185,54,236,71,194,54,110,113,142,29,177,60,227,10,134,248,46,41,169,42,74,226,43,227,51,218,162,193,110,198,101,180,69,131,105,170,138,19,156,249,29,250,72,94,113,31,236,176,97,13,73,181,186,131,86,148,
72,197,28,79,112,132,137,2,46,121,149,27,120,44,64,164,248,55,179,204,152,69,91,52,216,207,184,192,75,180,73,141,193,106,251,218,232,42,99,251,30,130,29,54,172,33,171,65,63,70,15,91,129,46,240,134,1,244,
21,112,197,107,25,39,44,112,248,111,189,255,129,18,223,204,71,198,40,218,162,193,94,194,1,238,112,42,126,208,223,113,253,3,77,101,170,58,190,139,170,90,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::menualt512_png = (const char*) resource_LiveInstrument_menualt512_png;
const int LiveInstrument::menualt512_pngSize = 272;

// JUCER_RESOURCE: roundedRectangle1_png, 3439, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Header/Rounded Rectangle 1.png"
static const unsigned char resource_LiveInstrument_roundedRectangle1_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,241,0,0,0,19,8,6,0,0,0,65,71,235,128,0,0,13,54,73,68,65,84,120,156,237,
92,177,142,101,71,17,61,181,30,11,195,202,194,139,72,44,141,9,44,65,228,196,1,43,18,18,100,254,194,9,127,70,224,143,64,194,228,200,150,32,113,4,18,72,198,146,19,216,121,179,107,123,3,195,22,193,237,83,
231,84,119,223,153,181,16,217,190,96,118,230,190,238,234,170,83,85,167,170,187,175,29,153,137,205,231,45,0,239,1,248,41,128,31,1,120,8,224,193,110,224,171,207,171,207,171,207,255,237,243,2,192,215,0,158,
0,248,43,128,207,0,92,230,65,241,252,249,115,0,129,64,2,192,235,0,126,5,224,113,2,175,1,1,68,34,0,28,185,30,0,242,248,7,199,175,37,8,129,228,3,14,139,64,145,68,140,73,201,249,99,80,155,18,77,104,255,203,
86,138,60,196,184,252,62,4,200,64,4,144,153,165,46,142,199,166,155,79,74,211,194,108,105,66,129,136,148,218,17,136,33,36,137,85,6,50,18,145,125,173,99,177,227,65,206,98,103,108,179,35,26,49,180,19,92,
7,156,185,98,190,2,55,108,26,152,39,241,207,33,127,232,54,172,91,237,166,44,147,185,243,18,117,36,148,231,242,228,105,115,191,228,156,205,227,220,2,98,111,176,224,35,230,147,198,246,124,192,48,225,29,
71,216,35,221,101,53,222,76,156,228,109,146,98,243,89,70,197,88,57,103,36,214,209,1,252,39,129,79,17,248,3,18,223,214,248,127,61,121,50,0,205,135,64,124,152,129,183,143,121,121,4,105,137,153,146,33,5,
55,112,4,238,241,69,116,199,131,193,151,71,226,80,73,7,38,40,127,80,9,127,79,97,20,99,82,82,167,33,147,2,162,6,83,168,20,200,204,145,72,144,66,16,105,20,136,37,59,187,199,248,135,205,215,50,74,204,10,
10,24,110,227,11,38,96,116,16,59,8,80,112,38,157,75,117,45,234,179,198,151,41,7,113,76,193,79,15,205,113,149,246,91,116,133,134,233,34,148,108,214,160,249,224,208,205,133,119,67,211,244,110,112,142,24,
57,32,31,216,145,144,226,248,157,114,106,173,49,150,19,211,199,149,181,210,159,97,40,181,7,209,12,242,34,153,172,165,66,49,116,200,210,88,133,152,149,156,140,210,43,7,184,5,41,245,44,185,57,124,7,161,
58,249,175,37,206,192,218,11,203,248,235,203,0,62,194,81,165,17,159,127,254,15,4,242,53,4,126,131,196,117,11,129,202,54,171,18,21,20,116,47,171,5,157,214,16,216,19,147,179,164,249,33,167,138,213,120,104,
25,71,89,19,121,32,245,200,147,180,100,40,204,23,46,119,198,24,78,103,181,40,71,140,53,229,60,141,113,247,20,41,85,249,92,157,209,160,108,26,177,74,18,0,79,79,195,198,97,54,119,137,76,248,69,202,45,128,
12,74,147,54,170,27,215,53,211,218,103,114,81,61,44,162,46,159,21,5,213,79,197,201,194,240,195,30,118,71,57,33,129,174,159,43,3,250,116,210,221,215,49,191,211,39,85,204,9,98,243,31,185,212,252,208,124,
228,31,139,215,169,51,220,211,68,7,87,49,70,63,77,69,161,101,129,48,139,196,23,64,252,54,35,255,125,245,236,171,103,8,224,215,72,92,31,129,64,64,140,105,157,181,18,189,234,22,150,54,47,141,191,99,174,
225,83,222,181,10,154,85,225,15,185,206,74,189,218,28,109,43,229,201,89,72,1,96,148,88,11,138,241,80,1,3,171,44,204,200,32,251,226,168,242,233,196,51,100,87,43,61,5,14,25,31,198,174,153,210,199,136,218,
58,141,137,9,168,127,75,14,17,85,142,224,83,213,161,246,33,162,138,145,2,206,130,70,40,149,188,115,194,77,188,232,250,245,209,67,74,217,75,16,69,50,48,187,221,213,76,115,178,142,55,210,78,200,71,229,36,
30,34,16,182,187,220,170,100,216,252,194,1,35,166,56,110,200,52,146,118,98,228,22,204,130,163,146,153,68,152,176,49,28,234,9,150,178,221,158,182,53,216,149,22,216,158,184,70,4,97,63,202,59,35,232,19,121,
141,136,15,2,249,187,171,103,79,159,254,16,200,199,94,35,196,82,6,150,87,149,161,128,179,178,218,170,169,45,50,118,20,0,38,71,72,24,104,10,144,195,97,51,251,65,70,121,66,138,121,196,224,124,92,250,102,
173,219,154,6,14,42,27,236,167,59,208,215,236,33,176,33,14,38,133,183,160,150,144,133,243,68,44,209,53,104,186,154,108,254,90,4,80,254,40,105,211,104,167,42,145,128,183,164,21,87,102,27,66,118,136,208,
233,44,180,53,146,164,184,107,17,80,203,28,107,177,219,41,162,147,243,39,186,27,4,220,177,82,55,167,170,219,155,180,22,20,210,13,197,29,4,16,21,147,70,108,165,147,241,83,17,195,176,223,115,209,86,118,
247,84,167,80,126,205,149,120,157,84,68,110,134,181,89,110,164,241,56,144,127,188,186,220,94,222,15,196,3,139,109,237,33,153,212,230,52,223,107,180,125,100,1,227,206,155,179,132,184,179,85,21,58,57,144,
229,158,35,92,30,194,134,170,53,52,55,200,216,169,34,136,4,216,2,83,157,206,208,10,16,99,113,130,197,61,52,19,196,98,195,185,200,106,128,237,22,200,252,40,2,243,234,62,81,77,175,60,192,232,122,132,135,
98,76,99,155,14,149,212,236,58,104,85,39,155,250,215,18,89,43,201,246,132,252,210,157,95,2,26,113,49,184,17,93,218,114,158,225,225,97,8,236,62,138,71,195,143,120,179,106,117,39,128,197,3,48,127,237,236,
135,200,201,56,97,213,201,115,188,4,73,23,11,34,145,41,252,28,200,240,77,233,23,20,138,174,3,23,213,54,117,133,30,199,141,209,251,87,183,151,203,187,133,100,248,244,21,88,49,209,12,178,249,209,23,17,69,
161,149,88,171,8,13,221,121,65,195,102,222,95,121,21,216,168,127,170,219,36,250,158,192,241,49,209,1,56,153,124,159,30,253,251,57,164,186,160,106,187,54,99,219,12,3,220,234,212,157,182,159,27,63,127,225,
25,96,137,120,50,101,111,159,13,189,75,39,155,179,196,90,197,193,126,109,29,124,249,39,218,92,123,114,46,112,81,185,147,236,84,98,87,251,134,246,44,24,122,62,145,154,207,89,48,185,35,46,86,132,223,189,
186,185,185,60,58,136,120,176,49,5,182,83,82,160,183,51,110,94,47,241,115,139,80,0,24,107,123,5,96,21,241,67,8,226,54,31,178,84,181,226,137,29,79,57,75,25,86,21,135,129,149,219,15,84,184,111,209,98,181,
141,0,84,165,23,203,148,137,172,118,126,138,74,199,122,229,71,144,133,181,71,107,129,39,45,161,3,168,128,78,50,213,21,212,190,175,246,145,40,94,212,169,56,117,135,176,29,254,51,102,133,151,245,195,31,
209,132,241,84,150,213,174,157,26,132,244,214,73,51,163,97,96,217,206,55,166,115,130,230,79,216,118,197,220,111,49,56,183,192,58,11,65,125,159,67,151,118,139,145,107,119,145,182,46,253,204,248,95,206,
88,168,17,23,159,62,254,132,122,177,21,118,27,194,98,196,207,81,14,213,229,11,118,78,69,58,105,17,88,36,20,150,59,9,0,63,190,186,92,46,63,144,70,219,114,49,169,189,165,220,239,246,217,21,158,105,105,165,
255,52,184,10,33,15,70,118,122,108,230,192,30,221,69,194,119,23,199,45,239,238,255,180,0,159,150,191,71,219,125,49,136,89,105,141,154,151,117,23,249,186,103,227,238,118,102,175,238,247,141,222,13,154,
125,249,191,132,206,94,137,115,137,181,246,50,30,205,174,22,119,36,233,161,245,221,75,184,95,42,56,219,153,18,127,98,35,98,69,164,203,120,9,156,190,127,117,115,115,249,6,200,55,231,111,122,34,237,126,
119,230,238,179,92,157,253,103,48,117,85,132,117,157,254,71,207,171,46,119,167,199,126,77,234,150,54,237,108,204,169,254,27,1,235,163,80,197,61,91,235,14,125,155,228,229,197,134,147,233,103,0,169,152,
237,138,201,119,81,102,255,69,173,27,198,196,235,132,249,14,251,110,165,207,84,184,215,201,119,40,253,178,107,72,91,188,228,106,77,136,77,58,245,209,169,54,110,233,122,231,127,18,183,207,175,110,46,79,
110,144,120,115,13,28,153,67,205,234,184,29,137,249,45,36,182,3,213,2,212,157,23,74,158,248,38,74,158,90,88,221,17,30,42,20,149,233,0,45,251,97,128,8,112,4,15,245,96,108,213,88,180,86,229,248,39,106,138,
78,45,109,47,211,174,143,66,215,106,227,161,46,248,115,168,108,39,142,212,15,210,187,181,124,132,177,133,166,146,128,122,52,247,178,61,29,184,214,213,78,149,250,129,155,201,17,207,75,39,62,91,223,60,59,
252,212,14,221,218,245,143,93,235,229,144,42,23,13,184,236,180,22,118,119,11,247,153,181,211,133,63,44,249,169,91,191,25,215,193,168,19,246,136,166,82,96,140,169,159,78,202,118,189,184,105,179,157,148,
210,98,156,215,153,13,230,194,46,6,230,118,90,109,184,28,99,167,131,169,68,191,229,49,166,151,25,244,177,249,149,49,40,51,49,148,250,231,213,229,230,242,119,0,63,233,41,62,85,173,211,143,12,223,94,115,
46,18,215,223,95,234,179,41,182,198,39,83,53,128,70,5,13,221,172,102,89,174,187,247,77,189,216,40,187,113,253,233,132,5,73,58,196,158,90,168,119,221,211,252,181,170,113,2,228,222,25,251,74,120,54,133,
123,90,220,83,193,167,249,39,88,229,206,129,187,239,119,70,21,216,242,85,78,179,86,55,183,111,198,163,52,27,79,2,118,93,180,233,211,206,23,78,188,63,155,186,72,154,167,156,139,216,252,182,98,19,25,127,
187,186,92,46,127,2,240,75,0,15,142,69,14,52,102,88,157,224,197,172,226,57,29,144,80,89,190,104,96,1,27,27,102,150,4,204,76,109,100,43,231,121,133,7,122,240,207,186,87,165,144,242,235,27,53,190,64,52,
212,117,224,102,222,0,160,151,2,60,208,39,183,249,97,13,215,157,114,84,248,205,1,94,181,67,7,102,72,75,40,30,60,193,42,214,26,152,188,222,168,23,16,74,195,169,179,64,251,114,84,12,239,172,178,124,115,
44,59,42,158,97,166,187,229,241,7,117,28,143,42,150,204,143,107,30,12,187,253,250,204,214,84,133,115,188,28,84,5,167,98,241,248,94,115,125,237,177,30,187,46,83,67,7,72,123,114,106,105,213,114,122,67,16,
118,15,237,106,44,246,135,240,105,177,135,89,231,129,111,230,139,4,254,124,245,244,246,246,54,129,79,16,248,69,169,54,6,171,173,83,246,86,200,88,64,181,0,155,169,7,156,126,204,79,207,80,3,171,7,161,94,
60,233,236,235,130,179,85,128,106,63,218,233,167,37,62,177,170,160,100,252,249,221,92,218,218,230,19,88,21,171,120,25,193,81,250,210,54,1,81,199,25,97,83,115,146,215,146,6,208,73,240,49,216,177,86,242,
160,18,139,167,216,242,219,38,63,36,192,252,193,53,109,164,9,34,113,3,34,168,254,98,70,163,154,22,7,196,61,134,191,73,186,12,151,218,182,216,204,150,148,117,207,173,199,69,18,205,231,171,215,216,190,22,
62,101,67,150,43,244,118,23,125,98,119,229,230,178,150,183,173,40,161,148,8,215,213,110,20,0,123,65,200,238,224,69,102,114,86,239,32,136,30,177,229,242,211,105,255,241,243,19,0,151,171,219,103,79,1,224,
247,0,174,145,184,102,85,169,43,6,15,112,11,150,152,64,247,139,114,198,67,115,179,93,97,212,203,238,53,125,14,38,55,73,213,185,142,221,201,82,99,174,94,84,48,195,219,75,12,243,126,90,178,204,71,72,51,
108,119,133,18,26,136,218,227,210,159,101,252,88,187,246,66,197,154,68,81,81,107,123,192,74,138,40,250,2,247,187,238,64,86,231,34,162,148,190,21,92,99,164,146,153,231,25,35,144,170,186,17,11,215,79,126,
42,133,43,113,38,166,110,149,217,8,7,70,170,93,64,145,221,156,216,53,46,139,38,166,68,138,194,146,9,162,32,39,222,62,122,72,9,137,174,79,58,141,174,93,141,147,19,229,214,235,157,110,237,238,202,136,62,
44,85,253,85,27,24,41,187,36,78,182,248,159,207,156,140,208,198,98,95,4,240,113,6,16,239,188,115,125,40,156,120,24,145,31,38,226,109,46,71,103,28,216,42,250,149,168,89,9,200,138,86,167,206,229,155,17,
70,209,204,48,247,140,167,69,156,51,226,190,54,157,73,124,210,64,83,176,204,7,95,10,207,57,49,25,0,216,178,169,39,138,42,12,57,21,146,156,30,8,52,207,15,186,132,104,103,216,233,128,144,132,3,187,214,25,
58,250,219,0,26,197,80,155,53,50,4,151,203,213,30,211,142,141,197,157,119,109,130,172,38,58,169,192,191,112,205,181,124,173,169,251,114,118,100,30,63,109,148,178,187,91,21,122,82,51,40,207,215,178,206,
70,119,251,166,84,35,133,9,89,9,213,202,97,184,119,119,72,9,64,184,132,75,68,197,131,147,149,218,126,139,175,169,43,96,247,211,183,157,248,18,25,31,101,228,215,145,64,60,122,244,200,42,0,94,143,204,15,
0,252,60,119,255,19,128,214,219,43,136,14,213,6,67,134,156,160,86,180,141,24,243,197,154,60,229,219,95,77,176,2,40,193,253,148,174,29,86,88,10,180,22,178,124,213,247,228,62,175,159,224,76,73,201,53,249,
109,205,237,211,108,120,31,87,232,43,97,245,162,1,79,37,189,21,100,80,218,182,194,109,107,180,108,233,211,158,49,16,108,45,216,212,148,78,190,189,48,183,84,98,85,87,53,159,116,217,239,181,117,31,227,4,
251,116,170,106,192,233,101,12,125,116,227,224,149,156,131,140,240,26,89,232,229,138,102,91,41,209,99,174,239,57,251,182,167,182,136,69,10,236,70,61,241,13,35,198,135,63,112,120,140,20,188,35,116,63,85,
114,79,219,153,228,173,1,125,131,124,129,196,167,64,124,12,228,183,132,36,222,120,227,123,150,227,117,156,254,22,18,239,33,240,51,32,31,1,49,254,207,30,235,197,255,49,109,162,38,179,83,213,80,51,141,208,
189,163,237,62,54,155,52,201,92,238,229,98,56,106,77,4,24,59,143,164,104,128,41,184,230,23,221,233,154,249,191,23,13,3,219,159,162,198,206,224,152,250,75,13,236,120,244,10,152,246,157,35,56,85,233,169,
202,85,176,70,220,187,38,113,182,194,80,221,136,149,79,183,208,48,156,36,214,88,139,144,218,194,68,151,187,139,163,22,20,152,244,231,144,86,227,21,60,182,133,0,113,28,127,182,235,29,135,54,244,247,33,
194,137,223,80,158,12,108,125,79,75,238,50,249,180,74,31,42,91,207,225,152,89,176,171,226,103,70,196,87,200,188,65,196,95,0,124,134,196,101,78,192,255,2,248,202,146,15,172,28,57,75,0,0,0,0,73,69,78,68,
174,66,96,130,0,0};

const char* LiveInstrument::roundedRectangle1_png = (const char*) resource_LiveInstrument_roundedRectangle1_png;
const int LiveInstrument::roundedRectangle1_pngSize = 3439;

// JUCER_RESOURCE: syncedTo_ChrissMacbook_png, 1585, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Header/Synced to_ Chris’s Macbook.png"
static const unsigned char resource_LiveInstrument_syncedTo_ChrissMacbook_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,232,0,0,0,15,8,6,0,0,0,238,232,131,66,0,0,5,248,73,68,65,84,104,
129,237,90,45,115,35,57,16,125,217,90,238,195,11,214,120,137,241,29,152,224,37,198,33,230,11,188,191,224,130,67,140,215,96,15,155,24,39,192,56,6,195,77,130,29,96,28,255,2,31,144,158,245,220,110,205,200,
95,169,74,173,95,213,148,39,163,86,171,191,36,181,90,1,18,250,0,102,0,86,241,169,1,12,1,116,240,177,209,3,48,5,112,95,64,219,1,80,197,62,239,137,46,128,17,128,23,4,219,191,196,191,187,14,237,52,62,167,
96,16,121,12,222,185,175,7,250,199,211,171,169,237,156,56,183,78,135,96,27,159,155,205,6,246,249,44,2,142,76,199,46,66,80,247,1,124,127,63,121,207,14,78,186,18,208,88,115,0,119,23,147,200,31,83,23,194,
14,130,79,104,251,165,180,149,234,210,4,218,228,249,157,251,54,241,35,42,4,251,243,253,28,250,150,202,112,46,157,142,25,219,197,167,248,59,140,191,15,0,190,196,231,14,33,48,122,56,125,101,233,70,33,188,
29,193,210,180,237,94,116,90,211,206,94,50,222,177,232,157,153,247,111,4,93,22,0,254,193,174,237,59,0,254,109,232,75,61,75,178,28,13,130,167,56,198,83,3,109,142,239,19,128,73,139,60,199,100,32,92,132,
180,111,15,187,139,147,135,82,127,28,226,183,18,29,14,209,181,36,102,27,193,180,214,50,168,16,38,47,157,219,139,116,51,161,233,32,165,101,30,207,161,188,243,111,69,7,97,7,81,154,25,246,13,217,71,74,1,
249,120,105,235,189,161,25,197,223,182,20,169,50,253,86,166,189,135,144,246,107,187,221,249,136,33,246,245,244,64,123,174,224,235,235,165,118,170,187,202,98,23,209,161,208,241,232,98,219,172,140,3,180,
219,152,118,80,121,61,31,214,40,15,94,218,242,5,97,193,34,234,248,247,41,254,240,232,126,27,154,161,124,87,253,103,14,191,67,116,45,177,231,86,255,205,102,195,62,156,79,91,158,181,124,28,69,129,115,198,
37,45,29,68,134,54,69,182,103,217,145,124,83,231,242,251,44,210,49,152,212,136,93,145,239,62,210,81,14,13,204,129,161,211,49,219,38,40,207,129,42,179,182,209,208,180,15,157,52,195,62,188,128,242,192,192,
240,120,228,64,222,47,104,182,171,46,140,53,118,245,247,38,168,181,241,61,146,206,54,5,181,139,137,46,130,106,155,146,115,163,78,80,78,16,149,71,245,80,104,156,104,220,216,56,172,13,29,117,82,221,117,
12,234,80,195,215,97,102,232,168,251,11,118,237,210,199,174,61,149,167,78,82,213,191,39,242,13,226,132,5,76,131,62,12,2,5,87,110,78,12,10,216,55,116,228,161,206,157,153,111,186,251,118,228,155,221,57,
236,152,64,114,160,6,55,249,171,44,236,123,104,176,40,200,35,231,124,171,123,233,14,202,192,56,164,0,82,98,87,229,237,77,126,111,130,82,119,221,13,108,6,149,3,39,164,22,21,75,109,160,54,167,92,60,86,173,
176,155,217,88,29,148,63,39,196,180,229,91,133,253,162,161,103,43,198,166,46,124,228,87,27,89,56,7,148,39,125,226,197,236,10,201,78,212,111,6,217,116,88,36,226,25,116,1,224,27,128,31,8,231,208,57,128,
117,100,194,217,79,60,10,99,10,189,148,239,22,115,121,95,155,54,6,194,66,218,214,8,231,163,59,135,78,119,139,218,180,233,187,202,114,142,131,191,199,23,72,103,177,175,230,251,56,62,151,68,147,93,21,57,
191,88,208,7,93,164,224,250,25,191,205,27,250,1,201,198,220,117,153,2,231,206,184,77,50,0,193,222,156,20,185,177,105,251,41,82,42,108,65,191,104,12,176,0,248,224,208,171,173,84,239,175,230,215,158,193,
217,207,139,69,165,93,10,79,155,161,170,206,219,115,247,103,132,73,216,139,2,113,32,6,215,16,193,232,183,242,109,17,25,220,198,126,29,71,224,75,97,130,246,162,193,71,194,107,252,101,1,65,39,90,133,48,
65,222,16,22,206,75,99,13,224,111,132,21,191,135,224,95,45,110,52,45,56,99,132,184,96,31,6,91,63,242,108,90,64,20,26,188,61,52,47,12,76,9,199,8,113,209,193,126,134,243,209,176,64,208,233,39,162,238,159,
16,12,201,148,50,119,238,124,51,127,63,33,237,174,64,249,42,237,9,4,164,137,14,236,158,133,44,221,18,105,119,154,196,239,234,68,78,94,77,57,111,143,148,205,147,211,166,178,76,95,94,113,28,158,145,130,
87,211,35,218,182,66,121,112,159,138,1,128,255,226,251,15,132,140,138,187,76,155,13,167,8,65,245,11,225,90,232,27,82,21,250,208,138,238,2,105,146,231,178,31,182,207,163,140,185,248,163,95,84,126,166,206,
222,142,171,254,213,235,15,250,159,252,108,65,174,111,232,244,221,166,184,150,231,150,126,179,217,240,74,173,186,185,185,25,0,97,7,101,144,87,8,169,141,110,235,220,114,109,170,50,65,58,155,44,157,193,
74,193,52,130,231,130,71,36,101,127,9,221,51,210,110,222,141,99,14,226,251,131,140,63,65,42,14,113,210,31,115,69,196,187,73,166,217,147,200,135,188,152,65,116,227,216,54,64,120,94,250,210,50,206,58,202,
63,138,188,43,132,32,160,236,107,92,62,85,38,150,72,129,255,23,194,162,220,151,182,54,84,8,19,252,57,246,103,236,28,186,120,205,145,142,84,185,190,92,180,42,4,127,231,252,204,5,176,66,152,144,11,132,133,
4,240,179,62,250,253,89,248,77,100,188,71,164,2,42,233,186,145,118,109,120,142,227,152,140,217,55,225,57,198,254,194,187,150,54,22,34,183,252,152,30,216,34,81,141,253,93,131,224,57,37,87,8,240,14,246,
44,38,104,209,161,131,221,255,96,242,138,49,64,249,53,139,234,193,10,90,105,33,198,150,208,21,185,178,190,119,175,86,90,197,37,6,14,239,25,252,221,167,212,174,185,171,148,166,54,123,37,70,29,219,238,239,
244,220,170,182,47,89,28,109,97,142,133,24,45,164,120,58,91,63,115,103,172,141,188,94,1,52,119,37,117,202,53,139,87,72,203,93,179,40,207,157,107,150,88,185,101,44,12,111,28,166,28,104,141,230,157,145,
171,254,247,22,186,82,112,215,120,69,243,138,173,41,66,46,253,235,34,100,0,77,52,199,162,84,206,83,120,183,217,254,146,208,180,244,80,29,245,168,210,86,88,58,7,56,94,201,88,37,113,163,180,109,62,96,140,
149,248,42,59,182,94,165,156,11,76,43,188,114,243,21,87,92,113,0,188,255,191,213,231,24,104,26,148,75,127,175,184,226,138,2,180,77,80,47,197,109,3,183,246,75,164,120,87,92,241,71,161,109,151,252,31,175,
251,188,55,26,11,168,170,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::syncedTo_ChrissMacbook_png = (const char*) resource_LiveInstrument_syncedTo_ChrissMacbook_png;
const int LiveInstrument::syncedTo_ChrissMacbook_pngSize = 1585;

// JUCER_RESOURCE: backArrowCopy4_png, 299, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/Back Arrow copy 4.png"
static const unsigned char resource_LiveInstrument_backArrowCopy4_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,21,0,0,0,15,8,6,0,0,0,11,90,132,107,0,0,0,242,73,68,65,84,56,141,173,212,
45,75,5,65,20,198,241,223,238,181,40,168,160,69,54,106,48,26,214,46,90,68,44,6,147,160,205,234,71,48,155,4,49,248,242,65,228,38,241,11,88,236,26,132,11,154,84,68,5,53,24,118,195,34,187,51,19,246,129,9,
115,94,254,28,230,156,51,89,89,150,18,181,142,31,92,199,2,243,68,224,17,134,88,74,9,30,139,248,87,112,129,197,250,126,159,2,237,170,116,162,134,221,52,128,240,146,2,109,171,116,11,103,152,107,241,29,99,
132,44,192,252,106,66,103,113,142,237,64,194,114,125,130,202,49,142,125,60,68,128,169,122,207,113,136,75,76,245,0,4,131,162,40,110,241,132,53,12,122,96,126,231,120,197,9,230,113,213,3,116,178,217,168,
17,54,177,131,83,204,180,36,220,225,57,0,204,240,153,117,172,233,116,13,222,253,103,95,85,205,110,80,93,195,255,134,61,108,224,177,97,79,106,102,108,247,135,88,80,85,77,245,238,81,197,118,31,126,113,160,
250,157,62,82,160,127,26,234,37,102,55,176,106,13,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::backArrowCopy4_png = (const char*) resource_LiveInstrument_backArrowCopy4_png;
const int LiveInstrument::backArrowCopy4_pngSize = 299;

// JUCER_RESOURCE: compression_png, 1231, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/Compression.png"
static const unsigned char resource_LiveInstrument_compression_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,129,0,0,0,21,8,6,0,0,0,97,87,141,5,0,0,4,150,73,68,65,84,104,129,237,154,225,
113,235,54,12,199,127,201,229,187,221,9,172,78,16,119,130,168,19,68,157,160,234,4,47,158,160,170,23,168,223,4,117,54,80,38,40,61,65,157,9,42,79,80,103,1,166,31,72,150,16,77,138,82,252,124,189,190,250,
127,199,11,69,130,0,8,81,32,0,231,70,107,77,128,37,80,217,254,17,80,192,62,36,186,226,98,152,99,222,1,64,103,219,197,176,94,175,185,11,132,183,192,67,132,118,135,57,24,199,75,42,116,5,96,14,192,239,182,
255,11,208,92,90,224,173,232,43,226,7,0,59,174,48,7,229,138,175,12,238,16,52,192,125,48,247,12,188,137,231,123,252,53,113,197,229,112,196,120,222,29,23,190,10,28,220,117,80,139,177,157,125,118,10,108,
128,79,182,95,1,219,8,159,82,180,14,19,67,108,57,189,62,194,251,238,104,121,186,171,200,201,172,44,93,151,144,183,180,107,142,86,150,139,99,142,35,228,186,248,166,178,252,85,98,47,136,249,142,56,36,173,
163,143,233,235,116,168,233,123,211,109,132,119,135,191,2,114,114,75,161,99,76,238,56,123,107,173,151,90,235,119,209,230,90,107,68,155,7,243,4,173,9,230,93,235,44,111,73,91,138,249,54,178,166,212,90,171,
96,108,31,209,201,209,168,8,159,99,70,238,147,232,55,1,93,76,167,119,173,117,61,97,223,49,125,11,107,143,49,188,165,174,161,126,104,173,183,19,228,230,236,221,54,77,3,86,9,55,168,34,66,135,90,25,97,252,
62,192,47,71,159,106,161,161,194,131,18,182,99,96,144,50,152,139,25,121,147,225,89,9,218,240,195,9,219,216,195,149,211,53,228,83,103,228,126,196,222,245,45,80,8,247,161,18,238,39,133,70,244,119,192,15,
152,136,214,197,18,15,244,221,101,136,207,182,73,188,1,43,224,85,140,229,98,145,103,224,69,60,207,6,214,204,128,3,253,59,119,142,191,242,192,236,225,59,203,215,161,78,232,179,2,110,48,123,119,40,3,153,
143,246,239,1,248,6,248,86,232,59,195,187,236,28,26,209,119,246,150,246,123,200,240,122,181,107,14,98,172,184,75,16,143,193,28,159,77,28,240,27,111,49,119,207,175,246,185,34,126,184,94,128,39,219,95,10,
94,142,126,143,79,149,134,178,146,21,38,110,129,126,252,82,18,191,39,15,86,158,140,27,74,209,127,193,27,187,182,250,204,48,47,114,206,105,188,81,219,177,22,248,126,64,79,128,133,229,189,197,236,221,233,
221,101,214,129,249,88,23,182,31,218,27,250,113,91,172,174,243,138,63,32,71,188,109,123,41,226,84,200,19,23,10,221,39,232,82,52,177,113,53,82,143,141,232,203,53,197,0,255,240,69,46,131,190,18,45,70,215,
138,177,123,224,55,224,47,204,11,238,34,235,164,151,250,4,252,129,15,104,21,227,15,129,67,27,204,201,231,148,189,67,157,254,193,109,160,64,153,160,43,57,141,132,37,134,14,193,84,76,41,72,29,130,103,53,
98,77,78,183,5,198,43,185,54,75,240,120,137,140,63,0,127,210,191,58,192,28,212,183,96,108,134,241,150,93,70,159,24,134,108,148,242,154,201,53,119,156,126,181,161,203,43,16,174,3,115,255,133,40,131,231,
177,119,220,185,8,55,252,37,228,174,200,123,41,240,105,108,109,251,11,49,247,68,255,42,82,24,59,86,182,61,138,185,133,29,11,191,238,33,20,3,115,221,4,62,128,241,4,123,252,23,53,195,40,239,132,20,244,55,
35,79,191,18,125,119,120,28,202,4,221,151,198,44,144,37,3,182,41,114,229,203,45,232,95,7,75,188,23,116,31,199,198,206,109,48,87,64,129,9,36,221,215,126,143,183,161,115,249,45,198,70,21,38,56,148,1,221,
152,34,92,39,250,37,125,123,215,137,189,140,130,11,12,183,192,207,182,255,104,219,142,211,50,242,38,120,126,177,180,51,124,161,68,6,121,48,237,132,127,4,109,66,174,154,192,67,210,186,0,171,197,24,247,
71,251,188,19,52,82,214,198,182,208,43,117,246,175,12,160,11,124,129,43,70,59,132,14,255,78,22,248,162,82,197,185,246,22,57,229,62,147,79,110,245,105,157,32,151,47,183,3,121,171,204,129,101,222,47,233,
83,249,111,174,78,48,148,47,199,10,48,67,197,31,215,74,65,91,77,148,159,42,20,197,120,15,233,154,203,251,55,35,247,221,27,151,217,65,73,60,216,1,227,186,234,200,248,30,147,119,134,65,15,248,242,243,165,
17,214,25,94,249,216,111,28,13,166,62,16,195,138,190,183,104,35,114,135,228,87,156,6,177,14,63,49,222,107,41,75,31,179,247,51,62,229,158,132,27,125,250,255,4,5,190,190,236,242,223,46,195,199,213,168,75,
252,111,7,231,100,8,57,40,188,11,188,161,95,35,87,103,242,158,99,246,177,196,236,65,145,142,172,11,75,231,234,14,138,225,125,59,190,243,17,188,199,234,216,49,62,205,60,193,122,189,142,30,130,255,2,20,
253,67,112,197,7,177,94,175,207,42,22,93,241,149,224,122,8,174,224,156,223,14,254,77,108,185,108,253,225,127,133,191,1,144,48,99,254,12,149,255,198,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::compression_png = (const char*) resource_LiveInstrument_compression_png;
const int LiveInstrument::compression_pngSize = 1231;

// JUCER_RESOURCE: dialogBackground_png, 1583, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/Dialog Background.png"
static const unsigned char resource_LiveInstrument_dialogBackground_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,47,0,0,1,135,8,6,0,0,0,225,145,212,91,0,0,5,246,73,68,65,84,120,156,237,
221,177,110,93,85,20,69,209,229,195,139,193,49,113,194,191,80,132,255,255,48,40,66,69,119,145,242,174,166,52,70,233,230,44,201,214,148,119,97,191,151,191,190,127,223,182,191,7,16,114,238,30,0,240,127,
136,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,210,217,246,
126,247,8,128,171,206,182,199,221,35,0,174,114,54,2,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,
36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,210,217,246,122,247,8,128,171,206,182,183,187,71,0,92,229,108,4,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,
146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,164,179,237,229,238,17,0,87,157,109,31,119,143,0,184,202,217,8,36,137,23,144,36,
94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,157,
109,239,119,143,0,184,234,108,123,220,61,2,224,42,103,35,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,
120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,157,109,175,119,143,0,184,234,108,123,187,123,4,192,85,206,70,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,
18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,58,219,94,238,30,1,112,213,217,246,113,247,8,128,171,156,141,64,146,120,
1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,
210,217,246,126,247,8,128,171,206,182,199,221,35,0,174,114,54,2,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,
137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,210,217,246,122,247,8,128,171,206,182,183,187,71,0,92,229,108,4,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,
36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,164,179,237,229,238,17,0,87,157,109,31,119,143,0,184,202,217,8,36,137,23,
144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,
36,157,109,239,119,143,0,184,234,108,123,220,61,2,224,42,103,35,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,
64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,157,109,175,119,143,0,184,234,108,123,187,123,4,192,85,206,70,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,
11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,233,108,251,122,247,8,128,171,252,230,5,36,137,23,144,36,
94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,157,
109,159,239,30,1,112,213,217,246,233,238,17,0,87,57,27,129,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,
196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,201,7,112,0,73,62,250,12,72,114,54,2,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,
144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,103,219,215,187,71,0,92,229,55,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,
36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,233,108,251,124,247,8,128,171,206,182,79,
119,143,0,184,202,217,8,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,
144,36,94,64,146,120,1,73,62,128,3,72,242,209,103,64,146,179,17,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,164,199,182,63,255,243,181,
111,219,94,158,240,246,31,79,120,227,108,251,250,132,119,126,217,246,241,132,119,30,219,190,60,225,157,215,109,239,79,120,231,215,61,231,111,107,127,219,246,246,132,119,222,254,125,235,103,123,223,143,
239,209,207,246,251,158,243,143,27,190,236,199,207,246,37,255,0,56,156,6,183,170,163,209,131,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::dialogBackground_png = (const char*) resource_LiveInstrument_dialogBackground_png;
const int LiveInstrument::dialogBackground_pngSize = 1583;

// JUCER_RESOURCE: bg_png, 273, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/EQ/bg.png"
static const unsigned char resource_LiveInstrument_bg_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,7,0,0,0,105,8,6,0,0,0,246,172,57,249,0,0,0,216,73,68,65,84,72,137,237,201,49,74,196,
64,20,128,225,63,47,111,135,9,147,4,92,98,170,20,91,9,158,195,43,44,130,224,73,108,236,188,131,91,42,193,83,120,151,45,172,82,172,133,11,43,201,102,158,149,194,138,23,16,230,47,255,47,123,234,123,183,
112,238,206,45,22,55,146,231,93,156,231,183,113,154,94,166,113,124,208,178,170,158,207,150,203,235,170,44,201,85,153,143,199,139,143,253,254,254,125,183,187,212,166,105,214,231,109,75,81,20,136,8,49,70,
66,89,146,139,172,181,170,107,9,33,32,34,0,136,8,33,4,62,235,90,68,85,127,224,59,17,65,85,57,189,191,74,152,48,97,194,132,9,19,38,76,152,240,191,97,6,246,23,100,96,226,189,31,98,140,39,16,99,196,123,63,
200,170,235,30,157,234,22,179,131,153,69,204,14,78,117,187,234,186,77,102,102,10,220,2,87,64,11,12,192,43,208,127,1,123,3,61,113,26,181,231,14,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::bg_png = (const char*) resource_LiveInstrument_bg_png;
const int LiveInstrument::bg_pngSize = 273;

// JUCER_RESOURCE: fxSelectionBackgroundCopy2_png, 401, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/EQ/FX Selection Background copy 2.png"
static const unsigned char resource_LiveInstrument_fxSelectionBackgroundCopy2_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,251,0,0,0,108,8,6,0,0,0,172,17,196,93,0,0,1,88,73,68,65,84,120,
156,237,211,65,17,192,32,0,192,48,64,25,158,17,184,185,96,119,107,162,160,159,206,179,247,51,128,223,91,95,7,0,119,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,
34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,
236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,
17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,
97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,
135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,47,136,174,3,10,195,253,134,1,0,0,0,0,73,69,78,
68,174,66,96,130,0,0};

const char* LiveInstrument::fxSelectionBackgroundCopy2_png = (const char*) resource_LiveInstrument_fxSelectionBackgroundCopy2_png;
const int LiveInstrument::fxSelectionBackgroundCopy2_pngSize = 401;

// JUCER_RESOURCE: head_png, 519, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/EQ/head.png"
static const unsigned char resource_LiveInstrument_head_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,18,0,0,0,15,8,6,0,0,0,233,134,159,18,0,0,1,206,73,68,65,84,56,141,141,147,177,139,
19,65,20,198,127,115,187,217,196,245,226,97,97,17,78,18,109,2,118,1,241,79,240,255,73,155,191,66,12,105,114,205,181,183,75,234,52,193,202,70,176,89,56,16,174,82,2,130,197,18,205,69,215,204,238,206,140,
197,189,225,86,47,28,14,124,204,204,238,124,223,188,247,189,55,138,195,67,53,102,191,118,2,26,243,29,66,115,127,4,28,101,89,246,188,223,239,191,142,162,232,25,64,89,150,95,214,235,245,106,52,26,125,6,
172,224,142,32,34,208,74,211,244,180,40,138,11,107,173,177,214,186,127,96,138,162,184,72,211,244,20,104,9,231,142,72,52,157,78,159,106,173,175,140,49,174,174,235,131,48,198,56,173,245,213,124,62,239,3,
81,83,76,137,250,113,158,231,103,85,85,57,173,181,219,239,247,7,161,181,118,85,85,185,60,207,207,128,99,225,42,239,73,27,120,88,20,197,39,224,137,115,7,83,191,53,82,41,128,60,142,227,23,192,47,64,135,
34,20,2,29,107,237,137,115,142,255,17,82,74,61,2,58,128,6,170,80,82,11,128,104,179,217,92,118,187,221,151,247,170,200,216,237,118,151,226,81,0,168,166,235,42,73,146,115,107,173,53,198,112,31,172,181,54,
73,146,115,26,237,19,52,82,107,175,86,171,235,193,96,240,99,56,28,190,2,2,159,102,19,117,93,151,139,197,226,205,120,60,126,7,92,3,191,129,42,224,182,9,67,160,181,92,46,191,102,89,246,177,215,235,169,56,
142,227,32,8,218,198,24,179,221,110,191,101,89,246,126,50,153,188,157,205,102,31,128,45,176,19,161,218,63,129,22,240,0,56,1,30,11,186,98,102,32,209,27,96,47,228,239,130,173,143,40,228,166,205,141,184,
191,147,125,201,77,89,59,18,41,64,45,66,63,27,208,194,117,254,144,5,170,198,205,90,14,250,170,248,239,165,252,219,203,186,18,238,95,143,214,167,25,72,20,97,163,24,254,50,35,145,213,62,18,1,127,0,254,236,
50,254,59,63,22,25,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::head_png = (const char*) resource_LiveInstrument_head_png;
const int LiveInstrument::head_pngSize = 519;

// JUCER_RESOURCE: progressKopia_png, 283, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/EQ/progress kopia.png"
static const unsigned char resource_LiveInstrument_progressKopia_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,7,0,0,0,64,8,6,0,0,0,214,15,109,7,0,0,0,226,73,68,65,84,56,141,237,207,63,
138,131,64,20,199,241,223,170,157,133,48,47,213,86,1,211,5,139,220,96,240,8,246,105,134,180,222,193,19,120,4,143,224,5,210,120,135,193,38,193,110,197,5,193,194,127,48,77,72,163,179,184,187,57,64,96,94,
245,224,203,27,230,243,145,36,9,28,199,177,219,182,61,52,77,227,17,209,119,89,150,95,97,24,62,28,198,216,190,239,251,11,0,198,57,175,164,148,0,208,167,105,122,181,0,8,0,44,138,162,10,203,212,117,125,2,
32,44,0,59,33,132,14,82,74,127,89,119,86,28,199,58,20,69,177,6,0,128,181,46,121,158,111,130,142,89,150,253,9,174,235,86,54,17,157,149,82,152,231,25,227,56,98,24,6,120,158,87,117,93,247,243,236,58,65,16,
232,63,108,34,231,92,135,105,154,124,29,127,57,125,125,249,194,9,227,52,78,227,52,78,227,124,7,231,227,133,243,110,19,209,81,41,245,249,143,243,246,4,133,202,92,255,130,47,84,155,0,0,0,0,73,69,78,68,174,
66,96,130,0,0};

const char* LiveInstrument::progressKopia_png = (const char*) resource_LiveInstrument_progressKopia_png;
const int LiveInstrument::progressKopia_pngSize = 283;

// JUCER_RESOURCE: progress_png, 304, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/EQ/progress.png"
static const unsigned char resource_LiveInstrument_progress_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,7,0,0,0,66,8,6,0,0,0,155,199,204,12,0,0,0,247,73,68,65,84,56,141,221,149,49,106,
2,81,16,134,191,121,62,181,74,82,216,72,150,61,129,144,214,42,199,8,66,90,111,32,216,228,2,41,188,71,26,245,14,129,180,146,11,136,213,38,105,22,82,24,88,2,202,78,10,11,49,38,179,240,150,101,209,129,87,
253,252,255,188,127,222,188,25,233,12,134,68,227,203,38,112,11,92,3,31,192,203,251,100,189,145,155,197,168,15,76,129,152,125,36,192,157,215,13,115,241,18,113,24,177,110,117,238,197,187,223,0,0,226,37,
242,168,252,133,1,224,193,2,77,166,45,235,254,7,197,150,53,152,5,183,181,152,225,57,131,125,22,200,134,230,148,18,178,103,3,218,69,168,232,85,242,26,124,86,213,96,167,4,22,116,124,248,207,14,239,161,26,
230,80,240,236,179,231,109,9,159,161,123,69,115,69,228,56,175,106,142,203,210,165,238,216,135,39,75,151,218,160,123,213,67,181,215,104,95,224,92,147,237,247,154,175,183,87,62,87,207,51,233,12,134,45,224,
1,184,103,183,67,19,224,9,120,252,1,102,45,95,28,33,46,122,117,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::progress_png = (const char*) resource_LiveInstrument_progress_png;
const int LiveInstrument::progress_pngSize = 304;

// JUCER_RESOURCE: eq_png, 271, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/EQ .png"
static const unsigned char resource_LiveInstrument_eq_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,15,0,0,0,12,8,6,0,0,0,189,66,231,228,0,0,0,214,73,68,65,84,40,145,141,146,219,109,195,
48,12,69,79,138,46,160,21,220,17,220,17,180,130,86,240,10,238,31,169,191,118,4,207,144,17,226,17,226,17,218,17,186,194,237,71,169,66,41,226,36,23,32,4,18,58,124,136,66,215,85,220,29,119,71,210,44,233,
51,226,223,146,22,73,201,221,33,130,139,164,220,89,10,240,20,192,20,241,41,252,179,164,244,204,175,190,106,173,43,157,204,108,6,50,240,90,107,221,186,248,6,156,129,233,137,125,21,96,237,65,128,240,87,
160,180,202,131,153,229,238,194,10,140,192,199,78,226,13,152,27,60,133,181,214,94,110,116,244,167,6,191,213,90,47,170,196,108,227,14,55,2,219,173,153,143,64,54,179,139,4,225,103,224,184,183,170,225,206,
170,78,253,158,255,107,9,56,73,122,239,62,73,251,40,69,210,112,112,247,71,222,6,51,75,209,110,137,147,135,225,43,201,134,31,97,162,247,111,239,169,89,63,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::eq_png = (const char*) resource_LiveInstrument_eq_png;
const int LiveInstrument::eq_pngSize = 271;

// JUCER_RESOURCE: fxSelectionBackgroundCopy_png, 347, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/FX Selection Background copy.png"
static const unsigned char resource_LiveInstrument_fxSelectionBackgroundCopy_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,251,0,0,0,89,8,6,0,0,0,248,166,82,67,0,0,1,34,73,68,65,84,120,
156,237,211,65,17,192,32,0,192,48,64,25,158,17,184,185,96,119,107,162,160,159,206,179,247,51,128,223,91,95,7,0,119,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,
34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,
236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,
17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,
97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,120,1,11,115,2,228,132,178,66,213,
0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::fxSelectionBackgroundCopy_png = (const char*) resource_LiveInstrument_fxSelectionBackgroundCopy_png;
const int LiveInstrument::fxSelectionBackgroundCopy_pngSize = 347;

// JUCER_RESOURCE: fxSelectionBackgroundCopy_png2, 401, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/FX Selection Background.png"
static const unsigned char resource_LiveInstrument_fxSelectionBackgroundCopy_png2[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,251,0,0,0,108,8,6,0,0,0,172,17,196,93,0,0,1,88,73,68,65,84,120,
156,237,211,65,17,192,32,0,192,48,64,25,158,17,184,185,96,119,107,162,160,159,206,179,247,51,128,223,91,95,7,0,119,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,
34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,
236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,
17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,
97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,
135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,102,135,8,179,67,132,217,33,194,236,16,97,118,136,48,59,68,152,29,34,204,14,17,47,136,174,3,10,195,253,134,1,0,0,0,0,73,69,78,
68,174,66,96,130,0,0};

const char* LiveInstrument::fxSelectionBackgroundCopy_png2 = (const char*) resource_LiveInstrument_fxSelectionBackgroundCopy_png2;
const int LiveInstrument::fxSelectionBackgroundCopy_png2Size = 401;

// JUCER_RESOURCE: fx_png, 1133, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/FX.png"
static const unsigned char resource_LiveInstrument_fx_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,190,0,0,0,17,8,6,0,0,0,99,62,22,166,0,0,4,52,73,68,65,84,104,129,237,90,235,113,226,
48,16,254,114,115,13,208,130,175,4,95,9,78,9,164,4,167,4,40,129,148,16,74,192,37,152,18,160,4,40,1,151,176,247,67,218,104,189,94,203,24,252,186,76,190,25,77,28,173,30,43,105,181,218,7,47,68,84,2,200,224,
176,5,240,129,251,177,1,176,123,176,239,92,32,241,253,10,224,56,23,35,10,153,248,94,10,79,223,1,41,128,149,255,62,3,168,0,224,247,108,236,252,64,163,20,223,47,179,113,241,253,176,67,80,42,95,138,238,89,
193,175,16,180,83,245,228,88,63,248,193,100,120,86,240,247,190,140,13,126,174,42,184,231,106,106,60,50,127,226,11,122,246,235,139,212,255,29,123,95,88,107,94,125,177,104,95,166,196,147,227,141,223,159,
136,74,10,216,16,17,122,148,77,164,239,90,208,78,29,125,63,35,227,223,168,142,155,175,95,245,228,149,139,68,214,65,95,121,222,37,46,68,148,70,198,79,169,190,167,93,124,91,109,25,109,188,149,138,183,82,
181,139,157,139,94,99,108,143,74,114,231,168,207,128,231,207,13,218,174,101,76,248,62,159,198,58,47,126,44,171,79,166,230,77,35,252,180,237,129,70,246,235,129,155,118,47,10,132,219,47,29,12,136,58,134,
229,204,157,224,236,51,221,111,229,235,203,70,143,225,81,162,206,39,224,180,120,105,240,5,56,45,116,66,221,81,101,48,223,135,17,121,27,26,9,128,79,52,215,154,249,122,139,182,241,197,26,235,2,32,143,204,
179,51,104,186,157,181,247,25,122,238,235,152,130,15,56,225,103,72,97,88,1,88,251,239,74,181,3,220,198,165,130,254,14,231,152,188,35,60,107,41,236,13,30,18,137,152,123,43,234,37,255,18,242,224,246,190,
31,247,101,37,144,161,46,176,91,223,70,226,213,168,147,208,99,140,133,4,110,191,223,208,140,128,173,225,76,27,166,201,51,180,132,91,94,18,217,79,238,205,6,182,210,104,227,71,203,87,34,254,47,124,27,105,
2,110,191,234,104,60,83,135,159,125,134,52,103,164,25,100,61,141,23,65,215,102,69,34,104,183,158,252,246,53,117,244,243,43,159,233,46,19,194,122,122,75,95,172,103,93,226,30,222,79,45,252,15,105,234,16,
185,253,182,246,158,212,252,171,200,184,178,223,133,154,123,147,11,250,65,209,164,169,163,249,209,178,98,237,71,105,209,199,14,103,158,225,110,104,130,250,77,150,223,90,219,75,167,240,10,167,37,180,22,
56,35,152,79,172,5,198,128,230,173,107,158,10,65,171,221,224,52,228,17,142,223,61,134,205,115,124,96,154,120,255,181,229,27,106,254,152,83,43,207,143,207,174,109,142,216,75,198,242,164,251,38,70,219,40,
166,136,227,23,112,79,88,2,183,168,51,234,30,185,142,70,36,234,187,203,150,31,83,240,251,134,104,183,112,79,58,35,67,51,49,53,148,192,234,75,185,100,72,155,124,13,219,76,100,196,132,120,176,144,249,20,
130,191,71,176,197,89,8,18,65,139,225,158,48,224,146,242,7,123,184,75,152,195,173,213,114,194,50,44,43,99,60,53,30,13,95,14,138,41,4,159,181,122,138,166,201,98,105,45,41,200,87,196,157,188,37,130,205,
27,192,173,153,203,26,225,34,228,152,79,240,173,104,212,148,40,80,15,20,204,130,169,126,178,80,32,8,62,111,252,17,246,205,231,36,200,74,244,209,66,34,163,57,75,249,125,80,134,96,150,93,1,252,129,91,11,
191,88,71,132,144,219,148,194,167,77,135,152,153,49,22,228,249,229,112,103,38,21,92,130,122,148,111,244,164,168,22,124,126,162,219,80,224,49,166,10,132,80,95,42,234,218,240,33,218,31,252,255,103,56,129,
145,60,78,145,53,190,23,71,132,11,155,192,241,93,136,58,121,89,187,204,183,53,234,63,7,233,11,57,126,142,250,171,59,118,8,184,141,159,35,130,226,59,193,157,41,59,166,236,3,2,46,124,60,22,66,150,155,226,
153,67,13,29,26,235,10,155,201,114,80,99,197,50,175,86,198,84,227,212,49,198,16,225,204,190,97,194,156,186,113,163,102,72,14,212,204,70,90,243,199,104,186,92,168,29,146,214,181,71,67,209,172,140,171,134,
149,193,215,153,219,187,194,149,162,104,185,35,26,57,115,171,33,181,215,30,113,167,180,2,240,23,245,228,134,4,39,135,150,228,216,2,142,175,55,180,59,111,5,220,186,44,250,208,118,175,197,7,251,76,115,56,
151,103,56,243,207,122,165,43,184,245,143,161,237,181,89,5,0,120,33,34,163,237,226,32,127,242,240,191,68,67,216,71,97,220,195,247,35,125,186,48,247,15,252,218,192,230,234,84,124,213,114,9,255,0,225,1,
114,191,150,65,204,181,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::fx_png = (const char*) resource_LiveInstrument_fx_png;
const int LiveInstrument::fx_pngSize = 1133;

// JUCER_RESOURCE: gain_png, 593, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/Gain.png"
static const unsigned char resource_LiveInstrument_gain_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,50,0,0,0,17,8,6,0,0,0,159,7,255,41,0,0,2,24,73,68,65,84,72,137,197,151,209,145,155,
48,16,64,159,61,252,31,29,132,84,96,167,130,35,21,132,84,16,82,65,232,32,152,6,98,87,144,187,14,220,193,145,14,124,29,112,29,224,6,54,249,88,105,36,100,193,225,51,115,121,51,26,36,177,18,187,210,238,74,
172,68,132,8,57,176,5,82,211,62,1,45,208,199,132,111,36,247,234,167,107,191,209,52,13,0,73,208,95,2,53,240,97,100,220,35,80,93,251,177,87,120,242,234,159,209,5,187,154,181,87,127,0,126,51,110,4,192,55,
243,161,116,66,230,191,96,119,164,66,149,180,156,81,195,58,84,233,18,103,224,6,216,155,190,37,248,227,213,223,188,211,43,17,73,81,133,239,76,223,25,245,219,83,32,123,4,190,120,237,143,102,92,72,138,139,
49,140,76,59,34,11,211,49,146,153,130,233,63,153,249,11,211,127,108,154,70,245,20,145,82,68,254,122,165,16,17,34,37,19,145,214,43,219,136,76,41,34,125,48,159,45,173,136,164,145,49,190,76,30,188,171,131,
241,237,216,188,73,176,34,103,179,242,49,186,64,54,36,67,99,108,140,123,212,93,139,9,153,41,238,39,250,171,4,183,117,112,233,78,48,174,124,199,208,93,124,5,95,208,236,215,161,241,103,93,210,119,205,183,
178,67,117,246,99,58,15,211,111,140,167,145,254,29,170,172,37,195,5,238,30,183,179,57,203,24,0,240,9,183,216,29,240,211,190,152,99,200,92,42,92,134,43,76,123,139,75,34,183,242,204,208,99,6,222,147,48,
204,18,177,243,97,231,213,171,9,197,182,104,118,90,74,241,144,48,53,15,218,107,134,39,233,134,203,152,168,77,105,153,86,242,200,48,133,31,208,147,250,235,108,85,111,96,205,101,150,218,51,76,0,150,250,
149,185,252,27,65,137,238,94,203,116,166,91,140,4,13,154,3,240,195,244,109,80,255,123,32,126,178,207,33,51,207,156,229,110,0,147,216,96,175,205,71,55,166,125,135,51,204,231,217,147,9,121,193,25,251,203,
148,119,195,94,26,123,212,144,195,132,236,35,238,218,17,163,64,99,35,228,123,208,174,230,42,119,13,171,200,255,72,134,26,149,153,118,143,250,186,77,119,185,121,118,92,222,159,50,212,160,148,225,63,140,
255,111,19,142,203,189,250,156,187,150,37,197,45,108,255,15,119,105,32,176,112,180,47,26,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::gain_png = (const char*) resource_LiveInstrument_gain_png;
const int LiveInstrument::gain_pngSize = 593;

// JUCER_RESOURCE: rectangle20Copy_png, 138, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/Rectangle 20 copy.png"
static const unsigned char resource_LiveInstrument_rectangle20Copy_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,121,0,0,0,21,8,6,0,0,0,98,204,65,104,0,0,0,81,73,68,65,84,104,129,237,209,
1,9,192,48,16,192,192,174,94,222,191,196,77,197,40,52,119,10,2,121,102,230,93,92,109,159,14,224,127,38,7,152,28,96,114,128,201,1,38,7,152,28,96,114,128,201,1,38,7,152,28,96,114,128,201,1,38,7,152,28,96,
114,128,201,1,38,7,152,28,96,114,192,7,75,78,1,152,156,39,57,24,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::rectangle20Copy_png = (const char*) resource_LiveInstrument_rectangle20Copy_png;
const int LiveInstrument::rectangle20Copy_pngSize = 138;

// JUCER_RESOURCE: rectangle20_png, 138, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/Rectangle 20.png"
static const unsigned char resource_LiveInstrument_rectangle20_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,121,0,0,0,21,8,6,0,0,0,98,204,65,104,0,0,0,81,73,68,65,84,104,129,237,209,1,
9,192,48,16,192,192,174,94,222,191,196,77,197,40,52,119,10,2,121,102,230,93,92,109,159,14,224,127,38,7,152,28,96,114,128,201,1,38,7,152,28,96,114,128,201,1,38,7,152,28,96,114,128,201,1,38,7,152,28,96,
114,128,201,1,38,7,152,28,96,114,192,7,75,78,1,152,156,39,57,24,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::rectangle20_png = (const char*) resource_LiveInstrument_rectangle20_png;
const int LiveInstrument::rectangle20_pngSize = 138;

// JUCER_RESOURCE: tab_png, 291, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/Tab.png"
static const unsigned char resource_LiveInstrument_tab_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,234,0,0,0,33,8,6,0,0,0,215,187,55,57,0,0,0,234,73,68,65,84,120,156,237,212,177,74,3,
65,20,133,225,99,92,9,72,80,124,193,180,190,147,143,152,70,4,27,43,45,92,33,110,4,33,96,102,15,126,31,108,115,153,229,78,243,207,213,235,126,255,30,96,213,54,163,47,0,252,78,168,80,64,168,80,64,168,80,
64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,64,168,80,
64,168,80,64,168,80,64,168,80,64,168,80,96,74,242,180,152,221,231,123,192,55,73,118,139,51,187,121,254,229,58,201,221,226,204,109,146,237,98,246,112,222,53,225,127,155,146,60,14,220,191,205,103,208,199,
46,249,80,172,113,63,156,152,6,239,127,155,191,99,207,35,46,178,34,163,31,138,115,246,111,230,255,254,98,63,25,31,42,167,94,126,152,29,46,126,139,245,24,253,80,172,98,255,7,119,189,12,25,1,135,114,240,
0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::tab_png = (const char*) resource_LiveInstrument_tab_png;
const int LiveInstrument::tab_pngSize = 291;

// JUCER_RESOURCE: tunerDroplets_png, 482, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/Tuner Droplets.png"
static const unsigned char resource_LiveInstrument_tunerDroplets_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,61,0,0,0,31,8,6,0,0,0,84,6,197,212,0,0,1,169,73,68,65,84,88,133,237,217,193,
75,20,81,28,192,241,143,203,74,20,6,66,70,18,118,179,171,7,133,160,131,136,120,8,98,61,87,4,157,34,40,161,187,130,176,8,66,167,186,121,8,60,73,151,162,78,18,8,138,137,7,143,253,1,221,37,193,155,93,10,
162,14,179,172,49,14,184,251,102,231,77,53,251,133,185,204,236,239,247,126,223,125,243,222,155,121,51,208,108,54,197,100,122,238,14,44,97,17,47,176,186,191,179,21,181,134,90,212,214,78,121,128,33,220,
47,163,241,122,72,208,209,221,203,153,231,175,125,60,233,52,197,115,60,193,235,78,3,90,119,200,25,66,238,146,32,233,63,184,142,31,56,238,50,110,183,117,132,48,140,75,56,12,140,207,37,125,27,123,248,142,
73,124,233,36,40,231,248,29,199,103,92,192,12,14,66,146,228,25,211,99,24,148,140,205,145,28,121,186,225,106,171,189,65,220,8,77,146,167,167,63,224,49,78,4,254,227,1,28,224,30,46,226,125,104,146,60,210,
63,177,158,35,62,148,183,121,19,4,73,119,49,75,247,140,94,174,229,101,173,211,165,210,151,174,10,149,148,110,79,100,155,163,15,51,127,208,248,250,38,90,49,189,226,188,71,214,172,158,94,198,54,166,10,171,
42,14,147,18,143,229,244,133,180,244,16,86,48,135,167,197,215,85,40,207,36,30,43,18,175,54,233,117,250,27,214,48,141,141,40,165,21,199,6,110,97,95,226,213,38,235,225,100,33,70,69,17,216,195,68,214,133,
74,206,222,3,177,183,139,254,6,42,217,211,125,233,170,208,151,174,10,125,233,170,80,79,111,220,151,177,21,84,52,233,183,174,26,102,241,82,178,167,252,63,51,46,241,156,173,227,29,174,224,38,230,203,172,
170,96,94,161,129,71,53,201,231,149,95,194,63,179,252,43,124,210,242,252,13,253,77,70,71,128,136,116,181,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::tunerDroplets_png = (const char*) resource_LiveInstrument_tunerDroplets_png;
const int LiveInstrument::tunerDroplets_pngSize = 482;

// JUCER_RESOURCE: tuner_png, 3254, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/Tuner.png"
static const unsigned char resource_LiveInstrument_tuner_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,41,0,0,0,47,8,6,0,0,0,126,57,227,235,0,0,12,125,73,68,65,84,88,133,181,153,123,140,
92,213,121,192,127,231,190,239,157,199,206,120,189,120,237,181,49,24,108,26,204,46,38,38,173,49,143,64,3,52,85,211,210,54,45,255,164,173,148,82,1,141,74,65,130,90,85,34,85,165,21,162,81,75,69,105,165,
86,13,85,83,169,81,16,5,211,38,64,82,44,30,81,40,96,130,177,215,187,94,175,95,248,129,189,59,246,122,119,118,118,118,94,247,158,71,255,216,185,235,217,197,54,134,152,35,125,154,115,207,57,247,156,223,
253,206,247,125,231,49,194,24,195,167,77,187,118,237,66,8,145,74,6,200,8,33,178,198,152,50,48,107,140,73,140,49,104,173,49,198,176,120,172,141,27,55,94,208,56,206,167,129,219,189,123,183,176,109,251,134,
32,8,238,180,109,251,102,203,178,174,22,66,244,10,33,230,219,24,99,164,214,250,136,214,122,80,41,245,134,82,234,135,90,235,163,74,169,179,2,159,47,137,79,210,120,120,120,56,239,56,206,55,92,215,189,207,
117,221,203,28,199,193,113,28,108,219,198,178,44,82,200,20,66,107,141,82,10,41,37,73,146,152,36,73,222,148,82,62,41,165,252,239,223,159,125,78,239,186,225,209,139,7,185,123,247,110,199,117,221,63,241,
125,255,47,61,207,235,242,125,31,215,117,177,109,155,25,211,100,127,171,196,241,120,138,25,221,164,165,18,50,118,192,18,39,195,106,111,41,107,253,75,176,181,72,65,105,181,90,196,113,60,212,106,181,254,
116,253,250,245,111,92,20,200,61,123,246,92,233,251,254,51,65,16,108,12,130,0,207,243,152,17,45,94,174,236,100,91,101,136,3,141,18,115,93,136,57,89,144,23,120,150,203,23,178,151,243,229,98,63,95,204,173,
195,36,138,56,142,105,52,26,52,155,205,127,142,227,248,225,254,254,254,198,121,33,207,87,57,50,50,114,123,16,4,91,163,40,202,5,65,64,211,56,124,119,104,150,231,178,79,16,107,5,70,156,233,38,205,27,177,
0,82,204,215,9,150,185,93,124,189,247,38,190,82,236,39,105,205,129,54,26,141,93,205,102,243,87,175,185,230,154,210,39,134,28,217,187,247,174,40,138,158,139,162,200,9,195,144,119,198,19,190,253,127,83,
172,41,250,236,92,245,20,45,45,201,91,33,183,116,173,103,99,118,13,107,194,101,44,113,178,4,150,75,77,197,140,199,211,236,171,143,243,110,229,16,219,103,14,163,141,153,135,93,159,233,227,175,46,187,139,
165,132,52,26,13,234,245,250,177,122,189,126,115,255,53,215,28,187,96,200,145,145,145,219,162,40,122,37,155,205,58,126,16,240,31,195,53,190,59,56,13,8,254,250,182,94,174,239,11,57,34,143,240,185,112,37,
142,177,230,195,16,66,204,119,56,239,193,66,48,45,107,60,115,242,93,190,95,122,151,134,76,64,64,214,10,248,246,149,191,205,128,191,156,122,189,78,189,94,63,82,171,213,54,246,247,247,79,125,44,228,208,
240,240,202,108,54,59,148,201,100,10,81,20,241,143,59,42,60,191,103,14,208,18,154,255,252,234,26,174,236,246,17,66,160,181,198,178,172,249,119,59,237,187,211,211,19,165,208,90,51,145,84,121,252,200,203,
188,53,125,8,140,192,181,92,254,230,202,223,226,23,163,85,212,106,53,106,181,218,43,245,90,237,203,3,3,3,11,28,197,98,81,202,68,209,247,162,40,42,132,97,200,179,163,179,60,63,82,6,161,9,108,197,223,222,
190,156,203,186,236,249,240,146,130,166,146,106,47,173,215,90,3,224,218,54,158,227,208,227,230,120,226,202,187,249,131,222,205,96,4,137,82,124,235,192,255,112,88,78,19,134,33,97,24,222,233,249,254,31,
47,102,90,0,57,58,58,250,187,190,239,223,18,248,62,35,147,9,255,242,222,4,160,241,44,195,19,119,46,103,195,50,23,132,152,7,73,189,180,19,110,177,116,194,250,174,139,37,4,247,45,191,137,123,150,223,136,
209,134,166,146,124,107,255,15,208,142,32,12,2,162,48,252,187,225,225,225,75,58,185,236,249,105,30,26,178,178,185,220,255,134,81,148,183,93,143,45,175,141,81,110,38,24,173,249,230,141,203,216,216,235,
147,9,67,172,54,100,169,84,98,116,116,148,82,169,196,228,228,36,197,98,17,219,182,57,87,74,77,33,109,51,144,233,227,88,99,138,15,106,167,153,145,45,20,134,95,42,92,134,214,218,53,198,132,79,61,245,212,
143,62,162,73,207,243,126,195,117,221,62,215,117,249,241,161,42,71,166,155,24,173,248,210,234,136,155,251,60,2,255,140,29,54,155,77,198,198,198,136,162,136,92,46,7,192,137,19,39,206,171,209,78,173,58,
109,208,71,86,127,137,37,118,132,209,240,236,216,251,76,170,6,190,239,227,249,254,189,123,246,236,201,126,4,50,12,195,63,119,28,7,203,182,249,254,200,20,70,107,28,35,249,163,13,69,44,203,194,177,237,121,
187,139,227,24,223,247,137,162,136,76,38,67,16,4,72,41,63,22,178,19,52,240,60,124,99,115,207,138,27,48,74,211,146,154,103,198,118,98,219,54,142,227,120,190,239,127,109,1,228,158,145,145,192,178,237,235,
93,215,101,100,162,201,135,149,6,152,132,219,86,103,200,59,154,40,12,23,56,71,24,134,248,190,143,109,219,243,235,118,161,80,184,32,200,206,93,145,239,121,220,81,92,71,129,16,163,12,63,62,181,23,44,129,
227,56,4,65,112,239,2,72,207,247,191,104,217,182,45,44,139,183,198,170,104,173,208,50,225,151,87,103,176,219,33,70,181,195,72,234,4,125,125,125,120,158,135,16,130,98,177,72,161,80,88,224,233,31,39,74,
41,92,199,1,109,184,181,120,5,70,26,166,90,117,246,205,78,96,217,54,8,209,63,60,50,98,205,67,70,97,248,235,182,101,129,49,12,157,154,197,104,137,35,20,107,11,14,174,227,124,36,188,24,99,176,109,155,238,
238,110,122,122,122,200,229,114,23,172,197,197,218,4,184,46,187,18,33,53,70,26,134,42,39,230,22,85,33,92,215,113,214,158,177,73,33,6,132,101,97,128,163,229,6,70,197,172,204,88,24,37,113,61,239,172,144,
23,67,180,214,216,150,197,165,94,30,29,43,144,134,195,179,229,185,149,203,178,200,100,50,155,161,189,233,21,176,204,104,141,86,138,114,125,14,178,219,15,72,90,45,108,203,66,74,121,206,208,242,243,164,
116,65,200,227,98,98,141,177,53,147,205,26,70,107,4,96,91,214,21,243,144,64,70,27,67,83,42,148,148,24,45,9,132,34,145,114,129,29,94,236,36,132,64,169,185,49,145,10,35,53,113,34,81,90,163,230,66,85,62,
133,20,8,129,54,6,129,198,66,33,101,204,76,221,208,106,181,22,216,206,103,145,164,82,52,90,45,84,83,97,219,10,199,204,149,25,152,219,57,113,102,186,171,186,93,81,112,53,39,103,19,78,86,154,36,234,18,26,
205,230,156,23,126,70,169,81,175,51,62,91,198,36,26,35,161,32,124,140,82,104,165,112,109,123,26,218,142,99,160,36,181,70,106,77,95,214,1,29,243,225,84,133,122,51,102,122,122,26,224,51,113,28,128,114,165,
194,129,201,147,152,246,116,247,185,57,100,219,196,132,16,7,0,225,180,9,222,215,82,222,106,128,171,186,60,118,40,137,140,91,12,29,63,133,111,193,210,238,238,207,196,46,181,214,148,167,166,24,44,29,195,
36,6,35,53,191,16,45,65,73,137,16,2,153,36,111,165,154,20,74,202,23,149,154,115,148,13,75,67,140,86,24,35,249,233,193,49,38,167,166,104,52,155,159,137,22,79,140,143,83,109,212,121,251,195,67,160,52,221,
78,68,175,155,65,105,141,109,219,205,190,190,190,163,243,211,253,232,163,143,110,119,92,55,145,82,178,34,227,112,105,214,5,163,121,255,216,56,99,229,42,163,251,246,93,244,41,79,164,100,255,129,3,188,126,
120,148,70,51,198,104,195,77,197,149,104,99,72,146,4,163,245,78,218,155,114,11,224,233,167,159,150,194,152,55,85,146,160,164,228,142,213,5,48,26,109,12,207,237,216,203,209,99,199,24,27,31,191,168,90,220,
53,56,200,196,244,52,63,218,63,4,128,47,92,110,235,89,61,183,252,206,157,213,255,53,53,139,249,93,80,165,82,121,66,88,22,198,24,54,244,100,88,221,21,128,101,216,119,106,138,183,14,29,103,251,246,237,148,
167,167,47,10,224,232,190,125,28,62,122,148,239,13,190,77,51,73,0,193,29,189,107,200,8,7,165,20,190,231,213,31,121,248,225,31,124,4,242,218,107,175,253,169,231,121,7,149,214,88,182,205,87,215,246,226,
217,14,88,130,151,135,246,51,124,188,196,182,87,95,229,228,169,83,63,23,224,224,238,221,188,191,115,39,63,28,126,159,15,38,39,176,44,155,190,76,158,91,47,89,141,17,2,140,65,74,249,79,47,188,240,66,139,
246,41,62,221,74,219,128,245,155,119,221,117,36,155,205,222,221,108,181,240,80,4,66,178,247,100,25,45,99,134,143,158,32,235,88,76,151,198,80,74,209,211,211,67,231,221,207,199,165,90,173,198,27,63,249,
9,251,14,30,228,229,189,187,217,61,49,134,229,123,100,51,89,190,126,213,70,122,114,93,56,174,75,87,62,63,253,15,79,62,249,135,59,118,236,168,1,138,142,147,188,3,120,64,56,56,56,248,239,83,229,242,87,102,
107,53,202,229,50,175,140,30,225,245,3,71,81,245,26,170,89,231,234,101,69,54,175,185,148,98,62,71,255,250,245,172,93,187,150,40,138,206,9,119,122,114,146,189,35,35,236,63,120,144,210,76,133,215,14,142,
114,58,105,98,71,1,81,62,199,215,174,254,60,235,87,172,34,159,207,179,164,88,100,182,90,189,247,246,219,111,127,14,104,0,9,160,83,72,171,13,25,220,125,247,221,203,254,108,203,150,215,79,157,62,221,91,
153,153,161,82,46,243,246,7,39,120,245,224,49,146,198,44,186,213,196,214,9,27,86,173,160,127,229,114,124,199,161,123,201,18,10,133,2,153,40,194,247,125,146,36,97,166,90,165,84,42,81,175,215,153,106,212,
249,217,145,15,248,160,60,137,229,123,216,129,79,190,43,199,239,92,53,192,21,203,150,147,239,234,162,216,213,69,38,12,183,110,222,188,249,27,109,192,86,10,153,174,119,6,208,128,122,246,217,103,203,27,
54,108,184,231,150,91,110,249,175,70,189,30,5,65,192,134,229,75,200,89,154,109,7,143,81,214,10,21,107,126,118,248,67,222,59,116,152,222,174,28,125,197,2,197,40,36,244,60,28,75,144,104,205,108,171,197,
68,117,134,15,203,83,76,55,26,8,215,193,242,60,44,215,229,242,98,55,119,94,190,142,75,114,93,120,174,139,239,121,100,194,112,207,3,15,60,240,205,246,20,171,212,30,225,204,229,128,213,182,75,15,8,128,232,
177,199,30,187,241,134,205,155,255,109,188,84,138,42,213,42,213,74,133,202,76,149,157,39,74,12,159,60,77,163,217,64,203,4,180,2,173,49,70,183,251,53,103,122,182,4,194,182,16,182,141,112,109,150,102,115,
124,126,249,10,214,245,44,35,151,203,145,239,234,162,208,213,69,119,177,56,250,248,227,143,255,222,182,109,219,198,129,122,135,22,21,96,58,207,160,157,83,47,94,123,237,181,211,249,124,126,251,192,192,
192,173,50,73,50,74,205,125,220,210,192,227,138,124,134,172,235,162,129,150,209,104,196,66,160,246,175,229,56,100,124,159,85,133,2,215,247,46,231,11,43,86,178,172,171,64,38,155,37,19,69,116,23,139,248,
158,247,214,35,143,60,114,223,59,239,188,51,209,1,39,219,128,11,52,217,233,64,110,91,155,62,144,219,180,105,211,170,135,30,122,232,47,12,220,124,250,244,105,170,179,179,233,109,24,173,56,38,110,181,168,
52,155,204,180,18,18,37,145,70,227,90,54,129,99,211,21,4,100,231,142,168,4,190,79,16,4,100,50,25,114,185,28,61,75,151,170,147,165,210,119,30,124,240,193,239,72,41,43,192,108,27,50,238,208,162,238,132,
76,243,246,162,105,15,129,44,144,219,178,101,203,175,12,12,12,220,87,111,52,86,84,42,21,102,107,53,226,56,38,73,18,100,146,204,237,1,141,1,51,119,73,101,217,54,182,101,225,186,46,158,239,227,123,30,185,
92,142,37,197,34,74,202,29,91,183,110,253,251,23,95,124,113,180,13,55,11,52,219,144,178,13,57,111,59,139,33,83,208,52,36,249,109,208,12,144,9,130,160,235,254,251,239,191,115,221,186,117,191,102,59,206,
231,106,179,179,162,222,108,18,199,49,50,73,80,90,99,210,78,44,107,206,41,130,128,48,138,200,132,97,171,90,173,190,243,230,155,111,62,191,117,235,214,65,160,10,212,218,54,152,2,198,231,115,156,206,231,
212,137,22,79,125,212,33,153,235,174,187,110,229,166,77,155,54,246,246,246,94,29,69,209,42,207,243,150,10,33,2,219,182,61,41,101,93,107,221,136,227,184,84,173,86,143,30,63,126,124,232,165,151,94,122,111,
98,98,162,220,134,234,148,184,13,153,78,113,10,120,78,200,197,211,110,183,65,59,181,154,154,129,223,206,123,237,54,118,251,3,5,103,66,154,108,67,180,218,32,169,180,56,19,11,227,118,187,212,89,22,0,194,
185,255,34,81,139,158,117,91,84,199,160,126,27,206,239,208,124,106,50,41,100,210,241,78,42,205,142,188,228,60,26,236,212,218,217,82,90,110,179,208,78,83,19,72,127,221,142,242,180,109,10,105,88,168,161,
206,240,210,41,233,199,159,21,240,124,144,157,245,157,118,186,88,82,184,180,158,118,62,141,236,41,64,42,157,208,170,163,205,57,1,47,4,178,179,77,170,209,78,104,107,81,89,103,127,233,224,170,227,87,47,
146,20,236,188,103,230,11,223,107,45,132,77,129,210,60,29,207,157,131,166,154,234,204,27,46,16,238,211,64,158,237,29,113,150,178,197,105,49,208,39,190,105,248,52,144,159,164,175,139,114,245,241,255,121,
72,163,63,213,201,211,78,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::tuner_png = (const char*) resource_LiveInstrument_tuner_png;
const int LiveInstrument::tuner_pngSize = 3254;

// JUCER_RESOURCE: dialogBackground_png2, 1583, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Dialog Background.png"
static const unsigned char resource_LiveInstrument_dialogBackground_png2[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,1,47,0,0,1,135,8,6,0,0,0,225,145,212,91,0,0,5,246,73,68,65,84,120,156,237,
221,177,110,93,85,20,69,209,229,195,139,193,49,113,194,191,80,132,255,255,48,40,66,69,119,145,242,174,166,52,70,233,230,44,201,214,148,119,97,191,151,191,190,127,223,182,191,7,16,114,238,30,0,240,127,
136,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,210,217,246,
126,247,8,128,171,206,182,199,221,35,0,174,114,54,2,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,
36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,210,217,246,122,247,8,128,171,206,182,183,187,71,0,92,229,108,4,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,
146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,164,179,237,229,238,17,0,87,157,109,31,119,143,0,184,202,217,8,36,137,23,144,36,
94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,157,
109,239,119,143,0,184,234,108,123,220,61,2,224,42,103,35,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,
120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,157,109,175,119,143,0,184,234,108,123,187,123,4,192,85,206,70,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,
18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,58,219,94,238,30,1,112,213,217,246,113,247,8,128,171,156,141,64,146,120,
1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,
210,217,246,126,247,8,128,171,206,182,199,221,35,0,174,114,54,2,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,
137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,210,217,246,122,247,8,128,171,206,182,183,187,71,0,92,229,108,4,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,
36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,164,179,237,229,238,17,0,87,157,109,31,119,143,0,184,202,217,8,36,137,23,
144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,
36,157,109,239,119,143,0,184,234,108,123,220,61,2,224,42,103,35,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,
64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,157,109,175,119,143,0,184,234,108,123,187,123,4,192,85,206,70,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,
11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,233,108,251,122,247,8,128,171,252,230,5,36,137,23,144,36,
94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,157,
109,159,239,30,1,112,213,217,246,233,238,17,0,87,57,27,129,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,
196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,201,7,112,0,73,62,250,12,72,114,54,2,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,
144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,103,219,215,187,71,0,92,229,55,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,
36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,233,108,251,124,247,8,128,171,206,182,79,
119,143,0,184,202,217,8,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,144,36,94,64,146,120,1,73,226,5,36,137,23,
144,36,94,64,146,120,1,73,62,128,3,72,242,209,103,64,146,179,17,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,36,241,2,146,196,11,72,18,47,32,73,188,128,164,199,182,63,255,243,181,
111,219,94,158,240,246,31,79,120,227,108,251,250,132,119,126,217,246,241,132,119,30,219,190,60,225,157,215,109,239,79,120,231,215,61,231,111,107,127,219,246,246,132,119,222,254,125,235,103,123,223,143,
239,209,207,246,251,158,243,143,27,190,236,199,207,246,37,255,0,56,156,6,183,170,163,209,131,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::dialogBackground_png2 = (const char*) resource_LiveInstrument_dialogBackground_png2;
const int LiveInstrument::dialogBackground_png2Size = 1583;

// JUCER_RESOURCE: input_png, 551, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/Input .png"
static const unsigned char resource_LiveInstrument_input_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,58,0,0,0,21,8,6,0,0,0,23,65,253,203,0,0,1,238,73,68,65,84,88,133,229,151,209,113,
219,48,12,64,159,123,249,143,54,136,54,168,55,136,50,129,187,65,189,65,51,1,143,229,4,241,6,30,193,157,32,244,6,234,6,202,6,202,2,72,63,72,89,52,197,200,162,114,86,175,205,187,227,217,34,1,17,128,8,144,
92,137,72,1,172,233,177,252,67,24,99,38,201,221,224,156,124,14,250,86,215,48,104,41,148,82,107,160,240,143,181,49,166,5,248,242,247,76,186,26,79,184,15,247,76,176,82,255,71,71,147,220,76,144,9,151,66,
227,219,55,250,104,89,210,121,29,230,126,11,212,64,233,117,11,255,158,125,198,156,163,99,74,169,34,26,3,88,43,165,0,106,68,164,18,145,183,160,17,53,27,140,29,68,164,141,228,223,68,100,159,208,11,223,107,
189,76,172,87,139,200,250,194,156,122,108,76,107,141,214,58,229,71,216,170,220,165,187,1,110,19,253,223,129,237,136,222,189,151,137,249,10,28,50,109,152,197,148,165,27,243,2,60,226,150,96,104,124,57,65,
79,123,185,71,250,128,221,225,130,180,159,97,203,9,99,140,5,86,74,41,139,11,44,192,131,239,207,46,70,191,113,121,112,240,198,29,51,116,183,56,103,52,195,160,84,153,118,100,147,235,168,197,21,150,142,58,
83,183,163,229,60,72,101,166,29,217,228,58,218,94,120,126,143,212,151,183,153,115,127,136,165,246,209,114,98,223,20,138,203,34,67,150,114,244,142,243,60,44,113,197,172,99,44,5,194,115,120,133,171,212,
83,57,5,101,78,213,157,203,1,87,140,10,134,91,205,62,122,174,233,43,231,134,190,54,108,50,231,220,42,165,90,160,94,242,8,120,11,252,96,232,228,47,134,95,52,222,91,239,153,238,100,19,252,223,224,207,188,
75,57,122,4,118,192,107,212,191,35,125,208,176,192,207,68,255,206,183,49,158,18,243,176,18,145,75,70,206,165,162,191,254,29,233,115,180,251,109,56,143,126,138,240,188,92,147,168,242,239,221,71,227,235,
218,146,57,218,97,51,100,219,76,249,19,198,152,179,116,248,52,215,180,79,227,232,53,151,110,67,95,80,154,43,206,51,137,63,211,41,50,198,240,83,24,21,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::input_png = (const char*) resource_LiveInstrument_input_png;
const int LiveInstrument::input_pngSize = 551;

// JUCER_RESOURCE: output_png, 778, "../../Desktop/Point Motion UI 2.0/MobileRemoteGUIResources/Puppet Master/Live Instrument/Output.png"
static const unsigned char resource_LiveInstrument_output_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,76,0,0,0,20,8,6,0,0,0,39,74,219,177,0,0,2,209,73,68,65,84,88,133,237,152,221,113,
219,48,16,132,63,105,252,46,165,2,51,21,88,29,136,174,192,78,7,236,32,114,3,52,204,10,156,10,162,116,16,87,16,170,130,208,29,80,29,72,13,192,121,56,32,60,194,32,41,201,146,99,39,217,25,204,128,184,195,
113,177,56,252,144,35,107,45,10,9,96,128,25,112,225,218,182,64,5,124,7,150,192,134,191,8,69,81,236,229,127,166,234,25,240,53,226,51,1,230,174,44,128,107,68,192,99,34,67,38,11,100,82,234,35,199,63,8,121,
158,27,95,47,138,194,64,35,88,70,92,172,16,231,64,137,12,238,152,153,150,33,19,130,139,95,31,49,246,75,112,171,234,6,96,140,12,254,94,25,182,192,13,240,1,24,1,31,129,7,101,159,4,254,255,20,70,214,90,67,
91,201,79,200,126,21,162,164,201,2,16,65,117,150,101,52,203,170,116,101,200,150,56,91,134,100,47,192,55,36,195,140,234,159,186,226,251,111,92,159,153,106,187,39,158,245,166,163,30,62,47,139,162,168,1,
242,60,247,124,181,46,119,64,141,181,182,180,214,62,185,82,89,107,233,40,169,242,123,178,214,102,129,93,199,49,59,218,194,152,186,232,254,38,224,24,243,175,172,181,211,8,239,174,152,161,45,53,198,96,140,
9,249,234,82,142,105,103,77,44,179,60,74,100,185,122,36,61,190,187,98,3,172,130,184,143,174,173,11,23,61,237,125,252,247,65,21,225,176,2,170,179,136,227,80,160,249,128,207,62,168,144,165,86,170,184,11,
218,203,57,134,27,100,9,102,200,178,242,203,121,142,76,100,253,18,82,69,81,44,0,242,60,127,82,109,41,200,166,255,222,176,162,57,116,150,136,104,26,201,41,95,30,10,54,139,122,237,110,127,13,148,3,207,233,
41,95,62,70,246,12,143,62,65,18,228,74,225,81,159,128,207,161,120,28,118,121,134,233,33,47,26,211,158,161,43,186,69,11,239,94,101,204,169,3,199,204,204,112,160,83,218,7,65,185,35,143,131,56,141,137,11,
145,6,132,12,34,166,199,138,254,12,155,185,126,83,23,127,210,227,27,98,104,230,51,154,193,250,248,26,125,188,174,21,63,179,7,167,223,56,115,47,248,2,124,118,109,19,224,7,176,118,182,25,237,1,111,121,190,
209,66,251,4,189,162,33,190,143,88,32,2,164,200,105,25,195,4,248,137,44,195,36,136,31,155,200,53,205,41,122,75,251,146,188,51,242,60,47,129,165,223,244,23,200,13,91,227,28,17,32,20,43,141,144,130,231,
51,61,81,125,183,244,67,95,103,206,105,38,47,6,31,235,34,194,45,38,242,50,120,246,98,13,113,2,17,219,99,14,100,250,148,204,144,207,162,216,165,113,139,8,58,163,251,174,86,3,151,170,255,214,213,47,29,233,
21,221,75,217,184,248,143,170,95,23,238,145,123,152,222,232,31,122,184,25,228,179,198,15,126,173,198,178,82,37,246,89,181,112,182,181,43,213,40,248,31,166,145,184,82,246,144,127,45,24,154,239,186,59,14,
220,127,98,120,201,255,176,16,53,111,235,234,240,38,240,30,111,250,127,20,255,5,219,19,191,0,224,250,178,119,31,245,232,215,0,0,0,0,73,69,78,68,174,66,96,130,0,0};

const char* LiveInstrument::output_png = (const char*) resource_LiveInstrument_output_png;
const int LiveInstrument::output_pngSize = 778;


//[EndFile] You can add extra defines here...
//[/EndFile]
