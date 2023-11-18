#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HeaderParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HeaderParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderParser_DEFINED)
#include <Modloader/app/structs/HeaderParser__Fields.h>
#if defined(IL2CPP_STRUCT_HeaderParser__Fields_DEFINED)
#define IL2CPP_STRUCT_HeaderParser_DEFINED
struct HeaderParser__Class;
struct HeaderParser {
    struct HeaderParser__Class* klass;
    MonitorData* monitor;
    struct HeaderParser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HeaderParser_FWDDECL)
#define IL2CPP_STRUCT_HeaderParser_FWDDECL
#include <Modloader/app/structs/HeaderParser__Class.h>
#endif
#undef IL2CPP_STRUCT_HeaderParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderParser_DEFINED) && !defined(IL2CPP_STRUCT_HeaderParser_FWDDECL)
#include <Modloader/app/structs/HeaderParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HeaderParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
