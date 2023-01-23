#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonVector3_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonVector3_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonVector3_DEFINED)
#include <Modloader/app/structs/MoonVector3__Fields.h>
#if defined(IL2CPP_STRUCT_MoonVector3__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonVector3_DEFINED
struct MoonVector3__Class;
struct MoonVector3 {
    struct MoonVector3__Class* klass;
    MonitorData* monitor;
    struct MoonVector3__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonVector3_FWDDECL)
#define IL2CPP_STRUCT_MoonVector3_FWDDECL
#include <Modloader/app/structs/MoonVector3__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonVector3_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonVector3_DEFINED) && !defined(IL2CPP_STRUCT_MoonVector3_FWDDECL)
#include <Modloader/app/structs/MoonVector3.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonVector3.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
