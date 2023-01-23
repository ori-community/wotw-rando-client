#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuGlide_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuGlide_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuGlide_DEFINED)
#include <Modloader/app/structs/KuGlide__Fields.h>
#if defined(IL2CPP_STRUCT_KuGlide__Fields_DEFINED)
#define IL2CPP_STRUCT_KuGlide_DEFINED
struct KuGlide__Class;
struct KuGlide {
    struct KuGlide__Class* klass;
    MonitorData* monitor;
    struct KuGlide__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuGlide_FWDDECL)
#define IL2CPP_STRUCT_KuGlide_FWDDECL
#include <Modloader/app/structs/KuGlide__Class.h>
#endif
#undef IL2CPP_STRUCT_KuGlide_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuGlide_DEFINED) && !defined(IL2CPP_STRUCT_KuGlide_FWDDECL)
#include <Modloader/app/structs/KuGlide.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuGlide.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
