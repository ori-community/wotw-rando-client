#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformAnimatorSystem_PositionModification_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformAnimatorSystem_PositionModification_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAnimatorSystem_PositionModification_DEFINED)
#include <Modloader/app/structs/Space__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Space__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TransformAnimatorSystem_PositionModification_DEFINED
struct TransformAnimatorSystem_PositionModification {
    Space__Enum Space;

    struct Vector3 LocalValue;
    struct Vector3 WorldValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformAnimatorSystem_PositionModification_FWDDECL)
#define IL2CPP_STRUCT_TransformAnimatorSystem_PositionModification_FWDDECL
#endif
#undef IL2CPP_STRUCT_TransformAnimatorSystem_PositionModification_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformAnimatorSystem_PositionModification_DEFINED) && !defined(IL2CPP_STRUCT_TransformAnimatorSystem_PositionModification_FWDDECL)
#include <Modloader/app/structs/TransformAnimatorSystem_PositionModification.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformAnimatorSystem_PositionModification.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
