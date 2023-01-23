#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSettings__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveSettings__Fields_DEFINED
struct __declspec(align(8)) MeleeComboMoveSettings__Fields {
    struct Vector2 RootMotionMultiplier;
    float DownwardRootMotionMultiplier;
    bool DisableRootMotion;
    float Cooldown;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveSettings__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
