#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DataViewSettingCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DataViewSettingCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewSettingCollection_DEFINED)
#include <Modloader/app/structs/DataViewSettingCollection__Fields.h>
#if defined(IL2CPP_STRUCT_DataViewSettingCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_DataViewSettingCollection_DEFINED
struct DataViewSettingCollection__Class;
struct DataViewSettingCollection {
    struct DataViewSettingCollection__Class* klass;
    MonitorData* monitor;
    struct DataViewSettingCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DataViewSettingCollection_FWDDECL)
#define IL2CPP_STRUCT_DataViewSettingCollection_FWDDECL
#include <Modloader/app/structs/DataViewSettingCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_DataViewSettingCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_DataViewSettingCollection_DEFINED) && !defined(IL2CPP_STRUCT_DataViewSettingCollection_FWDDECL)
#include <Modloader/app/structs/DataViewSettingCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DataViewSettingCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
