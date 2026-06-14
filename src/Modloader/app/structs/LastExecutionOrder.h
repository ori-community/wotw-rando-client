#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LastExecutionOrder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LastExecutionOrder_INITIALIZING
#if !defined(IL2CPP_STRUCT_LastExecutionOrder_DEFINED)
#include <Modloader/app/structs/LastExecutionOrder__Fields.h>
#if defined(IL2CPP_STRUCT_LastExecutionOrder__Fields_DEFINED)
#define IL2CPP_STRUCT_LastExecutionOrder_DEFINED
struct LastExecutionOrder__Class;
struct LastExecutionOrder {
    struct LastExecutionOrder__Class* klass;
    MonitorData* monitor;
    struct LastExecutionOrder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LastExecutionOrder_FWDDECL)
#define IL2CPP_STRUCT_LastExecutionOrder_FWDDECL
#include <Modloader/app/structs/LastExecutionOrder__Class.h>
#endif
#undef IL2CPP_STRUCT_LastExecutionOrder_INITIALIZING
#if !defined(IL2CPP_STRUCT_LastExecutionOrder_DEFINED) && !defined(IL2CPP_STRUCT_LastExecutionOrder_FWDDECL)
#include <Modloader/app/structs/LastExecutionOrder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LastExecutionOrder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
