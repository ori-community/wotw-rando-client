#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinAnimationSpeedSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinAnimationSpeedSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAnimationSpeedSettings_DEFINED)
#include <Modloader/app/structs/SeinAnimationSpeedSettings__Fields.h>
#if defined(IL2CPP_STRUCT_SeinAnimationSpeedSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinAnimationSpeedSettings_DEFINED
struct SeinAnimationSpeedSettings__Class;
struct SeinAnimationSpeedSettings {
    struct SeinAnimationSpeedSettings__Class* klass;
    MonitorData* monitor;
    struct SeinAnimationSpeedSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinAnimationSpeedSettings_FWDDECL)
#define IL2CPP_STRUCT_SeinAnimationSpeedSettings_FWDDECL
#include <Modloader/app/structs/SeinAnimationSpeedSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinAnimationSpeedSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinAnimationSpeedSettings_DEFINED) && !defined(IL2CPP_STRUCT_SeinAnimationSpeedSettings_FWDDECL)
#include <Modloader/app/structs/SeinAnimationSpeedSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinAnimationSpeedSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
