#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonQuaternion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonQuaternion_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonQuaternion_DEFINED)
#include <Modloader/app/structs/MoonQuaternion__Fields.h>
#if defined(IL2CPP_STRUCT_MoonQuaternion__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonQuaternion_DEFINED
struct MoonQuaternion__Class;
struct MoonQuaternion {
    struct MoonQuaternion__Class* klass;
    MonitorData* monitor;
    struct MoonQuaternion__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonQuaternion_FWDDECL)
#define IL2CPP_STRUCT_MoonQuaternion_FWDDECL
#include <Modloader/app/structs/MoonQuaternion__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonQuaternion_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonQuaternion_DEFINED) && !defined(IL2CPP_STRUCT_MoonQuaternion_FWDDECL)
#include <Modloader/app/structs/MoonQuaternion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonQuaternion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
