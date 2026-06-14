#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuAbilities_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuAbilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuAbilities_DEFINED)
#include <Modloader/app/structs/KuAbilities__Fields.h>
#if defined(IL2CPP_STRUCT_KuAbilities__Fields_DEFINED)
#define IL2CPP_STRUCT_KuAbilities_DEFINED
struct KuAbilities__Class;
struct KuAbilities {
    struct KuAbilities__Class* klass;
    MonitorData* monitor;
    struct KuAbilities__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuAbilities_FWDDECL)
#define IL2CPP_STRUCT_KuAbilities_FWDDECL
#include <Modloader/app/structs/KuAbilities__Class.h>
#endif
#undef IL2CPP_STRUCT_KuAbilities_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuAbilities_DEFINED) && !defined(IL2CPP_STRUCT_KuAbilities_FWDDECL)
#include <Modloader/app/structs/KuAbilities.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuAbilities.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
