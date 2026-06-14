#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceJsonWriter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceJsonWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceJsonWriter__Fields_DEFINED)
#include <Modloader/app/structs/JsonWriter__Fields.h>
#if defined(IL2CPP_STRUCT_JsonWriter__Fields_DEFINED)
#define IL2CPP_STRUCT_TraceJsonWriter__Fields_DEFINED
struct JsonWriter;
struct JsonTextWriter;
struct StringWriter;
struct TraceJsonWriter__Fields {
    struct JsonWriter__Fields _;
    struct JsonWriter* _innerWriter;
    struct JsonTextWriter* _textWriter;
    struct StringWriter* _sw;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraceJsonWriter__Fields_FWDDECL)
#define IL2CPP_STRUCT_TraceJsonWriter__Fields_FWDDECL
#include <Modloader/app/structs/JsonTextWriter.h>
#include <Modloader/app/structs/JsonWriter.h>
#include <Modloader/app/structs/StringWriter.h>
#endif
#undef IL2CPP_STRUCT_TraceJsonWriter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceJsonWriter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TraceJsonWriter__Fields_FWDDECL)
#include <Modloader/app/structs/TraceJsonWriter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceJsonWriter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
