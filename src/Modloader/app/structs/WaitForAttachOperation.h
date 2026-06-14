#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForAttachOperation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForAttachOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForAttachOperation_DEFINED)
#include <Modloader/app/structs/WaitForAttachOperation__Fields.h>
#if defined(IL2CPP_STRUCT_WaitForAttachOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForAttachOperation_DEFINED
struct WaitForAttachOperation__Class;
struct WaitForAttachOperation {
    struct WaitForAttachOperation__Class* klass;
    MonitorData* monitor;
    struct WaitForAttachOperation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForAttachOperation_FWDDECL)
#define IL2CPP_STRUCT_WaitForAttachOperation_FWDDECL
#include <Modloader/app/structs/WaitForAttachOperation__Class.h>
#endif
#undef IL2CPP_STRUCT_WaitForAttachOperation_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForAttachOperation_DEFINED) && !defined(IL2CPP_STRUCT_WaitForAttachOperation_FWDDECL)
#include <Modloader/app/structs/WaitForAttachOperation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForAttachOperation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
