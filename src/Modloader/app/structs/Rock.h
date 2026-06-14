#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Rock_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Rock_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rock_DEFINED)
#include <Modloader/app/structs/Rock__Fields.h>
#if defined(IL2CPP_STRUCT_Rock__Fields_DEFINED)
#define IL2CPP_STRUCT_Rock_DEFINED
struct Rock__Class;
struct Rock {
    struct Rock__Class* klass;
    MonitorData* monitor;
    struct Rock__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Rock_FWDDECL)
#define IL2CPP_STRUCT_Rock_FWDDECL
#include <Modloader/app/structs/Rock__Class.h>
#endif
#undef IL2CPP_STRUCT_Rock_INITIALIZING
#if !defined(IL2CPP_STRUCT_Rock_DEFINED) && !defined(IL2CPP_STRUCT_Rock_FWDDECL)
#include <Modloader/app/structs/Rock.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Rock.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
