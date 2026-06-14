#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CustomSampler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CustomSampler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomSampler_DEFINED)
#include <Modloader/app/structs/CustomSampler__Fields.h>
#if defined(IL2CPP_STRUCT_CustomSampler__Fields_DEFINED)
#define IL2CPP_STRUCT_CustomSampler_DEFINED
struct CustomSampler__Class;
struct CustomSampler {
    struct CustomSampler__Class* klass;
    MonitorData* monitor;
    struct CustomSampler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CustomSampler_FWDDECL)
#define IL2CPP_STRUCT_CustomSampler_FWDDECL
#include <Modloader/app/structs/CustomSampler__Class.h>
#endif
#undef IL2CPP_STRUCT_CustomSampler_INITIALIZING
#if !defined(IL2CPP_STRUCT_CustomSampler_DEFINED) && !defined(IL2CPP_STRUCT_CustomSampler_FWDDECL)
#include <Modloader/app/structs/CustomSampler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CustomSampler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
