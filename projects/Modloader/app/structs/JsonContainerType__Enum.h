#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonContainerType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonContainerType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContainerType__Enum_DEFINED)
#define IL2CPP_STRUCT_JsonContainerType__Enum_DEFINED
enum class JsonContainerType__Enum : int32_t {
    None = 0x00000000,
    Object = 0x00000001,
    Array = 0x00000002,
    Constructor = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_JsonContainerType__Enum_FWDDECL)
#define IL2CPP_STRUCT_JsonContainerType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_JsonContainerType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContainerType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_JsonContainerType__Enum_FWDDECL)
#include <Modloader/app/structs/JsonContainerType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonContainerType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
