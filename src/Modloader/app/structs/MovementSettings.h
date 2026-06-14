#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovementSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovementSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovementSettings_DEFINED)
#include <Modloader/app/structs/MovementSettings__Fields.h>
#if defined(IL2CPP_STRUCT_MovementSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MovementSettings_DEFINED
struct MovementSettings__Class;
struct MovementSettings {
    struct MovementSettings__Class* klass;
    MonitorData* monitor;
    struct MovementSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovementSettings_FWDDECL)
#define IL2CPP_STRUCT_MovementSettings_FWDDECL
#include <Modloader/app/structs/MovementSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_MovementSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovementSettings_DEFINED) && !defined(IL2CPP_STRUCT_MovementSettings_FWDDECL)
#include <Modloader/app/structs/MovementSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovementSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
