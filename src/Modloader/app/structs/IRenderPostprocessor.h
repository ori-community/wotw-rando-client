#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRenderPostprocessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRenderPostprocessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRenderPostprocessor_DEFINED)
#define IL2CPP_STRUCT_IRenderPostprocessor_DEFINED
struct IRenderPostprocessor__Class;
struct IRenderPostprocessor {
    struct IRenderPostprocessor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRenderPostprocessor_FWDDECL)
#define IL2CPP_STRUCT_IRenderPostprocessor_FWDDECL
#include <Modloader/app/structs/IRenderPostprocessor__Class.h>
#endif
#undef IL2CPP_STRUCT_IRenderPostprocessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRenderPostprocessor_DEFINED) && !defined(IL2CPP_STRUCT_IRenderPostprocessor_FWDDECL)
#include <Modloader/app/structs/IRenderPostprocessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRenderPostprocessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
