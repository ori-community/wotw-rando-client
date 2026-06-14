#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuFeatherFlap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuFeatherFlap_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuFeatherFlap_DEFINED)
#include <Modloader/app/structs/KuFeatherFlap__Fields.h>
#if defined(IL2CPP_STRUCT_KuFeatherFlap__Fields_DEFINED)
#define IL2CPP_STRUCT_KuFeatherFlap_DEFINED
struct KuFeatherFlap__Class;
struct KuFeatherFlap {
    struct KuFeatherFlap__Class* klass;
    MonitorData* monitor;
    struct KuFeatherFlap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuFeatherFlap_FWDDECL)
#define IL2CPP_STRUCT_KuFeatherFlap_FWDDECL
#include <Modloader/app/structs/KuFeatherFlap__Class.h>
#endif
#undef IL2CPP_STRUCT_KuFeatherFlap_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuFeatherFlap_DEFINED) && !defined(IL2CPP_STRUCT_KuFeatherFlap_FWDDECL)
#include <Modloader/app/structs/KuFeatherFlap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuFeatherFlap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
