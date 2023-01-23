#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BindingFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BindingFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_BindingFlags__Enum_DEFINED
enum class BindingFlags__Enum : int32_t {
    Default = 0x00000000,
    IgnoreCase = 0x00000001,
    DeclaredOnly = 0x00000002,
    Instance = 0x00000004,
    Static = 0x00000008,
    Public = 0x00000010,
    NonPublic = 0x00000020,
    FlattenHierarchy = 0x00000040,
    InvokeMethod = 0x00000100,
    CreateInstance = 0x00000200,
    GetField = 0x00000400,
    SetField = 0x00000800,
    GetProperty = 0x00001000,
    SetProperty = 0x00002000,
    PutDispProperty = 0x00004000,
    PutRefDispProperty = 0x00008000,
    ExactBinding = 0x00010000,
    SuppressChangeType = 0x00020000,
    OptionalParamBinding = 0x00040000,
    IgnoreReturn = 0x01000000,
};
#endif
#if !defined(IL2CPP_STRUCT_BindingFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_BindingFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BindingFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BindingFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BindingFlags__Enum_FWDDECL)
#include <Modloader/app/structs/BindingFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BindingFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
