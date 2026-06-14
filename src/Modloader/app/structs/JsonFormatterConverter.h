#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonFormatterConverter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonFormatterConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonFormatterConverter_DEFINED)
#include <Modloader/app/structs/JsonFormatterConverter__Fields.h>
#if defined(IL2CPP_STRUCT_JsonFormatterConverter__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonFormatterConverter_DEFINED
struct JsonFormatterConverter__Class;
struct JsonFormatterConverter {
    struct JsonFormatterConverter__Class* klass;
    MonitorData* monitor;
    struct JsonFormatterConverter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonFormatterConverter_FWDDECL)
#define IL2CPP_STRUCT_JsonFormatterConverter_FWDDECL
#include <Modloader/app/structs/JsonFormatterConverter__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonFormatterConverter_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonFormatterConverter_DEFINED) && !defined(IL2CPP_STRUCT_JsonFormatterConverter_FWDDECL)
#include <Modloader/app/structs/JsonFormatterConverter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonFormatterConverter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
