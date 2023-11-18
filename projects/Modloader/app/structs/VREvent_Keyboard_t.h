#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VREvent_Keyboard_t_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VREvent_Keyboard_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VREvent_Keyboard_t_DEFINED)
#define IL2CPP_STRUCT_VREvent_Keyboard_t_DEFINED
struct VREvent_Keyboard_t {
    uint8_t cNewInput0;
    uint8_t cNewInput1;
    uint8_t cNewInput2;
    uint8_t cNewInput3;
    uint8_t cNewInput4;
    uint8_t cNewInput5;
    uint8_t cNewInput6;
    uint8_t cNewInput7;
    uint64_t uUserValue;
};
#endif
#if !defined(IL2CPP_STRUCT_VREvent_Keyboard_t_FWDDECL)
#define IL2CPP_STRUCT_VREvent_Keyboard_t_FWDDECL
#endif
#undef IL2CPP_STRUCT_VREvent_Keyboard_t_INITIALIZING
#if !defined(IL2CPP_STRUCT_VREvent_Keyboard_t_DEFINED) && !defined(IL2CPP_STRUCT_VREvent_Keyboard_t_FWDDECL)
#include <Modloader/app/structs/VREvent_Keyboard_t.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VREvent_Keyboard_t.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
