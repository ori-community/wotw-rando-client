#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadTeaser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadTeaser_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadTeaser_DEFINED)
#include <Modloader/app/structs/LoadTeaser__Fields.h>
#if defined(IL2CPP_STRUCT_LoadTeaser__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadTeaser_DEFINED
struct LoadTeaser__Class;
struct LoadTeaser {
    struct LoadTeaser__Class* klass;
    MonitorData* monitor;
    struct LoadTeaser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadTeaser_FWDDECL)
#define IL2CPP_STRUCT_LoadTeaser_FWDDECL
#include <Modloader/app/structs/LoadTeaser__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadTeaser_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadTeaser_DEFINED) && !defined(IL2CPP_STRUCT_LoadTeaser_FWDDECL)
#include <Modloader/app/structs/LoadTeaser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadTeaser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
