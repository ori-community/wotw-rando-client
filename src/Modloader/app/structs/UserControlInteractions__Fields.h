#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserControlInteractions__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserControlInteractions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserControlInteractions__Fields_DEFINED)
#include <Modloader/app/structs/UserControlThirdPerson__Fields.h>
#if defined(IL2CPP_STRUCT_UserControlThirdPerson__Fields_DEFINED)
#define IL2CPP_STRUCT_UserControlInteractions__Fields_DEFINED
struct CharacterThirdPerson;
struct InteractionSystem;
struct UserControlInteractions__Fields {
    struct UserControlThirdPerson__Fields _;
    struct CharacterThirdPerson* character;
    struct InteractionSystem* interactionSystem;
    bool disableInputInInteraction;
    float enableInputAtProgress;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserControlInteractions__Fields_FWDDECL)
#define IL2CPP_STRUCT_UserControlInteractions__Fields_FWDDECL
#include <Modloader/app/structs/CharacterThirdPerson.h>
#include <Modloader/app/structs/InteractionSystem.h>
#endif
#undef IL2CPP_STRUCT_UserControlInteractions__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserControlInteractions__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UserControlInteractions__Fields_FWDDECL)
#include <Modloader/app/structs/UserControlInteractions__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserControlInteractions__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
