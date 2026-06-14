#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserControlThirdPerson_State_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserControlThirdPerson_State_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserControlThirdPerson_State_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_UserControlThirdPerson_State_DEFINED
struct UserControlThirdPerson_State {
    struct Vector3 move;
    struct Vector3 lookPos;
    bool crouch;
    bool jump;
    int32_t actionIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserControlThirdPerson_State_FWDDECL)
#define IL2CPP_STRUCT_UserControlThirdPerson_State_FWDDECL
#endif
#undef IL2CPP_STRUCT_UserControlThirdPerson_State_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserControlThirdPerson_State_DEFINED) && !defined(IL2CPP_STRUCT_UserControlThirdPerson_State_FWDDECL)
#include <Modloader/app/structs/UserControlThirdPerson_State.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserControlThirdPerson_State.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
