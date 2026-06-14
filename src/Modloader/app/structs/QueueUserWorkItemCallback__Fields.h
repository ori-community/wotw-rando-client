#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QueueUserWorkItemCallback__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QueueUserWorkItemCallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QueueUserWorkItemCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_QueueUserWorkItemCallback__Fields_DEFINED
struct WaitCallback;
struct ExecutionContext;
struct Object;
struct __declspec(align(8)) QueueUserWorkItemCallback__Fields {
    struct WaitCallback* callback;
    struct ExecutionContext* context;
    struct Object* state;
};
#endif
#if !defined(IL2CPP_STRUCT_QueueUserWorkItemCallback__Fields_FWDDECL)
#define IL2CPP_STRUCT_QueueUserWorkItemCallback__Fields_FWDDECL
#include <Modloader/app/structs/ExecutionContext.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/WaitCallback.h>
#endif
#undef IL2CPP_STRUCT_QueueUserWorkItemCallback__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_QueueUserWorkItemCallback__Fields_DEFINED) && !defined(IL2CPP_STRUCT_QueueUserWorkItemCallback__Fields_FWDDECL)
#include <Modloader/app/structs/QueueUserWorkItemCallback__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QueueUserWorkItemCallback__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
