#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IndexField_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IndexField_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexField_DEFINED)
#define IL2CPP_STRUCT_IndexField_DEFINED
struct DataColumn;
struct IndexField {
    struct DataColumn* Column;
    bool IsDescending;
};
#endif
#if !defined(IL2CPP_STRUCT_IndexField_FWDDECL)
#define IL2CPP_STRUCT_IndexField_FWDDECL
#include <Modloader/app/structs/DataColumn.h>
#endif
#undef IL2CPP_STRUCT_IndexField_INITIALIZING
#if !defined(IL2CPP_STRUCT_IndexField_DEFINED) && !defined(IL2CPP_STRUCT_IndexField_FWDDECL)
#include <Modloader/app/structs/IndexField.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IndexField.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
