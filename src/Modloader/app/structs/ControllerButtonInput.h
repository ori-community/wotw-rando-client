#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerButtonInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerButtonInput_DEFINED)
#include <Modloader/app/structs/ControllerButtonInput__Fields.h>
#if defined(IL2CPP_STRUCT_ControllerButtonInput__Fields_DEFINED)
#define IL2CPP_STRUCT_ControllerButtonInput_DEFINED
struct ControllerButtonInput__Class;
struct ControllerButtonInput {
    struct ControllerButtonInput__Class* klass;
    MonitorData* monitor;
    struct ControllerButtonInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerButtonInput_FWDDECL)
#define IL2CPP_STRUCT_ControllerButtonInput_FWDDECL
#include <Modloader/app/structs/ControllerButtonInput__Class.h>
#endif
#undef IL2CPP_STRUCT_ControllerButtonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerButtonInput_DEFINED) && !defined(IL2CPP_STRUCT_ControllerButtonInput_FWDDECL)
#include <Modloader/app/structs/ControllerButtonInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerButtonInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
