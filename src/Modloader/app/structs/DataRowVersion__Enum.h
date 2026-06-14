#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRowVersion__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRowVersion__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowVersion__Enum_DEFINED)
#define IL2CPP_STRUCT_DataRowVersion__Enum_DEFINED
enum class DataRowVersion__Enum : int32_t {
    Original = 0x00000100,
    Current = 0x00000200,
    Proposed = 0x00000400,
    Default = 0x00000600,
};
#endif
#if !defined(IL2CPP_STRUCT_DataRowVersion__Enum_FWDDECL)
#define IL2CPP_STRUCT_DataRowVersion__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_DataRowVersion__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowVersion__Enum_DEFINED) && !defined(IL2CPP_STRUCT_DataRowVersion__Enum_FWDDECL)
#include <Modloader/app/structs/DataRowVersion__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRowVersion__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
