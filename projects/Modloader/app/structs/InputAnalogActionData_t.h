#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InputAnalogActionData_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InputAnalogActionData_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputAnalogActionData_t_DEFINED)
#include <Modloader/app/structs/EInputSourceMode__Enum.h>
#if defined(IL2CPP_STRUCT_EInputSourceMode__Enum_DEFINED)
#define IL2CPP_STRUCT_InputAnalogActionData_t_DEFINED
struct InputAnalogActionData_t {
    EInputSourceMode__Enum eMode;

    float x;
    float y;
    uint8_t bActive;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InputAnalogActionData_t_FWDDECL)
#define IL2CPP_STRUCT_InputAnalogActionData_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_InputAnalogActionData_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_InputAnalogActionData_t_DEFINED) && !defined(IL2CPP_STRUCT_InputAnalogActionData_t_FWDDECL)
#include <Modloader/app/structs/InputAnalogActionData_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InputAnalogActionData_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
