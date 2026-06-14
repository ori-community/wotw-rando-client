#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderThreadWaker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderThreadWaker_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderThreadWaker_DEFINED)
#define IL2CPP_STRUCT_RenderThreadWaker_DEFINED
struct RenderThreadWaker__Class;
struct RenderThreadWaker {
    struct RenderThreadWaker__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_RenderThreadWaker_FWDDECL)
#define IL2CPP_STRUCT_RenderThreadWaker_FWDDECL
#include <Modloader/app/structs/RenderThreadWaker__Class.h>
#endif
#undef IL2CPP_STRUCT_RenderThreadWaker_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderThreadWaker_DEFINED) && !defined(IL2CPP_STRUCT_RenderThreadWaker_FWDDECL)
#include <Modloader/app/structs/RenderThreadWaker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderThreadWaker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
