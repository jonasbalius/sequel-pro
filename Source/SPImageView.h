//
//  $Id$
//
//  SPImageView.h
//  sequel-pro
//
//  Created by lorenz textor (lorenz@textor.ch) on Sat Sep 06 2003.
//  Copyright (c) 2002-2003 Lorenz Textor. All rights reserved.
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
//
//  More info at <http://code.google.com/p/sequel-pro/>

@interface NSObject (SPImageViewDelegate)

- (void)processUpdatedImageData:(NSData *)data;
- (void)processPasteImageData;

@end

@interface SPImageView : NSImageView 
{
	IBOutlet id delegate;
}

- (BOOL)performDragOperation:(id <NSDraggingInfo>)sender;

@end
