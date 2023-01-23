#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectInstantiationCaptureAgent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectInstantiationCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectInstantiationCaptureAgent_DEFINED)
#include <Modloader/app/structs/ObjectInstantiationCaptureAgent__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectInstantiationCaptureAgent__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectInstantiationCaptureAgent_DEFINED
struct ObjectInstantiationCaptureAgent__Class;
struct ObjectInstantiationCaptureAgent {
    struct ObjectInstantiationCaptureAgent__Class* klass;
    MonitorData* monitor;
    struct ObjectInstantiationCaptureAgent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectInstantiationCaptureAgent_FWDDECL)
#define IL2CPP_STRUCT_ObjectInstantiationCaptureAgent_FWDDECL
#include <Modloader/app/structs/ObjectInstantiationCaptureAgent__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectInstantiationCaptureAgent_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectInstantiationCaptureAgent_DEFINED) && !defined(IL2CPP_STRUCT_ObjectInstantiationCaptureAgent_FWDDECL)
#include <Modloader/app/structs/ObjectInstantiationCaptureAgent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectInstantiationCaptureAgent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
