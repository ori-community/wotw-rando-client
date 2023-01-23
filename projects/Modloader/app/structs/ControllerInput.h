#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerInput_DEFINED)
#include <Modloader/app/structs/ControllerInput__Fields.h>
#if defined(IL2CPP_STRUCT_ControllerInput__Fields_DEFINED)
#define IL2CPP_STRUCT_ControllerInput_DEFINED
struct ControllerInput__Class;
struct ControllerInput {
    struct ControllerInput__Class* klass;
    MonitorData* monitor;
    struct ControllerInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerInput_FWDDECL)
#define IL2CPP_STRUCT_ControllerInput_FWDDECL
#include <Modloader/app/structs/ControllerInput__Class.h>
#endif
#undef IL2CPP_STRUCT_ControllerInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerInput_DEFINED) && !defined(IL2CPP_STRUCT_ControllerInput_FWDDECL)
#include <Modloader/app/structs/ControllerInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
