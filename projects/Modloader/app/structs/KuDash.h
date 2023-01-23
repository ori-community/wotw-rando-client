#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuDash_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuDash_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDash_DEFINED)
#include <Modloader/app/structs/KuDash__Fields.h>
#if defined(IL2CPP_STRUCT_KuDash__Fields_DEFINED)
#define IL2CPP_STRUCT_KuDash_DEFINED
struct KuDash__Class;
struct KuDash {
    struct KuDash__Class* klass;
    MonitorData* monitor;
    struct KuDash__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuDash_FWDDECL)
#define IL2CPP_STRUCT_KuDash_FWDDECL
#include <Modloader/app/structs/KuDash__Class.h>
#endif
#undef IL2CPP_STRUCT_KuDash_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuDash_DEFINED) && !defined(IL2CPP_STRUCT_KuDash_FWDDECL)
#include <Modloader/app/structs/KuDash.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuDash.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
