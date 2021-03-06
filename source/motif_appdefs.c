/*
** - - -  iMaze  - - -
**
** Copyright (c) 1993-2001 by Hans-Ulrich Kiel & Joerg Czeranski
** All rights reserved.
**
** Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**
** 1. Redistributions of source code must retain the above copyright
**    notice, this list of conditions and the following disclaimer.
** 2. Redistributions in binary form must reproduce the above copyright
**    notice, this list of conditions and the following disclaimer in the
**    documentation and/or other materials provided with the distribution.
** 3. The name of the authors may not be used to endorse or promote
**    products derived from this software without specific prior written
**    permission.
** 4. The name ``iMaze'' may not be used for products derived from this
**    software unless a prefix or a suffix is added to the name.
**
** THIS SOFTWARE IS PROVIDED BY THE AUTHORS ``AS IS'' AND ANY EXPRESS OR
** IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
** WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
** DISCLAIMED.  IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY DIRECT,
** INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
** (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
** SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
** HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
** STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
** IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
** POSSIBILITY OF SUCH DAMAGE.
**
**
** Datei: motif_appdefs.c
**
** Kommentar:
**  Application Defaults fuer Motif
*/


#include <X11/Intrinsic.h>

#include "Xt_appdefs.h"

static char sccsid[] = "@(#)motif_appdefs.c	3.6 12/08/01";


String fallback_app_resources[] =
{
	"IMaze.dialog.mwmDecorations: 10",
	"IMaze.dialog.title: iMaze: Notice",
	"IMaze.dialog.iconName: iMaze: Notice",
	"IMaze*XmBulletinBoard.dialogStyle: Dialog_Full_Application_Modal",
	"IMaze*XmBulletinBoard*XmLabel.leftAttachment: Attach_Form",
	"IMaze*XmBulletinBoard*XmLabel.rightAttachment: Attach_Form",
	"IMaze*XmBulletinBoard*separator.height: 20",
	"IMaze*XmBulletinBoard*separator.leftAttachment: Attach_Form",
	"IMaze*XmBulletinBoard*separator.rightAttachment: Attach_Form",
	"IMaze*XmBulletinBoard*XmPushButton.defaultButtonShadowThickness: 1",
	"IMaze*question*default.labelString: Continue",
	"IMaze*error*default.labelString: Bad Luck",
	"IMaze*error*default.leftAttachment: Attach_Form",
	"IMaze*XmBulletinBoard*default.showAsDefault: 1",
	"IMaze*XmBulletinBoard*default.topAttachment: Attach_Widget",
	"IMaze*XmBulletinBoard*default.topWidget: separator",
	"IMaze*question*cancel.labelString: Quit",
	"IMaze*question*cancel.topAttachment: Attach_Widget",
	"IMaze*question*cancel.topWidget: separator",
	"IMaze*question*cancel.rightAttachment: Attach_Form",
	"IMaze*question*space.width: 16",
	"IMaze*question*space.traversalOn: False",
	"IMaze*question*space.topAttachment: Attach_Widget",
	"IMaze*question*space.topWidget: separator",
	"IMaze*question*space.leftAttachment: Attach_Widget",
	"IMaze*question*space.leftWidget: default",
	"IMaze*question*space.rightAttachment: Attach_Widget",
	"IMaze*question*space.rightWidget: cancel",

	"IMaze*foreground: black",
	"IMaze*background: grey75",
	"IMaze*topShadowColor: grey90",
	"IMaze*bottomShadowColor: grey40",
	"IMaze*highlightColor: black",

	"IMaze*FontList: -*-lucida-medium-r-*-*-12-*-*-*-p-*-*-*; -*-helvetica-medium-r-*-*-12-*-*-*-p-*-*-*:",
	"IMaze.form.XmForm.label.FontList: -*-lucida-bold-r-*-*-12-*-*-*-p-*-*-*; -*-helvetica-bold-r-*-*-12-*-*-*-p-*-*-*:",

	"IMaze.form.horizontalSpacing: 8",
	"IMaze.form.verticalSpacing: 8",

	"IMaze.form.XmForm.leftAttachment: Attach_Form",
	"IMaze.form.XmForm.rightAttachment: Attach_Form",
	"IMaze.form.XmForm.leftOffset: 8",
	"IMaze.form.XmForm.rightOffset: 8",

	"IMaze.form.XmForm.input.topAttachment: Attach_Widget",
	"IMaze.form.XmForm.input.topWidget: label",
	"IMaze.form.XmForm.input.leftAttachment: Attach_Form",
	"IMaze.form.XmForm.input.rightAttachment: Attach_Form",

	"IMaze*fileMenu.labelString: File",
	"IMaze*fileMenu.mnemonic: F",
	"IMaze*menuBar*exit.labelString: Exit",
	"IMaze*menuBar*exit.mnemonic: x",

	"IMaze*toggleMenu.labelString: Window",
	"IMaze*toggleMenu.mnemonic: W",
	"IMaze*menuBar*frontView.labelString: Front View",
	"IMaze*menuBar*frontView.mnemonic: F",
	"IMaze*menuBar*rearView.labelString: Rear View",
	"IMaze*menuBar*rearView.mnemonic: R",
	"IMaze*menuBar*map.labelString: Map",
	"IMaze*menuBar*map.mnemonic: M",
	"IMaze*menuBar*compass.labelString: Compass",
	"IMaze*menuBar*compass.mnemonic: C",
	"IMaze*menuBar*score.labelString: Score",
	"IMaze*menuBar*score.mnemonic: S",

	"IMaze*serverMenu.labelString: Server",
	"IMaze*serverMenu.mnemonic: S",
	"IMaze*menuBar*connect.labelString: Connect",
	"IMaze*menuBar*connect.mnemonic: C",
	"IMaze*menuBar*disconnect.labelString: Disconnect",
	"IMaze*menuBar*disconnect.mnemonic: D",

	"IMaze*gameMenu.labelString: Game",
	"IMaze*gameMenu.mnemonic: G",
	"IMaze*menuBar*pause.labelString: Pause",
	"IMaze*menuBar*pause.mnemonic: P",
	"IMaze*menuBar*resume.labelString: Resume",
	"IMaze*menuBar*resume.mnemonic: R",

	"IMaze*menuBar.leftAttachment: Attach_Form",
	"IMaze*menuBar.leftOffset: 8",
	"IMaze*menuBar.rightAttachment: Attach_Form",
	"IMaze*menuBar.rightOffset: 8",
	"IMaze*menuBar.topAttachment: Attach_Form",
	"IMaze*menuBar.topOffset: 4",

	"IMaze*server.topAttachment: Attach_Widget",
	"IMaze*server.topWidget: menuBar",
	"IMaze*server.label.labelString: Server:",

	"IMaze*message.topAttachment: Attach_Widget",
	"IMaze*message.topWidget: server",
	"IMaze*message.label.labelString: Message:",

	"IMaze*camera.leftAttachment: Attach_Form",
	"IMaze*camera.leftOffset: 8",
	"IMaze*camera.topAttachment: Attach_Widget",
	"IMaze*camera.topWidget: message",
	"IMaze*camera.button.labelString: Camera mode",

	"IMaze*status.leftAttachment: Attach_Form",
	"IMaze*status.leftOffset: 8",
	"IMaze*status.topAttachment: Attach_Widget",
	"IMaze*status.topWidget: camera",
	"IMaze*status.bottomAttachment: Attach_Form",
	"IMaze*status.bottomOffset: 4",

	"IMaze.title: iMaze - Version 1.4",
	"IMaze.iconName: iMaze",
	"IMaze.x: 8",
	"IMaze.y: 408",
	"IMaze.width: 336",

	"IMaze.frontView.title: iMaze: Front View",
	"IMaze.frontView.iconName: iMaze: Front View",
	"IMaze.frontView.x: 360",
	"IMaze.frontView.y: 304",
	"IMaze.frontView.width: 420",
	"IMaze.frontView.height: 280",

	"IMaze.rearView.title: iMaze: Rear View",
	"IMaze.rearView.iconName: iMaze: Rear View",
	"IMaze.rearView.x: 360",
	"IMaze.rearView.y: 32",
	"IMaze.rearView.width: 210",
	"IMaze.rearView.height: 140",

	"IMaze.map.title: iMaze: Map",
	"IMaze.map.iconName: iMaze: Map",
	"IMaze.map.x: 8",
	"IMaze.map.y: 32",
	"IMaze.map.width: 336",
	"IMaze.map.height: 336",

	"IMaze.compass.title: iMaze: Compass",
	"IMaze.compass.iconName: iMaze: Compass",
	"IMaze.compass.x: 586",
	"IMaze.compass.y: 32",
	"IMaze.compass.width: 114",
	"IMaze.compass.height: 114",

	"IMaze.score.title: iMaze: Score",
	"IMaze.score.iconName: iMaze: Score",
	"IMaze.score.x: 796",
	"IMaze.score.y: 304",
	"IMaze.score.width: 96",
	"IMaze.score.height: 302",

	NULL
};
