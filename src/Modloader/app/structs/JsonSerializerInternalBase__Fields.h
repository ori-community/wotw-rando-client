#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializerInternalBase__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializerInternalBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalBase__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonSerializerInternalBase__Fields_DEFINED
struct ErrorContext;
struct BidirectionalDictionary_2_System_String_System_Object_;
struct JsonSerializer;
struct ITraceWriter;
struct JsonSerializerProxy;
struct __declspec(align(8)) JsonSerializerInternalBase__Fields {
    struct ErrorContext* _currentErrorContext;
    struct BidirectionalDictionary_2_System_String_System_Object_* _mappings;
    struct JsonSerializer* Serializer;
    struct ITraceWriter* TraceWriter;
    struct JsonSerializerProxy* InternalSerializer;
};
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalBase__Fields_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializerInternalBase__Fields_FWDDECL
#include <Modloader/app/structs/BidirectionalDictionary_2_System_String_System_Object_.h>
#include <Modloader/app/structs/ErrorContext.h>
#include <Modloader/app/structs/ITraceWriter.h>
#include <Modloader/app/structs/JsonSerializer.h>
#include <Modloader/app/structs/JsonSerializerProxy.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializerInternalBase__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerInternalBase__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializerInternalBase__Fields_FWDDECL)
#include <Modloader/app/structs/JsonSerializerInternalBase__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializerInternalBase__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
