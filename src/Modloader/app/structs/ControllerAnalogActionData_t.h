#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ControllerAnalogActionData_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ControllerAnalogActionData_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerAnalogActionData_t_DEFINED)
#include <Modloader/app/structs/EControllerSourceMode__Enum.h>
#if defined(IL2CPP_STRUCT_EControllerSourceMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ControllerAnalogActionData_t_DEFINED
struct ControllerAnalogActionData_t {
    EControllerSourceMode__Enum eMode;

    float x;
    float y;
    uint8_t bActive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ControllerAnalogActionData_t_FWDDECL)
#define IL2CPP_STRUCT_ControllerAnalogActionData_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_ControllerAnalogActionData_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_ControllerAnalogActionData_t_DEFINED) && !defined(IL2CPP_STRUCT_ControllerAnalogActionData_t_FWDDECL)
#include <Modloader/app/structs/ControllerAnalogActionData_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ControllerAnalogActionData_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
