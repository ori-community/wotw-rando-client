#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeverPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeverPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverPuppet__Fields_DEFINED)
#include <Modloader/app/structs/RecordableObjectPuppet__Fields.h>
#if defined(IL2CPP_STRUCT_RecordableObjectPuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_LeverPuppet__Fields_DEFINED
struct LegacyAnimator__Array;
struct Varying2DSoundProvider;
struct Transform;
struct LeverPuppet__Fields {
    struct RecordableObjectPuppet__Fields _;
    struct LegacyAnimator__Array* HighlightAnimators;
    struct Varying2DSoundProvider* LeftSound;
    struct Varying2DSoundProvider* MiddleSound;
    struct Varying2DSoundProvider* RightSound;
    struct Transform* RotatingHandle;
    float LeverGroundOffset;
    float SeinGroundOffset;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeverPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_LeverPuppet__Fields_FWDDECL
#include <Modloader/app/structs/LegacyAnimator__Array.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Varying2DSoundProvider.h>
#endif
#undef IL2CPP_STRUCT_LeverPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeverPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LeverPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/LeverPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeverPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
