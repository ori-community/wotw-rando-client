#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerAxisInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerAxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerAxisInput_DEFINED)
#include <Modloader/app/structs/ControllerAxisInput__Fields.h>
#if defined(IL2CPP_STRUCT_ControllerAxisInput__Fields_DEFINED)
#define IL2CPP_STRUCT_ControllerAxisInput_DEFINED
struct ControllerAxisInput__Class;
struct ControllerAxisInput {
    struct ControllerAxisInput__Class* klass;
    MonitorData* monitor;
    struct ControllerAxisInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerAxisInput_FWDDECL)
#define IL2CPP_STRUCT_ControllerAxisInput_FWDDECL
#include <Modloader/app/structs/ControllerAxisInput__Class.h>
#endif
#undef IL2CPP_STRUCT_ControllerAxisInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerAxisInput_DEFINED) && !defined(IL2CPP_STRUCT_ControllerAxisInput_FWDDECL)
#include <Modloader/app/structs/ControllerAxisInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerAxisInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
