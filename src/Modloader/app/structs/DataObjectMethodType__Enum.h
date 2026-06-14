#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataObjectMethodType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataObjectMethodType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectMethodType__Enum_DEFINED)
#define IL2CPP_STRUCT_DataObjectMethodType__Enum_DEFINED
enum class DataObjectMethodType__Enum : int32_t {
    Fill = 0x00000000,
    Select = 0x00000001,
    Update = 0x00000002,
    Insert = 0x00000003,
    Delete = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_DataObjectMethodType__Enum_FWDDECL)
#define IL2CPP_STRUCT_DataObjectMethodType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DataObjectMethodType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataObjectMethodType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DataObjectMethodType__Enum_FWDDECL)
#include <Modloader/app/structs/DataObjectMethodType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataObjectMethodType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
