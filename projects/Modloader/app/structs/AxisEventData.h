#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AxisEventData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AxisEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisEventData_DEFINED)
#include <Modloader/app/structs/AxisEventData__Fields.h>
#if defined(IL2CPP_STRUCT_AxisEventData__Fields_DEFINED)
#define IL2CPP_STRUCT_AxisEventData_DEFINED
struct AxisEventData__Class;
struct AxisEventData {
    struct AxisEventData__Class* klass;
    MonitorData* monitor;
    struct AxisEventData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AxisEventData_FWDDECL)
#define IL2CPP_STRUCT_AxisEventData_FWDDECL
#include <Modloader/app/structs/AxisEventData__Class.h>
#endif
#undef IL2CPP_STRUCT_AxisEventData_INITIALIZING
#if !defined(IL2CPP_STRUCT_AxisEventData_DEFINED) && !defined(IL2CPP_STRUCT_AxisEventData_FWDDECL)
#include <Modloader/app/structs/AxisEventData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AxisEventData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
