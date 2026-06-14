#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrogChaseBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrogChaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogChaseBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/GroundChaseBehaviourNew__Fields.h>
#if defined(IL2CPP_STRUCT_GroundChaseBehaviourNew__Fields_DEFINED)
#define IL2CPP_STRUCT_FrogChaseBehaviour__Fields_DEFINED
struct FrogEntity;
struct FrogChaseBehaviour__Fields {
    struct GroundChaseBehaviourNew__Fields _;
    float MinDistanceToOtherFrog;
    struct FrogEntity* m_frogEntity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrogChaseBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrogChaseBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/FrogEntity.h>
#endif
#undef IL2CPP_STRUCT_FrogChaseBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogChaseBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrogChaseBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/FrogChaseBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrogChaseBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
