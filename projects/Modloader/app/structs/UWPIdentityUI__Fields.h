#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UWPIdentityUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UWPIdentityUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UWPIdentityUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UWPIdentityUI__Fields_DEFINED
struct MessageBox;
struct GameObject;
struct String;
struct UWPIdentityUI__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageBox* Username;
    struct GameObject* Group;
    struct String* m_username;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UWPIdentityUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_UWPIdentityUI__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_UWPIdentityUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UWPIdentityUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UWPIdentityUI__Fields_FWDDECL)
#include <Modloader/app/structs/UWPIdentityUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UWPIdentityUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
