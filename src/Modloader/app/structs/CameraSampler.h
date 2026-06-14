#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSampler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSampler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSampler_DEFINED)
#include <Modloader/app/structs/CameraSampler__Fields.h>
#if defined(IL2CPP_STRUCT_CameraSampler__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraSampler_DEFINED
struct CameraSampler__Class;
struct CameraSampler {
    struct CameraSampler__Class* klass;
    MonitorData* monitor;
    struct CameraSampler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSampler_FWDDECL)
#define IL2CPP_STRUCT_CameraSampler_FWDDECL
#include <Modloader/app/structs/CameraSampler__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraSampler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSampler_DEFINED) && !defined(IL2CPP_STRUCT_CameraSampler_FWDDECL)
#include <Modloader/app/structs/CameraSampler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSampler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
