#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxControllerInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxControllerInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerInput_DEFINED)
#define IL2CPP_STRUCT_XboxControllerInput_DEFINED
struct XboxControllerInput__Class;
struct XboxControllerInput {
    struct XboxControllerInput__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxControllerInput_FWDDECL)
#define IL2CPP_STRUCT_XboxControllerInput_FWDDECL
#include <Modloader/app/structs/XboxControllerInput__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxControllerInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxControllerInput_DEFINED) && !defined(IL2CPP_STRUCT_XboxControllerInput_FWDDECL)
#include <Modloader/app/structs/XboxControllerInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxControllerInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
