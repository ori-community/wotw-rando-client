#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleCatalogUpdatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleCatalogUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleCatalogUpdatedEventData_DEFINED)
#include <Modloader/app/structs/TitleCatalogUpdatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleCatalogUpdatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleCatalogUpdatedEventData_DEFINED
struct TitleCatalogUpdatedEventData__Class;
struct TitleCatalogUpdatedEventData {
    struct TitleCatalogUpdatedEventData__Class* klass;
    MonitorData* monitor;
    struct TitleCatalogUpdatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleCatalogUpdatedEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleCatalogUpdatedEventData_FWDDECL
#include <Modloader/app/structs/TitleCatalogUpdatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleCatalogUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleCatalogUpdatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleCatalogUpdatedEventData_FWDDECL)
#include <Modloader/app/structs/TitleCatalogUpdatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleCatalogUpdatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
