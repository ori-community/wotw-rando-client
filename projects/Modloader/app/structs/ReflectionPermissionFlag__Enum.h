#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReflectionPermissionFlag__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReflectionPermissionFlag__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionPermissionFlag__Enum_DEFINED)
#define IL2CPP_STRUCT_ReflectionPermissionFlag__Enum_DEFINED
enum class ReflectionPermissionFlag__Enum : int32_t {
    NoFlags = 0x00000000,
    TypeInformation = 0x00000001,
    MemberAccess = 0x00000002,
    ReflectionEmit = 0x00000004,
    AllFlags = 0x00000007,
    RestrictedMemberAccess = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_ReflectionPermissionFlag__Enum_FWDDECL)
#define IL2CPP_STRUCT_ReflectionPermissionFlag__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ReflectionPermissionFlag__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReflectionPermissionFlag__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ReflectionPermissionFlag__Enum_FWDDECL)
#include <Modloader/app/structs/ReflectionPermissionFlag__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReflectionPermissionFlag__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
