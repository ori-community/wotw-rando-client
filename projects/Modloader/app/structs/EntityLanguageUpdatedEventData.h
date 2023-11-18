#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityLanguageUpdatedEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityLanguageUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityLanguageUpdatedEventData_DEFINED)
#include <Modloader/app/structs/EntityLanguageUpdatedEventData__Fields.h>
#if defined(IL2CPP_STRUCT_EntityLanguageUpdatedEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityLanguageUpdatedEventData_DEFINED
struct EntityLanguageUpdatedEventData__Class;
struct EntityLanguageUpdatedEventData {
    struct EntityLanguageUpdatedEventData__Class* klass;
    MonitorData* monitor;
    struct EntityLanguageUpdatedEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityLanguageUpdatedEventData_FWDDECL)
#define IL2CPP_STRUCT_EntityLanguageUpdatedEventData_FWDDECL
#include <Modloader/app/structs/EntityLanguageUpdatedEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityLanguageUpdatedEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityLanguageUpdatedEventData_DEFINED) && !defined(IL2CPP_STRUCT_EntityLanguageUpdatedEventData_FWDDECL)
#include <Modloader/app/structs/EntityLanguageUpdatedEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityLanguageUpdatedEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
