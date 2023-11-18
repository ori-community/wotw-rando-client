#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionModifier_Interaction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionModifier_Interaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionModifier_Interaction_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_UberInteractionModifier_Interaction_DEFINED
struct UberInteractionModifier_Interaction {
    struct Vector3 SetPos;
    float m_lastTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionModifier_Interaction_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionModifier_Interaction_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberInteractionModifier_Interaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionModifier_Interaction_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionModifier_Interaction_FWDDECL)
#include <Modloader/app/structs/UberInteractionModifier_Interaction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionModifier_Interaction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
