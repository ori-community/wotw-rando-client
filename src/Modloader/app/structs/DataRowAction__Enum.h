#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRowAction__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRowAction__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowAction__Enum_DEFINED)
#define IL2CPP_STRUCT_DataRowAction__Enum_DEFINED
enum class DataRowAction__Enum : int32_t {
    Nothing = 0x00000000,
    Delete = 0x00000001,
    Change = 0x00000002,
    Rollback = 0x00000004,
    Commit = 0x00000008,
    Add = 0x00000010,
    ChangeOriginal = 0x00000020,
    ChangeCurrentAndOriginal = 0x00000040,
};
#endif
#if !defined(IL2CPP_STRUCT_DataRowAction__Enum_FWDDECL)
#define IL2CPP_STRUCT_DataRowAction__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DataRowAction__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowAction__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DataRowAction__Enum_FWDDECL)
#include <Modloader/app/structs/DataRowAction__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRowAction__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
