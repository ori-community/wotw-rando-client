#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BTPrefs_SerializedData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BTPrefs_SerializedData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BTPrefs_SerializedData_DEFINED)
#include <Modloader/app/structs/BTPrefs_SerializedData__Fields.h>
#if defined(IL2CPP_STRUCT_BTPrefs_SerializedData__Fields_DEFINED)
#define IL2CPP_STRUCT_BTPrefs_SerializedData_DEFINED
struct BTPrefs_SerializedData__Class;
struct BTPrefs_SerializedData {
    struct BTPrefs_SerializedData__Class* klass;
    MonitorData* monitor;
    struct BTPrefs_SerializedData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BTPrefs_SerializedData_FWDDECL)
#define IL2CPP_STRUCT_BTPrefs_SerializedData_FWDDECL
#include <Modloader/app/structs/BTPrefs_SerializedData__Class.h>
#endif
#undef IL2CPP_STRUCT_BTPrefs_SerializedData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BTPrefs_SerializedData_DEFINED) && !defined(IL2CPP_STRUCT_BTPrefs_SerializedData_FWDDECL)
#include <Modloader/app/structs/BTPrefs_SerializedData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BTPrefs_SerializedData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
