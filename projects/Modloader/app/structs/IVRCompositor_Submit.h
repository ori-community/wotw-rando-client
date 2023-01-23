#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVRCompositor_Submit_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVRCompositor_Submit_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRCompositor_Submit_DEFINED)
#include <Modloader/app/structs/IVRCompositor_Submit__Fields.h>
#if defined(IL2CPP_STRUCT_IVRCompositor_Submit__Fields_DEFINED)
#define IL2CPP_STRUCT_IVRCompositor_Submit_DEFINED
struct IVRCompositor_Submit__Class;
struct IVRCompositor_Submit {
    struct IVRCompositor_Submit__Class* klass;
    MonitorData* monitor;
    struct IVRCompositor_Submit__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IVRCompositor_Submit_FWDDECL)
#define IL2CPP_STRUCT_IVRCompositor_Submit_FWDDECL
#include <Modloader/app/structs/IVRCompositor_Submit__Class.h>
#endif
#undef IL2CPP_STRUCT_IVRCompositor_Submit_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVRCompositor_Submit_DEFINED) && !defined(IL2CPP_STRUCT_IVRCompositor_Submit_FWDDECL)
#include <Modloader/app/structs/IVRCompositor_Submit.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVRCompositor_Submit.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
