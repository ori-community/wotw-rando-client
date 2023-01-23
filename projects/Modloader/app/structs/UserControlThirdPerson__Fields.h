#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserControlThirdPerson__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserControlThirdPerson__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserControlThirdPerson__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/UserControlThirdPerson_State.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_UserControlThirdPerson_State_DEFINED)
#define IL2CPP_STRUCT_UserControlThirdPerson__Fields_DEFINED
struct Transform;
struct UserControlThirdPerson__Fields {
    struct MonoBehaviour__Fields _;
    bool walkByDefault;
    bool canCrouch;
    bool canJump;
    struct UserControlThirdPerson_State state;
    struct Transform* cam;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserControlThirdPerson__Fields_FWDDECL)
#define IL2CPP_STRUCT_UserControlThirdPerson__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_UserControlThirdPerson__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserControlThirdPerson__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UserControlThirdPerson__Fields_FWDDECL)
#include <Modloader/app/structs/UserControlThirdPerson__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserControlThirdPerson__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
