#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Spring_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Spring_INITIALIZING
#if !defined(IL2CPP_STRUCT_Spring_DEFINED)
#include <Modloader/app/structs/Spring__Fields.h>
#if defined(IL2CPP_STRUCT_Spring__Fields_DEFINED)
#define IL2CPP_STRUCT_Spring_DEFINED
struct Spring__Class;
struct Spring {
    struct Spring__Class* klass;
    MonitorData* monitor;
    struct Spring__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Spring_FWDDECL)
#define IL2CPP_STRUCT_Spring_FWDDECL
#include <Modloader/app/structs/Spring__Class.h>
#endif
#undef IL2CPP_STRUCT_Spring_INITIALIZING
#if !defined(IL2CPP_STRUCT_Spring_DEFINED) && !defined(IL2CPP_STRUCT_Spring_FWDDECL)
#include <Modloader/app/structs/Spring.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Spring.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
