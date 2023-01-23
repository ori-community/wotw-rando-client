#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonVector2_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonVector2_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonVector2_DEFINED)
#include <Modloader/app/structs/MoonVector2__Fields.h>
#if defined(IL2CPP_STRUCT_MoonVector2__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonVector2_DEFINED
struct MoonVector2__Class;
struct MoonVector2 {
    struct MoonVector2__Class* klass;
    MonitorData* monitor;
    struct MoonVector2__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonVector2_FWDDECL)
#define IL2CPP_STRUCT_MoonVector2_FWDDECL
#include <Modloader/app/structs/MoonVector2__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonVector2_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonVector2_DEFINED) && !defined(IL2CPP_STRUCT_MoonVector2_FWDDECL)
#include <Modloader/app/structs/MoonVector2.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonVector2.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
