#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonMatrix4x4_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonMatrix4x4_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonMatrix4x4_DEFINED)
#include <Modloader/app/structs/MoonMatrix4x4__Fields.h>
#if defined(IL2CPP_STRUCT_MoonMatrix4x4__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonMatrix4x4_DEFINED
struct MoonMatrix4x4__Class;
struct MoonMatrix4x4 {
    struct MoonMatrix4x4__Class* klass;
    MonitorData* monitor;
    struct MoonMatrix4x4__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonMatrix4x4_FWDDECL)
#define IL2CPP_STRUCT_MoonMatrix4x4_FWDDECL
#include <Modloader/app/structs/MoonMatrix4x4__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonMatrix4x4_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonMatrix4x4_DEFINED) && !defined(IL2CPP_STRUCT_MoonMatrix4x4_FWDDECL)
#include <Modloader/app/structs/MoonMatrix4x4.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonMatrix4x4.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
