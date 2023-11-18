#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataRowBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataRowBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_DataRowBuilder__Fields_DEFINED
struct DataTable;
struct __declspec(align(8)) DataRowBuilder__Fields {
    struct DataTable* _table;
    int32_t _record;
};
#endif
#if !defined(IL2CPP_STRUCT_DataRowBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataRowBuilder__Fields_FWDDECL
#include <Modloader/app/structs/DataTable.h>
#endif
#undef IL2CPP_STRUCT_DataRowBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataRowBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataRowBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/DataRowBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataRowBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
