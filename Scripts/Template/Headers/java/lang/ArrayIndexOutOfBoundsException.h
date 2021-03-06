//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ArrayIndexOutOfBoundsException.java
//

#include "../../J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_JavaLangArrayIndexOutOfBoundsException")
#ifdef RESTRICT_JavaLangArrayIndexOutOfBoundsException
#define INCLUDE_ALL_JavaLangArrayIndexOutOfBoundsException 0
#else
#define INCLUDE_ALL_JavaLangArrayIndexOutOfBoundsException 1
#endif
#undef RESTRICT_JavaLangArrayIndexOutOfBoundsException

#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

#if !defined (JavaLangArrayIndexOutOfBoundsException_) && (INCLUDE_ALL_JavaLangArrayIndexOutOfBoundsException || defined(INCLUDE_JavaLangArrayIndexOutOfBoundsException))
#define JavaLangArrayIndexOutOfBoundsException_

#define RESTRICT_JavaLangIndexOutOfBoundsException 1
#define INCLUDE_JavaLangIndexOutOfBoundsException 1
#include "../../java/lang/IndexOutOfBoundsException.h"

/*!
 @brief Thrown when the an array is indexed with a value less than zero, or greater
 than or equal to the size of the array.
 */
@interface JavaLangArrayIndexOutOfBoundsException : JavaLangIndexOutOfBoundsException

#pragma mark Public

/*!
 @brief Constructs a new <code>ArrayIndexOutOfBoundsException</code> that includes the
 current stack trace.
 */
- (instancetype)init;

/*!
 @brief Constructs a new <code>ArrayIndexOutOfBoundsException</code> with the current
 stack trace and a detail message that is based on the specified invalid
 <code>index</code>.
 @param index
 the invalid index.
 */
- (instancetype)initWithInt:(jint)index;

/*!
 @brief Used internally for consistent high-quality error reporting.
 */
- (instancetype)initWithInt:(jint)sourceLength
                    withInt:(jint)index;

/*!
 @brief Used internally for consistent high-quality error reporting.
 */
- (instancetype)initWithInt:(jint)sourceLength
                    withInt:(jint)offset
                    withInt:(jint)count;

/*!
 @brief Constructs a new <code>ArrayIndexOutOfBoundsException</code> with the current
 stack trace and the specified detail message.
 @param detailMessage
 the detail message for this exception.
 */
- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

J2OBJC_EMPTY_STATIC_INIT(JavaLangArrayIndexOutOfBoundsException)

FOUNDATION_EXPORT void JavaLangArrayIndexOutOfBoundsException_init(JavaLangArrayIndexOutOfBoundsException *self);

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *new_JavaLangArrayIndexOutOfBoundsException_init() NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *create_JavaLangArrayIndexOutOfBoundsException_init();

FOUNDATION_EXPORT void JavaLangArrayIndexOutOfBoundsException_initWithInt_(JavaLangArrayIndexOutOfBoundsException *self, jint index);

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *new_JavaLangArrayIndexOutOfBoundsException_initWithInt_(jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *create_JavaLangArrayIndexOutOfBoundsException_initWithInt_(jint index);

FOUNDATION_EXPORT void JavaLangArrayIndexOutOfBoundsException_initWithNSString_(JavaLangArrayIndexOutOfBoundsException *self, NSString *detailMessage);

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *new_JavaLangArrayIndexOutOfBoundsException_initWithNSString_(NSString *detailMessage) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *create_JavaLangArrayIndexOutOfBoundsException_initWithNSString_(NSString *detailMessage);

FOUNDATION_EXPORT void JavaLangArrayIndexOutOfBoundsException_initWithInt_withInt_(JavaLangArrayIndexOutOfBoundsException *self, jint sourceLength, jint index);

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *new_JavaLangArrayIndexOutOfBoundsException_initWithInt_withInt_(jint sourceLength, jint index) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *create_JavaLangArrayIndexOutOfBoundsException_initWithInt_withInt_(jint sourceLength, jint index);

FOUNDATION_EXPORT void JavaLangArrayIndexOutOfBoundsException_initWithInt_withInt_withInt_(JavaLangArrayIndexOutOfBoundsException *self, jint sourceLength, jint offset, jint count);

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *new_JavaLangArrayIndexOutOfBoundsException_initWithInt_withInt_withInt_(jint sourceLength, jint offset, jint count) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT JavaLangArrayIndexOutOfBoundsException *create_JavaLangArrayIndexOutOfBoundsException_initWithInt_withInt_withInt_(jint sourceLength, jint offset, jint count);

J2OBJC_TYPE_LITERAL_HEADER(JavaLangArrayIndexOutOfBoundsException)

#endif


#pragma clang diagnostic pop
#pragma pop_macro("INCLUDE_ALL_JavaLangArrayIndexOutOfBoundsException")
