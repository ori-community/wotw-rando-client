#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisplayNameFilteredEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisplayNameFilteredEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisplayNameFilteredEventData_DEFINED)
#include <Modloader/app/structs/DisplayNameFilteredEventData__Fields.h>
#if defined(IL2CPP_STRUCT_DisplayNameFilteredEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_DisplayNameFilteredEventData_DEFINED
struct DisplayNameFilteredEventData__Class;
struct DisplayNameFilteredEventData {
    struct DisplayNameFilteredEventData__Class* klass;
    MonitorData* monitor;
    struct DisplayNameFilteredEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisplayNameFilteredEventData_FWDDECL)
#define IL2CPP_STRUCT_DisplayNameFilteredEventData_FWDDECL
#include <Modloader/app/structs/DisplayNameFilteredEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_DisplayNameFilteredEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisplayNameFilteredEventData_DEFINED) && !defined(IL2CPP_STRUCT_DisplayNameFilteredEventData_FWDDECL)
#include <Modloader/app/structs/DisplayNameFilteredEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisplayNameFilteredEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
