#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindowsIdentity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindowsIdentity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsIdentity__Fields_DEFINED)
#include <Modloader/app/structs/ClaimsIdentity__Fields.h>
#include <Modloader/app/structs/WindowsAccountType__Enum.h>
#if defined(IL2CPP_STRUCT_ClaimsIdentity__Fields_DEFINED) && defined(IL2CPP_STRUCT_WindowsAccountType__Enum_DEFINED)
#define IL2CPP_STRUCT_WindowsIdentity__Fields_DEFINED
struct String;
struct SerializationInfo;
struct WindowsIdentity__Fields {
    struct ClaimsIdentity__Fields _;
    void* _token;
    struct String* _type;
    WindowsAccountType__Enum _account;

    bool _authenticated;
    struct String* _name;
    struct SerializationInfo* _info;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindowsIdentity__Fields_FWDDECL)
#define IL2CPP_STRUCT_WindowsIdentity__Fields_FWDDECL
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_WindowsIdentity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsIdentity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WindowsIdentity__Fields_FWDDECL)
#include <Modloader/app/structs/WindowsIdentity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindowsIdentity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
