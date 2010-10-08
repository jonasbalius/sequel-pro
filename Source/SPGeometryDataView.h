//
//  $Id$
//
//  SPGeometryDataView.m
//  sequel-pro
//
//  Created by Hans-Jörg Bibiko on October 08, 2010
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

#import <Cocoa/Cocoa.h>


@interface SPGeometryDataView : NSView
{
	NSString *type;
	NSArray *coordinates;
	double x_min;
	double x_max;
	double y_min;
	double y_max;
	double width;
	double height;
	double zoom_factor;
	double margin_offset;
}

- (id)initWithCoordinates:(NSDictionary*)coord;
- (void)setMax:(NSArray*)bbox;
- (NSPoint)normalizePoint:(NSPoint)aPoint;
- (NSImage*)image;

@end