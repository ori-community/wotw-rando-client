#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UserControlThirdPerson_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UserControlThirdPerson_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserControlThirdPerson_DEFINED)
#include <Modloader/app/structs/UserControlThirdPerson__Fields.h>
#if defined(IL2CPP_STRUCT_UserControlThirdPerson__Fields_DEFINED)
#define IL2CPP_STRUCT_UserControlThirdPerson_DEFINED
struct UserControlThirdPerson__Class;
struct UserControlThirdPerson {
    struct UserControlThirdPerson__Class* klass;
    MonitorData* monitor;
    struct UserControlThirdPerson__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UserControlThirdPerson_FWDDECL)
#define IL2CPP_STRUCT_UserControlThirdPerson_FWDDECL
#include <Modloader/app/structs/UserControlThirdPerson__Class.h>
#endif
#undef IL2CPP_STRUCT_UserControlThirdPerson_INITIALIZING
#if !defined(IL2CPP_STRUCT_UserControlThirdPerson_DEFINED) && !defined(IL2CPP_STRUCT_UserControlThirdPerson_FWDDECL)
#include <Modloader/app/structs/UserControlThirdPerson.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UserControlThirdPerson.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
