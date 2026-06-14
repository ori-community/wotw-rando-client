#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterApplyFrictionToSpeed__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterApplyFrictionToSpeed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterApplyFrictionToSpeed__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CharacterApplyFrictionToSpeed__Fields_DEFINED
struct PlatformBehaviour;
struct CharacterApplyFrictionToSpeed__Fields {
    struct CharacterState__Fields _;
    struct PlatformBehaviour* PlatformBehaviour;
    float SpeedFactor;
    struct Vector3 SpeedToSlowDown;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterApplyFrictionToSpeed__Fields_FWDDECL)
#define IL2CPP_STRUCT_CharacterApplyFrictionToSpeed__Fields_FWDDECL
#include <Modloader/app/structs/PlatformBehaviour.h>
#endif
#undef IL2CPP_STRUCT_CharacterApplyFrictionToSpeed__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterApplyFrictionToSpeed__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CharacterApplyFrictionToSpeed__Fields_FWDDECL)
#include <Modloader/app/structs/CharacterApplyFrictionToSpeed__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterApplyFrictionToSpeed__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
