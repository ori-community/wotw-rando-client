#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArgInfoType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArgInfoType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgInfoType__Enum_DEFINED)
#define IL2CPP_STRUCT_ArgInfoType__Enum_DEFINED
enum class ArgInfoType__Enum : uint8_t {
    In = 0x00,
    Out = 0x01,
};
#endif
#if !defined(IL2CPP_STRUCT_ArgInfoType__Enum_FWDDECL)
#define IL2CPP_STRUCT_ArgInfoType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ArgInfoType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArgInfoType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ArgInfoType__Enum_FWDDECL)
#include <Modloader/app/structs/ArgInfoType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArgInfoType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
