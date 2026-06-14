#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RadialBlur_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RadialBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_RadialBlur_DEFINED)
#include <Modloader/app/structs/RadialBlur__Fields.h>
#if defined(IL2CPP_STRUCT_RadialBlur__Fields_DEFINED)
#define IL2CPP_STRUCT_RadialBlur_DEFINED
struct RadialBlur__Class;
struct RadialBlur {
    struct RadialBlur__Class* klass;
    MonitorData* monitor;
    struct RadialBlur__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RadialBlur_FWDDECL)
#define IL2CPP_STRUCT_RadialBlur_FWDDECL
#include <Modloader/app/structs/RadialBlur__Class.h>
#endif
#undef IL2CPP_STRUCT_RadialBlur_INITIALIZING
#if !defined(IL2CPP_STRUCT_RadialBlur_DEFINED) && !defined(IL2CPP_STRUCT_RadialBlur_FWDDECL)
#include <Modloader/app/structs/RadialBlur.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RadialBlur.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
