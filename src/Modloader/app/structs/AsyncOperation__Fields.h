#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncOperation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncOperation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_AsyncOperation__Fields_DEFINED
struct SynchronizationContext;
struct Object;
struct __declspec(align(8)) AsyncOperation__Fields {
    struct SynchronizationContext* syncContext;
    struct Object* userSuppliedState;
    bool alreadyCompleted;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncOperation__Fields_FWDDECL)
#define IL2CPP_STRUCT_AsyncOperation__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SynchronizationContext.h>
#endif
#undef IL2CPP_STRUCT_AsyncOperation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncOperation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AsyncOperation__Fields_FWDDECL)
#include <Modloader/app/structs/AsyncOperation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncOperation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
