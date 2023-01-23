#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FirstExecutionOrder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FirstExecutionOrder_INITIALIZING
#if !defined(IL2CPP_STRUCT_FirstExecutionOrder_DEFINED)
#include <Modloader/app/structs/FirstExecutionOrder__Fields.h>
#if defined(IL2CPP_STRUCT_FirstExecutionOrder__Fields_DEFINED)
#define IL2CPP_STRUCT_FirstExecutionOrder_DEFINED
struct FirstExecutionOrder__Class;
struct FirstExecutionOrder {
    struct FirstExecutionOrder__Class* klass;
    MonitorData* monitor;
    struct FirstExecutionOrder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FirstExecutionOrder_FWDDECL)
#define IL2CPP_STRUCT_FirstExecutionOrder_FWDDECL
#include <Modloader/app/structs/FirstExecutionOrder__Class.h>
#endif
#undef IL2CPP_STRUCT_FirstExecutionOrder_INITIALIZING
#if !defined(IL2CPP_STRUCT_FirstExecutionOrder_DEFINED) && !defined(IL2CPP_STRUCT_FirstExecutionOrder_FWDDECL)
#include <Modloader/app/structs/FirstExecutionOrder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FirstExecutionOrder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
