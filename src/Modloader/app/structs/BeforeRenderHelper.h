#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BeforeRenderHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BeforeRenderHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_BeforeRenderHelper_DEFINED)
#define IL2CPP_STRUCT_BeforeRenderHelper_DEFINED
struct BeforeRenderHelper__Class;
struct BeforeRenderHelper {
    struct BeforeRenderHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BeforeRenderHelper_FWDDECL)
#define IL2CPP_STRUCT_BeforeRenderHelper_FWDDECL
#include <Modloader/app/structs/BeforeRenderHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_BeforeRenderHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_BeforeRenderHelper_DEFINED) && !defined(IL2CPP_STRUCT_BeforeRenderHelper_FWDDECL)
#include <Modloader/app/structs/BeforeRenderHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BeforeRenderHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
