#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroupRole__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroupRole__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRole__Fields_DEFINED)
#define IL2CPP_STRUCT_GroupRole__Fields_DEFINED
struct String;
struct __declspec(align(8)) GroupRole__Fields {
    struct String* RoleId;
    struct String* RoleName;
};
#endif
#if !defined(IL2CPP_STRUCT_GroupRole__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroupRole__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GroupRole__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroupRole__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroupRole__Fields_FWDDECL)
#include <Modloader/app/structs/GroupRole__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroupRole__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
