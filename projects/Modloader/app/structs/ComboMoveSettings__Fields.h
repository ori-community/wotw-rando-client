#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComboMoveSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComboMoveSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboMoveSettings__Fields_DEFINED)
#include <Modloader/app/structs/ComboMoveOrderCondition__Enum.h>
#if defined(IL2CPP_STRUCT_ComboMoveOrderCondition__Enum_DEFINED)
#define IL2CPP_STRUCT_ComboMoveSettings__Fields_DEFINED
struct List_1_Moon_ComboSystem_InputDirection_;
struct __declspec(align(8)) ComboMoveSettings__Fields {
    ComboMoveOrderCondition__Enum OrderCondition;

    struct List_1_Moon_ComboSystem_InputDirection_* ValidInputDirections;
    int32_t AmountOfUsesPerCombo;
    bool TransitionToAll;
    bool TransitionFromAll;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComboMoveSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_ComboMoveSettings__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_ComboSystem_InputDirection_.h>
#endif
#undef IL2CPP_STRUCT_ComboMoveSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboMoveSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ComboMoveSettings__Fields_FWDDECL)
#include <Modloader/app/structs/ComboMoveSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComboMoveSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
