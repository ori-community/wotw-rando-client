#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultExecutionOrder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultExecutionOrder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultExecutionOrder_DEFINED)
#include <Modloader/app/structs/DefaultExecutionOrder__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultExecutionOrder__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultExecutionOrder_DEFINED
struct DefaultExecutionOrder__Class;
struct DefaultExecutionOrder {
    struct DefaultExecutionOrder__Class* klass;
    MonitorData* monitor;
    struct DefaultExecutionOrder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultExecutionOrder_FWDDECL)
#define IL2CPP_STRUCT_DefaultExecutionOrder_FWDDECL
#include <Modloader/app/structs/DefaultExecutionOrder__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultExecutionOrder_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultExecutionOrder_DEFINED) && !defined(IL2CPP_STRUCT_DefaultExecutionOrder_FWDDECL)
#include <Modloader/app/structs/DefaultExecutionOrder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultExecutionOrder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
