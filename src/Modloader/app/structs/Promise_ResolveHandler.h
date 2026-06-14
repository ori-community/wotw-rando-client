#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Promise_ResolveHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Promise_ResolveHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise_ResolveHandler_DEFINED)
#define IL2CPP_STRUCT_Promise_ResolveHandler_DEFINED
struct Action;
struct IRejectable;
struct Promise_ResolveHandler {
    struct Action* callback;
    struct IRejectable* rejectable;
};
#endif
#if !defined(IL2CPP_STRUCT_Promise_ResolveHandler_FWDDECL)
#define IL2CPP_STRUCT_Promise_ResolveHandler_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/IRejectable.h>
#endif
#undef IL2CPP_STRUCT_Promise_ResolveHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_Promise_ResolveHandler_DEFINED) && !defined(IL2CPP_STRUCT_Promise_ResolveHandler_FWDDECL)
#include <Modloader/app/structs/Promise_ResolveHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Promise_ResolveHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
