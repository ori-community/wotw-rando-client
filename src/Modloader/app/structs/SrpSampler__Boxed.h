#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SrpSampler__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SrpSampler__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SrpSampler__Boxed_DEFINED)
#include <Modloader/app/structs/SrpSampler.h>
#if defined(IL2CPP_STRUCT_SrpSampler_DEFINED)
#define IL2CPP_STRUCT_SrpSampler__Boxed_DEFINED
struct SrpSampler__Class;
struct SrpSampler__Boxed {
    struct SrpSampler__Class* klass;
    MonitorData* monitor;
    struct SrpSampler fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SrpSampler__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SrpSampler__Boxed_FWDDECL
#include <Modloader/app/structs/SrpSampler__Class.h>
#endif
#undef IL2CPP_STRUCT_SrpSampler__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SrpSampler__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SrpSampler__Boxed_FWDDECL)
#include <Modloader/app/structs/SrpSampler__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SrpSampler__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
