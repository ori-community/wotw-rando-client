#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReactionBehaviour_StaggetEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReactionBehaviour_StaggetEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionBehaviour_StaggetEntry__Fields_DEFINED)
#include <Modloader/app/structs/DamageType__Enum.h>
#if defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED)
#define IL2CPP_STRUCT_HitReactionBehaviour_StaggetEntry__Fields_DEFINED
struct StaggerSettings;
struct __declspec(align(8)) HitReactionBehaviour_StaggetEntry__Fields {
    DamageType__Enum DamageType;

    struct StaggerSettings* Settings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReactionBehaviour_StaggetEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_HitReactionBehaviour_StaggetEntry__Fields_FWDDECL
#include <Modloader/app/structs/StaggerSettings.h>
#endif
#undef IL2CPP_STRUCT_HitReactionBehaviour_StaggetEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionBehaviour_StaggetEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HitReactionBehaviour_StaggetEntry__Fields_FWDDECL)
#include <Modloader/app/structs/HitReactionBehaviour_StaggetEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReactionBehaviour_StaggetEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
