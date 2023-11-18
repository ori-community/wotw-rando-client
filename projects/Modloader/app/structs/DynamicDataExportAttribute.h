#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicDataExportAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicDataExportAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataExportAttribute_DEFINED)
#include <Modloader/app/structs/DynamicDataExportAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicDataExportAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicDataExportAttribute_DEFINED
struct DynamicDataExportAttribute__Class;
struct DynamicDataExportAttribute {
    struct DynamicDataExportAttribute__Class* klass;
    MonitorData* monitor;
    struct DynamicDataExportAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicDataExportAttribute_FWDDECL)
#define IL2CPP_STRUCT_DynamicDataExportAttribute_FWDDECL
#include <Modloader/app/structs/DynamicDataExportAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicDataExportAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataExportAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DynamicDataExportAttribute_FWDDECL)
#include <Modloader/app/structs/DynamicDataExportAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicDataExportAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
