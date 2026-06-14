#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComboMoveStressTest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComboMoveStressTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboMoveStressTest__Fields_DEFINED)
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#if defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_ComboMoveStressTest__Fields_DEFINED
struct IComboMove;
struct __declspec(align(8)) ComboMoveStressTest__Fields {
    struct IComboMove* _ComboMove_k__BackingField;
    float m_timer;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ComboMoveStressTest__Fields_FWDDECL)
#define IL2CPP_STRUCT_ComboMoveStressTest__Fields_FWDDECL
#include <Modloader/app/structs/IComboMove.h>
#endif
#undef IL2CPP_STRUCT_ComboMoveStressTest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComboMoveStressTest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ComboMoveStressTest__Fields_FWDDECL)
#include <Modloader/app/structs/ComboMoveStressTest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComboMoveStressTest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
