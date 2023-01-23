#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionTrigger_CharacterPosition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionTrigger_CharacterPosition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTrigger_CharacterPosition__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_InteractionTrigger_CharacterPosition__Fields_DEFINED
struct __declspec(align(8)) InteractionTrigger_CharacterPosition__Fields {
    bool use;
    struct Vector2 offset;
    float angleOffset;
    float maxAngle;
    float radius;
    bool orbit;
    bool fixYAxis;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionTrigger_CharacterPosition__Fields_FWDDECL)
#define IL2CPP_STRUCT_InteractionTrigger_CharacterPosition__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_InteractionTrigger_CharacterPosition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTrigger_CharacterPosition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InteractionTrigger_CharacterPosition__Fields_FWDDECL)
#include <Modloader/app/structs/InteractionTrigger_CharacterPosition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionTrigger_CharacterPosition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
