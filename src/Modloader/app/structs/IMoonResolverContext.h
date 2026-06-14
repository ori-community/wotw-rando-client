#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonResolverContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonResolverContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonResolverContext_DEFINED)
#define IL2CPP_STRUCT_IMoonResolverContext_DEFINED
struct IMoonResolverContext__Class;
struct IMoonResolverContext {
    struct IMoonResolverContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonResolverContext_FWDDECL)
#define IL2CPP_STRUCT_IMoonResolverContext_FWDDECL
#include <Modloader/app/structs/IMoonResolverContext__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonResolverContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonResolverContext_DEFINED) && !defined(IL2CPP_STRUCT_IMoonResolverContext_FWDDECL)
#include <Modloader/app/structs/IMoonResolverContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonResolverContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
