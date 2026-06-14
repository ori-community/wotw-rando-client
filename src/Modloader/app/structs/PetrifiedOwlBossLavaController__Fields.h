#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossLavaController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossLavaController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossLavaController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/PetrifiedOwlBossLavaController_LaveDesiredState__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_PetrifiedOwlBossLavaController_LaveDesiredState__Enum_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossLavaController__Fields_DEFINED
struct Transform;
struct PetrifiedOwlBossLavaController__Fields {
    struct MonoBehaviour__Fields _;
    bool TEST_BUTTON;
    struct Transform* Visuals;
    struct Vector3 UpOffset;
    float LerpTime;
    PetrifiedOwlBossLavaController_LaveDesiredState__Enum m_desiredState;

    struct Vector3 m_visualsMoveCurrentVelocity;
    struct Vector3 m_initialLocalPos;
    float m_upRemainingTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossLavaController__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossLavaController__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossLavaController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossLavaController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossLavaController__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossLavaController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossLavaController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
