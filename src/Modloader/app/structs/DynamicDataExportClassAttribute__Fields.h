#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicDataExportClassAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicDataExportClassAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataExportClassAttribute__Fields_DEFINED)
#include <Modloader/app/structs/DataProviderID__Enum.h>
#if defined(IL2CPP_STRUCT_DataProviderID__Enum_DEFINED)
#define IL2CPP_STRUCT_DynamicDataExportClassAttribute__Fields_DEFINED
struct String;
struct __declspec(align(8)) DynamicDataExportClassAttribute__Fields {
    struct String* _CustomInspectorName_k__BackingField;
    DataProviderID__Enum ID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicDataExportClassAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_DynamicDataExportClassAttribute__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DynamicDataExportClassAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicDataExportClassAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicDataExportClassAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/DynamicDataExportClassAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicDataExportClassAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
