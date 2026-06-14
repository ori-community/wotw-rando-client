#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicDataExportClassAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicDataExportClassAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataExportClassAttribute_DEFINED)
#include <Modloader/app/structs/DynamicDataExportClassAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_DynamicDataExportClassAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_DynamicDataExportClassAttribute_DEFINED
struct DynamicDataExportClassAttribute__Class;
struct DynamicDataExportClassAttribute {
    struct DynamicDataExportClassAttribute__Class* klass;
    MonitorData* monitor;
    struct DynamicDataExportClassAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicDataExportClassAttribute_FWDDECL)
#define IL2CPP_STRUCT_DynamicDataExportClassAttribute_FWDDECL
#include <Modloader/app/structs/DynamicDataExportClassAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_DynamicDataExportClassAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataExportClassAttribute_DEFINED) && !defined(IL2CPP_STRUCT_DynamicDataExportClassAttribute_FWDDECL)
#include <Modloader/app/structs/DynamicDataExportClassAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicDataExportClassAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
