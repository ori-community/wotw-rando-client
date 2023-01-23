#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DummyRenderPostprocessor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DummyRenderPostprocessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_DummyRenderPostprocessor_DEFINED)
#include <Modloader/app/structs/DummyRenderPostprocessor__Fields.h>
#if defined(IL2CPP_STRUCT_DummyRenderPostprocessor__Fields_DEFINED)
#define IL2CPP_STRUCT_DummyRenderPostprocessor_DEFINED
struct DummyRenderPostprocessor__Class;
struct DummyRenderPostprocessor {
    struct DummyRenderPostprocessor__Class* klass;
    MonitorData* monitor;
    struct DummyRenderPostprocessor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DummyRenderPostprocessor_FWDDECL)
#define IL2CPP_STRUCT_DummyRenderPostprocessor_FWDDECL
#include <Modloader/app/structs/DummyRenderPostprocessor__Class.h>
#endif
#undef IL2CPP_STRUCT_DummyRenderPostprocessor_INITIALIZING
#if !defined(IL2CPP_STRUCT_DummyRenderPostprocessor_DEFINED) && !defined(IL2CPP_STRUCT_DummyRenderPostprocessor_FWDDECL)
#include <Modloader/app/structs/DummyRenderPostprocessor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DummyRenderPostprocessor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
