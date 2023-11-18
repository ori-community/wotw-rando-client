#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataViewManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataViewManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewManager_DEFINED)
#include <Modloader/app/structs/DataViewManager__Fields.h>
#if defined(IL2CPP_STRUCT_DataViewManager__Fields_DEFINED)
#define IL2CPP_STRUCT_DataViewManager_DEFINED
struct DataViewManager__Class;
struct DataViewManager {
    struct DataViewManager__Class* klass;
    MonitorData* monitor;
    struct DataViewManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataViewManager_FWDDECL)
#define IL2CPP_STRUCT_DataViewManager_FWDDECL
#include <Modloader/app/structs/DataViewManager__Class.h>
#endif
#undef IL2CPP_STRUCT_DataViewManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewManager_DEFINED) && !defined(IL2CPP_STRUCT_DataViewManager_FWDDECL)
#include <Modloader/app/structs/DataViewManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataViewManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
