#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AsyncHelpers_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AsyncHelpers_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncHelpers_DEFINED)
#define IL2CPP_STRUCT_AsyncHelpers_DEFINED
struct AsyncHelpers__Class;
struct AsyncHelpers {
    struct AsyncHelpers__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_AsyncHelpers_FWDDECL)
#define IL2CPP_STRUCT_AsyncHelpers_FWDDECL
#include <Modloader/app/structs/AsyncHelpers__Class.h>
#endif
#undef IL2CPP_STRUCT_AsyncHelpers_INITIALIZING
#if !defined(IL2CPP_STRUCT_AsyncHelpers_DEFINED) && !defined(IL2CPP_STRUCT_AsyncHelpers_FWDDECL)
#include <Modloader/app/structs/AsyncHelpers.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AsyncHelpers.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
