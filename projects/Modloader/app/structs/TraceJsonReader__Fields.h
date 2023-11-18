#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TraceJsonReader__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TraceJsonReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceJsonReader__Fields_DEFINED)
#include <Modloader/app/structs/JsonReader__Fields.h>
#if defined(IL2CPP_STRUCT_JsonReader__Fields_DEFINED)
#define IL2CPP_STRUCT_TraceJsonReader__Fields_DEFINED
struct JsonReader;
struct JsonTextWriter;
struct StringWriter;
struct TraceJsonReader__Fields {
    struct JsonReader__Fields _;
    struct JsonReader* _innerReader;
    struct JsonTextWriter* _textWriter;
    struct StringWriter* _sw;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TraceJsonReader__Fields_FWDDECL)
#define IL2CPP_STRUCT_TraceJsonReader__Fields_FWDDECL
#include <Modloader/app/structs/JsonReader.h>
#include <Modloader/app/structs/JsonTextWriter.h>
#include <Modloader/app/structs/StringWriter.h>
#endif
#undef IL2CPP_STRUCT_TraceJsonReader__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TraceJsonReader__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TraceJsonReader__Fields_FWDDECL)
#include <Modloader/app/structs/TraceJsonReader__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TraceJsonReader__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
