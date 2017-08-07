#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "c14n.h"
#import "catalog.h"
#import "chvalid.h"
#import "debugXML.h"
#import "dict.h"
#import "encoding.h"
#import "entities.h"
#import "globals.h"
#import "hash.h"
#import "HTMLparser.h"
#import "HTMLtree.h"
#import "list.h"
#import "nanoftp.h"
#import "nanohttp.h"
#import "parser.h"
#import "parserInternals.h"
#import "pattern.h"
#import "relaxng.h"
#import "SAX.h"
#import "SAX2.h"
#import "schemasInternals.h"
#import "schematron.h"
#import "threads.h"
#import "tree.h"
#import "uri.h"
#import "valid.h"
#import "xinclude.h"
#import "xlink.h"
#import "xmlautomata.h"
#import "xmlerror.h"
#import "xmlexports.h"
#import "xmlIO.h"
#import "xmlmemory.h"
#import "xmlmodule.h"
#import "xmlreader.h"
#import "xmlregexp.h"
#import "xmlsave.h"
#import "xmlschemas.h"
#import "xmlschemastypes.h"
#import "xmlstring.h"
#import "xmlunicode.h"
#import "xmlversion.h"
#import "xmlwriter.h"
#import "xpath.h"
#import "xpathInternals.h"
#import "xpointer.h"

FOUNDATION_EXPORT double JiVersionNumber;
FOUNDATION_EXPORT const unsigned char JiVersionString[];

