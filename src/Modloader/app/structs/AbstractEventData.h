#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AbstractEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AbstractEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbstractEventData_DEFINED)
#include <Modloader/app/structs/AbstractEventData__Fields.h>
#if defined(IL2CPP_STRUCT_AbstractEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_AbstractEventData_DEFINED
struct AbstractEventData__Class;
struct AbstractEventData {
    struct AbstractEventData__Class* klass;
    MonitorData* monitor;
    struct AbstractEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AbstractEventData_FWDDECL)
#define IL2CPP_STRUCT_AbstractEventData_FWDDECL
#include <Modloader/app/structs/AbstractEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_AbstractEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AbstractEventData_DEFINED) && !defined(IL2CPP_STRUCT_AbstractEventData_FWDDECL)
#include <Modloader/app/structs/AbstractEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AbstractEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
