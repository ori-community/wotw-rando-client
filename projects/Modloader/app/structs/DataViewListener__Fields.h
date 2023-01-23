#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataViewListener__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataViewListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewListener__Fields_DEFINED)
#define IL2CPP_STRUCT_DataViewListener__Fields_DEFINED
struct WeakReference;
struct DataTable;
struct Index;
struct __declspec(align(8)) DataViewListener__Fields {
    struct WeakReference* _dvWeak;
    struct DataTable* _table;
    struct Index* _index;
    int32_t _objectID;
};
#endif
#if !defined(IL2CPP_STRUCT_DataViewListener__Fields_FWDDECL)
#define IL2CPP_STRUCT_DataViewListener__Fields_FWDDECL
#include <Modloader/app/structs/DataTable.h>
#include <Modloader/app/structs/Index.h>
#include <Modloader/app/structs/WeakReference.h>
#endif
#undef IL2CPP_STRUCT_DataViewListener__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewListener__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DataViewListener__Fields_FWDDECL)
#include <Modloader/app/structs/DataViewListener__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataViewListener__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
