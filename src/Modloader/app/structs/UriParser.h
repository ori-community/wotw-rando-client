#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UriParser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UriParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriParser_DEFINED)
#include <Modloader/app/structs/UriParser__Fields.h>
#if defined(IL2CPP_STRUCT_UriParser__Fields_DEFINED)
#define IL2CPP_STRUCT_UriParser_DEFINED
struct UriParser__Class;
struct UriParser {
    struct UriParser__Class* klass;
    MonitorData* monitor;
    struct UriParser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UriParser_FWDDECL)
#define IL2CPP_STRUCT_UriParser_FWDDECL
#include <Modloader/app/structs/UriParser__Class.h>
#endif
#undef IL2CPP_STRUCT_UriParser_INITIALIZING
#if !defined(IL2CPP_STRUCT_UriParser_DEFINED) && !defined(IL2CPP_STRUCT_UriParser_FWDDECL)
#include <Modloader/app/structs/UriParser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UriParser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
