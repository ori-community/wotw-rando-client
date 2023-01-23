#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRequestCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRequestCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRequestCallback_DEFINED)
#define IL2CPP_STRUCT_IRequestCallback_DEFINED
struct IRequestCallback__Class;
struct IRequestCallback {
    struct IRequestCallback__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRequestCallback_FWDDECL)
#define IL2CPP_STRUCT_IRequestCallback_FWDDECL
#include <Modloader/app/structs/IRequestCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_IRequestCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRequestCallback_DEFINED) && !defined(IL2CPP_STRUCT_IRequestCallback_FWDDECL)
#include <Modloader/app/structs/IRequestCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRequestCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
