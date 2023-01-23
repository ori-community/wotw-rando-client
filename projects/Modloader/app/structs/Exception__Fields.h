#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Exception__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Exception__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Exception__Fields_DEFINED)
#define IL2CPP_STRUCT_Exception__Fields_DEFINED
struct String;
struct IDictionary;
struct Exception;
struct Object;
struct SafeSerializationManager;
struct StackTrace__Array;
struct IntPtr__Array;
struct __declspec(align(8)) Exception__Fields {
    struct String* _className;
    struct String* _message;
    struct IDictionary* _data;
    struct Exception* _innerException;
    struct String* _helpURL;
    struct Object* _stackTrace;
    struct String* _stackTraceString;
    struct String* _remoteStackTraceString;
    int32_t _remoteStackIndex;
    struct Object* _dynamicMethods;
    int32_t _HResult;
    struct String* _source;
    struct SafeSerializationManager* _safeSerializationManager;
    struct StackTrace__Array* captured_traces;
    struct IntPtr__Array* native_trace_ips;
};
#endif
#if !defined(IL2CPP_STRUCT_Exception__Fields_FWDDECL)
#define IL2CPP_STRUCT_Exception__Fields_FWDDECL
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/IntPtr__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SafeSerializationManager.h>
#include <Modloader/app/structs/StackTrace__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Exception__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Exception__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Exception__Fields_FWDDECL)
#include <Modloader/app/structs/Exception__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Exception__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
