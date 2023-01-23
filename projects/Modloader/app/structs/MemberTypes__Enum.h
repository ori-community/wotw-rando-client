#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MemberTypes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MemberTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberTypes__Enum_DEFINED)
#define IL2CPP_STRUCT_MemberTypes__Enum_DEFINED
enum class MemberTypes__Enum : int32_t {
    Constructor = 0x00000001,
    Event = 0x00000002,
    Field = 0x00000004,
    Method = 0x00000008,
    Property = 0x00000010,
    TypeInfo = 0x00000020,
    Custom = 0x00000040,
    NestedType = 0x00000080,
    All = 0x000000bf,
};
#endif
#if !defined(IL2CPP_STRUCT_MemberTypes__Enum_FWDDECL)
#define IL2CPP_STRUCT_MemberTypes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MemberTypes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MemberTypes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MemberTypes__Enum_FWDDECL)
#include <Modloader/app/structs/MemberTypes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MemberTypes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
