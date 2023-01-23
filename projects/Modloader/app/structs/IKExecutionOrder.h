#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKExecutionOrder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKExecutionOrder_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKExecutionOrder_DEFINED)
#include <Modloader/app/structs/IKExecutionOrder__Fields.h>
#if defined(IL2CPP_STRUCT_IKExecutionOrder__Fields_DEFINED)
#define IL2CPP_STRUCT_IKExecutionOrder_DEFINED
struct IKExecutionOrder__Class;
struct IKExecutionOrder {
    struct IKExecutionOrder__Class* klass;
    MonitorData* monitor;
    struct IKExecutionOrder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IKExecutionOrder_FWDDECL)
#define IL2CPP_STRUCT_IKExecutionOrder_FWDDECL
#include <Modloader/app/structs/IKExecutionOrder__Class.h>
#endif
#undef IL2CPP_STRUCT_IKExecutionOrder_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKExecutionOrder_DEFINED) && !defined(IL2CPP_STRUCT_IKExecutionOrder_FWDDECL)
#include <Modloader/app/structs/IKExecutionOrder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKExecutionOrder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
