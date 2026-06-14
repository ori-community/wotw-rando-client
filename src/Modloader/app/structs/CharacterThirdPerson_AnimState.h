#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CharacterThirdPerson_AnimState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CharacterThirdPerson_AnimState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterThirdPerson_AnimState_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CharacterThirdPerson_AnimState_DEFINED
struct CharacterThirdPerson_AnimState {
    struct Vector3 moveDirection;
    bool jump;
    bool crouch;
    bool onGround;
    bool isStrafing;
    float yVelocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CharacterThirdPerson_AnimState_FWDDECL)
#define IL2CPP_STRUCT_CharacterThirdPerson_AnimState_FWDDECL
#endif
#undef IL2CPP_STRUCT_CharacterThirdPerson_AnimState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CharacterThirdPerson_AnimState_DEFINED) && !defined(IL2CPP_STRUCT_CharacterThirdPerson_AnimState_FWDDECL)
#include <Modloader/app/structs/CharacterThirdPerson_AnimState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CharacterThirdPerson_AnimState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
