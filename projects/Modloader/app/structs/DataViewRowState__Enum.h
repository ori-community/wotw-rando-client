#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataViewRowState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataViewRowState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewRowState__Enum_DEFINED)
#define IL2CPP_STRUCT_DataViewRowState__Enum_DEFINED
enum class DataViewRowState__Enum : int32_t {
    None = 0x00000000,
    Unchanged = 0x00000002,
    Added = 0x00000004,
    Deleted = 0x00000008,
    ModifiedCurrent = 0x00000010,
    ModifiedOriginal = 0x00000020,
    OriginalRows = 0x0000002a,
    CurrentRows = 0x00000016,
};
#endif
#if !defined(IL2CPP_STRUCT_DataViewRowState__Enum_FWDDECL)
#define IL2CPP_STRUCT_DataViewRowState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DataViewRowState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewRowState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DataViewRowState__Enum_FWDDECL)
#include <Modloader/app/structs/DataViewRowState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataViewRowState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
