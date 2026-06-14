#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleCameraSampler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleCameraSampler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleCameraSampler_DEFINED)
#include <Modloader/app/structs/SimpleCameraSampler__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleCameraSampler__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleCameraSampler_DEFINED
struct SimpleCameraSampler__Class;
struct SimpleCameraSampler {
    struct SimpleCameraSampler__Class* klass;
    MonitorData* monitor;
    struct SimpleCameraSampler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SimpleCameraSampler_FWDDECL)
#define IL2CPP_STRUCT_SimpleCameraSampler_FWDDECL
#include <Modloader/app/structs/SimpleCameraSampler__Class.h>
#endif
#undef IL2CPP_STRUCT_SimpleCameraSampler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleCameraSampler_DEFINED) && !defined(IL2CPP_STRUCT_SimpleCameraSampler_FWDDECL)
#include <Modloader/app/structs/SimpleCameraSampler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleCameraSampler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
