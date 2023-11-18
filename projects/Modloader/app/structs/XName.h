#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XName_INITIALIZING
#if !defined(IL2CPP_STRUCT_XName_DEFINED)
#include <Modloader/app/structs/XName__Fields.h>
#if defined(IL2CPP_STRUCT_XName__Fields_DEFINED)
#define IL2CPP_STRUCT_XName_DEFINED
struct XName__Class;
struct XName {
    struct XName__Class* klass;
    MonitorData* monitor;
    struct XName__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XName_FWDDECL)
#define IL2CPP_STRUCT_XName_FWDDECL
#include <Modloader/app/structs/XName__Class.h>
#endif
#undef IL2CPP_STRUCT_XName_INITIALIZING
#if !defined(IL2CPP_STRUCT_XName_DEFINED) && !defined(IL2CPP_STRUCT_XName_FWDDECL)
#include <Modloader/app/structs/XName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
