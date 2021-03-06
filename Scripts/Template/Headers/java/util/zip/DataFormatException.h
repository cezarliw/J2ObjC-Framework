//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/zip/DataFormatException.java
//

#include "../../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaUtilZipDataFormatException")
#ifdef RESTRICT_JavaUtilZipDataFormatException
#define INCLUDE_ALL_JavaUtilZipDataFormatException 0
#else
#define INCLUDE_ALL_JavaUtilZipDataFormatException 1
#endif
#undef RESTRICT_JavaUtilZipDataFormatException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaUtilZipDataFormatException_) && (INCLUDE_ALL_JavaUtilZipDataFormatException || defined(INCLUDE_JavaUtilZipDataFormatException))
#define JavaUtilZipDataFormatException_

#define RESTRICT_JavaLangException 1
#define INCLUDE_JavaLangException 1
#include "../../../java/lang/Exception.h"

/*!
 @brief <code>DataFormatException</code> is used to indicate an error in the format of a
 particular data stream which is to be uncompressed.
 */
@interface JavaUtilZipDataFormatException : JavaLangException

#pragma mark Public

/*!
 @brief Constructs a new <code>DataFormatException</code> instance.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>DataFormatException</code> instance with the specified
 message.
 @param detailMessage
 the detail message for the exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaUtilZipDataFormatException)

FOUNDATION_EXPORT void JavaUtilZipDataFormatException_init(JavaUtilZipDataFormatException *self);

FOUNDATION_EXPORT JavaUtilZipDataFormatException *new_JavaUtilZipDataFormatException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDataFormatException *create_JavaUtilZipDataFormatException_init();

FOUNDATION_EXPORT void JavaUtilZipDataFormatException_initWithNSString_(JavaUtilZipDataFormatException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaUtilZipDataFormatException *new_JavaUtilZipDataFormatException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaUtilZipDataFormatException *create_JavaUtilZipDataFormatException_initWithNSString_(NSString *detailMessage);

J2OBJC_TYPE_LITERAL_HEADER(JavaUtilZipDataFormatException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaUtilZipDataFormatException")
