#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaseState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaseState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaseState__Enum_DEFINED)
#define IL2CPP_STRUCT_LeaseState__Enum_DEFINED
enum class LeaseState__Enum : int32_t {
    Null = 0x00000000,
    Initial = 0x00000001,
    Active = 0x00000002,
    Renewing = 0x00000003,
    Expired = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_LeaseState__Enum_FWDDECL)
#define IL2CPP_STRUCT_LeaseState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_LeaseState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaseState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_LeaseState__Enum_FWDDECL)
#include <Modloader/app/structs/LeaseState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaseState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
