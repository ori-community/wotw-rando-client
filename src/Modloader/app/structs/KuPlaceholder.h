#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuPlaceholder_DEFINED)
#include <Modloader/app/structs/KuPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_KuPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_KuPlaceholder_DEFINED
struct KuPlaceholder__Class;
struct KuPlaceholder {
    struct KuPlaceholder__Class* klass;
    MonitorData* monitor;
    struct KuPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_KuPlaceholder_FWDDECL
#include <Modloader/app/structs/KuPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_KuPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_KuPlaceholder_FWDDECL)
#include <Modloader/app/structs/KuPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
