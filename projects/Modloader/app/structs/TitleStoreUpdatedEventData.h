#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleStoreUpdatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleStoreUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleStoreUpdatedEventData_DEFINED)
#include <Modloader/app/structs/TitleStoreUpdatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_TitleStoreUpdatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_TitleStoreUpdatedEventData_DEFINED
struct TitleStoreUpdatedEventData__Class;
struct TitleStoreUpdatedEventData {
    struct TitleStoreUpdatedEventData__Class* klass;
    MonitorData* monitor;
    struct TitleStoreUpdatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TitleStoreUpdatedEventData_FWDDECL)
#define IL2CPP_STRUCT_TitleStoreUpdatedEventData_FWDDECL
#include <Modloader/app/structs/TitleStoreUpdatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_TitleStoreUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleStoreUpdatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_TitleStoreUpdatedEventData_FWDDECL)
#include <Modloader/app/structs/TitleStoreUpdatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleStoreUpdatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
