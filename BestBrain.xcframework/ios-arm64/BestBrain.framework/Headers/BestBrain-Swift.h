#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9.2 (swiftlang-5.9.2.2.56 clang-1500.1.0.2.5)
#ifndef BESTBRAIN_SWIFT_H
#define BESTBRAIN_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="BestBrain",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class UITouch;
@class UIEvent;
@class NSString;
@class NSBundle;
@class NSCoder;

SWIFT_CLASS("_TtC9BestBrain30BestBrainMessageViewController")
@interface BestBrainMessageViewController : UIViewController
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)touchesEnded:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@class UIGestureRecognizer;

@interface BestBrainMessageViewController (SWIFT_EXTENSION(BestBrain)) <UIGestureRecognizerDelegate>
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldReceiveTouch:(UITouch * _Nonnull)touch SWIFT_WARN_UNUSED_RESULT;
@end

@class UITableView;
@class NSIndexPath;
@class UITableViewCell;

@interface BestBrainMessageViewController (SWIFT_EXTENSION(BestBrain)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class NSStream;

SWIFT_CLASS("_TtC9BestBrain19FoundationTransport")
@interface FoundationTransport : NSObject <NSStreamDelegate>
- (void)stream:(NSStream * _Nonnull)aStream handleEvent:(NSStreamEvent)eventCode;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class UIColor;
@class NSAttributedString;
@class NSTextContainer;

IB_DESIGNABLE
SWIFT_CLASS("_TtC9BestBrain15GrowingTextView")
@interface GrowingTextView : UITextView
@property (nonatomic, copy) NSString * _Null_unspecified text;
@property (nonatomic) IBInspectable NSInteger maxLength;
@property (nonatomic) IBInspectable BOOL trimWhiteSpaceWhenEndEditing;
@property (nonatomic) IBInspectable CGFloat minHeight;
@property (nonatomic) IBInspectable CGFloat maxHeight;
@property (nonatomic, copy) IBInspectable NSString * _Nullable placeholder;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull placeholderColor;
@property (nonatomic, strong) IBInspectable NSAttributedString * _Nullable attributedPlaceholder;
- (nonnull instancetype)initWithFrame:(CGRect)frame textContainer:(NSTextContainer * _Nullable)textContainer OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, readonly) CGSize intrinsicContentSize;
- (void)layoutSubviews;
- (void)drawRect:(CGRect)rect;
@end


SWIFT_PROTOCOL("_TtP9BestBrain23GrowingTextViewDelegate_")
@protocol GrowingTextViewDelegate <UITextViewDelegate>
@optional
- (void)textViewDidChangeHeight:(GrowingTextView * _Nonnull)textView height:(CGFloat)height;
@end







/// Activity indicator view with nice animations
SWIFT_CLASS("_TtC9BestBrain23NVActivityIndicatorView")
@interface NVActivityIndicatorView : UIView
/// Color of activity indicator view.
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull color;
/// Padding of activity indicator view.
@property (nonatomic) IBInspectable CGFloat padding;
/// Returns an object initialized from data in a given unarchiver.
/// self, initialized using the data in decoder.
/// \param decoder an unarchiver object.
///
///
/// returns:
/// self, initialized using the data in decoder.
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
/// Returns the natural size for the receiving view, considering only properties of the view itself.
/// A size indicating the natural size for the receiving view based on its intrinsic properties.
///
/// returns:
/// A size indicating the natural size for the receiving view based on its intrinsic properties.
@property (nonatomic, readonly) CGSize intrinsicContentSize;
@property (nonatomic) CGRect bounds;
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
@end

@class NSURLSession;
@class NSURLSessionWebSocketTask;
@class NSData;
@class NSURLSessionTask;

SWIFT_CLASS("_TtC9BestBrain12NativeEngine") SWIFT_AVAILABILITY(tvos,introduced=13.0) SWIFT_AVAILABILITY(watchos,introduced=6.0) SWIFT_AVAILABILITY(ios,introduced=13.0) SWIFT_AVAILABILITY(macos,introduced=10.15)
@interface NativeEngine : NSObject <NSURLSessionDataDelegate, NSURLSessionWebSocketDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session webSocketTask:(NSURLSessionWebSocketTask * _Nonnull)webSocketTask didOpenWithProtocol:(NSString * _Nullable)protocol;
- (void)URLSession:(NSURLSession * _Nonnull)session webSocketTask:(NSURLSessionWebSocketTask * _Nonnull)webSocketTask didCloseWithCode:(NSURLSessionWebSocketCloseCode)closeCode reason:(NSData * _Nullable)reason;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


/// A class that represents an emit that will request an ack that has not yet been sent.
/// Call <code>timingOut(after:callback:)</code> to complete the emit
/// Example:
/// \code
/// socket.emitWithAck("myEvent").timingOut(after: 1) {data in
///     ...
/// }
///
/// \endcode
SWIFT_CLASS("_TtC9BestBrain13OnAckCallback")
@interface OnAckCallback : NSObject
/// Completes an emitWithAck. If this isn’t called, the emit never happens.
/// \param seconds The number of seconds before this emit times out if an ack hasn’t been received.
///
/// \param callback The callback called when an ack is received, or when a timeout happens.
/// To check for timeout, use <code>SocketAckStatus</code>’s <code>noAck</code> case.
///
- (void)timingOutAfter:(double)seconds callback:(void (^ _Nonnull)(NSArray * _Nonnull))callback;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

@class SocketRawAckView;

/// A class that represents a waiting ack call.
/// <em>NOTE</em>: You should not store this beyond the life of the event handler.
SWIFT_CLASS("_TtC9BestBrain16SocketAckEmitter")
@interface SocketAckEmitter : NSObject
/// A view into this emitter where emits do not check for binary data.
/// Usage:
/// \code
/// ack.rawEmitView.with(myObject)
///
/// \endcode<em>NOTE</em>: It is not safe to hold on to this view beyond the life of the socket.
@property (nonatomic, readonly, strong) SocketRawAckView * _Nonnull rawEmitView;
/// Call to ack receiving this event.
/// \param items An array of items to send when acking. Use <code>[]</code> to send nothing.
///
- (void)with:(NSArray * _Nonnull)items;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Represents some event that was received.
SWIFT_CLASS("_TtC9BestBrain14SocketAnyEvent")
@interface SocketAnyEvent : NSObject
/// The event name.
@property (nonatomic, readonly, copy) NSString * _Nonnull event;
/// The data items for this event.
@property (nonatomic, readonly, copy) NSArray * _Nullable items;
/// The description of this event.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// The class that handles the engine.io protocol and transports.
/// See <code>SocketEnginePollable</code> and <code>SocketEngineWebsocket</code> for transport specific methods.
SWIFT_CLASS("_TtC9BestBrain12SocketEngine")
@interface SocketEngine : NSObject <NSURLSessionDelegate>
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end




/// Declares that a type will be a delegate to an engine.
SWIFT_PROTOCOL("_TtP9BestBrain18SocketEngineClient_")
@protocol SocketEngineClient
/// Called when the engine errors.
/// \param reason The reason the engine errored.
///
- (void)engineDidErrorWithReason:(NSString * _Nonnull)reason;
/// Called when the engine closes.
/// \param reason The reason that the engine closed.
///
- (void)engineDidCloseWithReason:(NSString * _Nonnull)reason;
/// Called when the engine opens.
/// \param reason The reason the engine opened.
///
- (void)engineDidOpenWithReason:(NSString * _Nonnull)reason;
/// Called when the engine receives a ping message. Only called in socket.io >3.
- (void)engineDidReceivePing;
/// Called when the engine receives a pong message. Only called in socket.io 2.
- (void)engineDidReceivePong;
/// Called when the engine sends a ping to the server. Only called in socket.io 2.
- (void)engineDidSendPing;
/// Called when the engine sends a pong to the server. Only called in socket.io >3.
- (void)engineDidSendPong;
/// Called when the engine has a message that must be parsed.
/// \param msg The message that needs parsing.
///
- (void)parseEngineMessage:(NSString * _Nonnull)msg;
/// Called when the engine receives binary data.
/// \param data The data the engine received.
///
- (void)parseEngineBinaryData:(NSData * _Nonnull)data;
/// Called when when upgrading the http connection to a websocket connection.
/// \param headers The http headers.
///
- (void)engineDidWebsocketUpgradeWithHeaders:(NSDictionary<NSString *, NSString *> * _Nonnull)headers;
@end

/// Represents the type of engine.io packet types.
typedef SWIFT_ENUM(NSInteger, SocketEnginePacketType, open) {
/// Open message.
  SocketEnginePacketTypeOpen = 0,
/// Close message.
  SocketEnginePacketTypeClose = 1,
/// Ping message.
  SocketEnginePacketTypePing = 2,
/// Pong message.
  SocketEnginePacketTypePong = 3,
/// Regular message.
  SocketEnginePacketTypeMessage = 4,
/// Upgrade message.
  SocketEnginePacketTypeUpgrade = 5,
/// NOOP.
  SocketEnginePacketTypeNoop = 6,
};


/// Represents a socket.io-client.
/// Clients are created through a <code>SocketManager</code>, which owns the <code>SocketEngineSpec</code> that controls the connection to the server.
/// For example:
/// \code
/// // Create a socket for the /swift namespace
/// let socket = manager.socket(forNamespace: "/swift")
///
/// // Add some handlers and connect
///
/// \endcode<em>NOTE</em>: The client is not thread/queue safe, all interaction with the socket should be done on the <code>manager.handleQueue</code>
SWIFT_CLASS("_TtC9BestBrain14SocketIOClient")
@interface SocketIOClient : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end

/// Represents state of a manager or client.
typedef SWIFT_ENUM(NSInteger, SocketIOStatus, open) {
/// The client/manager has never been connected. Or the client has been reset.
  SocketIOStatusNotConnected = 0,
/// The client/manager was once connected, but not anymore.
  SocketIOStatusDisconnected = 1,
/// The client/manager is in the process of connecting.
  SocketIOStatusConnecting = 2,
/// The client/manager is currently connected.
  SocketIOStatusConnected = 3,
};

@class NSURL;

/// A manager for a socket.io connection.
/// A <code>SocketManager</code> is responsible for multiplexing multiple namespaces through a single <code>SocketEngineSpec</code>.
/// Example:
/// \code
/// let manager = SocketManager(socketURL: URL(string:"http://localhost:8080/")!)
/// let defaultNamespaceSocket = manager.defaultSocket
/// let swiftSocket = manager.socket(forNamespace: "/swift")
///
/// // defaultNamespaceSocket and swiftSocket both share a single connection to the server
///
/// \endcodeSockets created through the manager are retained by the manager. So at the very least, a single strong reference
/// to the manager must be maintained to keep sockets alive.
/// To disconnect a socket and remove it from the manager, either call <code>SocketIOClient.disconnect()</code> on the socket,
/// or call one of the <code>disconnectSocket</code> methods on this class.
/// <em>NOTE</em>: The manager is not thread/queue safe, all interaction with the manager should be done on the <code>handleQueue</code>
SWIFT_CLASS("_TtC9BestBrain13SocketManager")
@interface SocketManager : NSObject
/// Not so type safe way to create a SocketIOClient, meant for Objective-C compatiblity.
/// If using Swift it’s recommended to use <code>init(socketURL: NSURL, options: Set<SocketIOClientOption>)</code>
/// \param socketURL The url of the socket.io server.
///
/// \param config The config for this socket.
///
- (nonnull instancetype)initWithSocketURL:(NSURL * _Nonnull)socketURL config:(NSDictionary<NSString *, id> * _Nullable)config;
/// Called when the engine closes.
/// \param reason The reason that the engine closed.
///
- (void)engineDidCloseWithReason:(NSString * _Nonnull)reason;
/// Called when the engine errors.
/// \param reason The reason the engine errored.
///
- (void)engineDidErrorWithReason:(NSString * _Nonnull)reason;
/// Called when the engine opens.
/// \param reason The reason the engine opened.
///
- (void)engineDidOpenWithReason:(NSString * _Nonnull)reason;
/// Called when the engine receives a ping message.
- (void)engineDidReceivePing;
/// Called when the sends a ping to the server.
- (void)engineDidSendPing;
/// Called when the engine receives a pong message.
- (void)engineDidReceivePong;
/// Called when the sends a pong to the server.
- (void)engineDidSendPong;
/// Called when when upgrading the http connection to a websocket connection.
/// \param headers The http headers.
///
- (void)engineDidWebsocketUpgradeWithHeaders:(NSDictionary<NSString *, NSString *> * _Nonnull)headers;
/// Called when the engine has a message that must be parsed.
/// \param msg The message that needs parsing.
///
- (void)parseEngineMessage:(NSString * _Nonnull)msg;
/// Called when the engine receives binary data.
/// \param data The data the engine received.
///
- (void)parseEngineBinaryData:(NSData * _Nonnull)data;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Class that gives a backwards compatible way to cause an emit not to recursively check for Data objects.
/// Usage:
/// \code
/// ack.rawEmitView.with(myObject)
///
/// \endcode
SWIFT_CLASS("_TtC9BestBrain16SocketRawAckView")
@interface SocketRawAckView : NSObject
/// Call to ack receiving this event.
/// \param items An array of items to send when acking. Use <code>[]</code> to send nothing.
///
- (void)with:(NSArray * _Nonnull)items;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


/// Class that gives a backwards compatible way to cause an emit not to recursively check for Data objects.
/// Usage:
/// \code
/// socket.rawEmitView.emit("myEvent", myObject)
///
/// \endcode
SWIFT_CLASS("_TtC9BestBrain13SocketRawView")
@interface SocketRawView : NSObject
/// Same as emit, but meant for Objective-C
/// \param event The event to send.
///
/// \param items The items to send with this event. Send an empty array to send no data.
///
- (void)emit:(NSString * _Nonnull)event with:(NSArray * _Nonnull)items;
/// Same as emitWithAck, but for Objective-C
/// <em>NOTE</em>: It is up to the server send an ack back, just calling this method does not mean the server will ack.
/// Check that your server’s api will ack the event being sent.
/// Example:
/// \code
/// socket.emitWithAck("myEvent", with: [1]).timingOut(after: 1) {data in
///     ...
/// }
///
/// \endcode\param event The event to send.
///
/// \param items The items to send with this event. Use <code>[]</code> to send nothing.
///
///
/// returns:
/// An <code>OnAckCallback</code>. You must call the <code>timingOut(after:)</code> method before the event will be sent.
- (OnAckCallback * _Nonnull)emitWithAck:(NSString * _Nonnull)event with:(NSArray * _Nonnull)items SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end








#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
