#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseEventData_DEFINED)
#include <Modloader/app/structs/BaseEventData__Fields.h>
#if defined(IL2CPP_STRUCT_BaseEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseEventData_DEFINED
struct BaseEventData__Class;
struct BaseEventData {
    struct BaseEventData__Class* klass;
    MonitorData* monitor;
    struct BaseEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseEventData_FWDDECL)
#define IL2CPP_STRUCT_BaseEventData_FWDDECL
#include <Modloader/app/structs/BaseEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseEventData_DEFINED) && !defined(IL2CPP_STRUCT_BaseEventData_FWDDECL)
#include <Modloader/app/structs/BaseEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
