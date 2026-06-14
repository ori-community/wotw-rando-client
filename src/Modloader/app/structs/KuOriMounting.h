#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuOriMounting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuOriMounting_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuOriMounting_DEFINED)
#include <Modloader/app/structs/KuOriMounting__Fields.h>
#if defined(IL2CPP_STRUCT_KuOriMounting__Fields_DEFINED)
#define IL2CPP_STRUCT_KuOriMounting_DEFINED
struct KuOriMounting__Class;
struct KuOriMounting {
    struct KuOriMounting__Class* klass;
    MonitorData* monitor;
    struct KuOriMounting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuOriMounting_FWDDECL)
#define IL2CPP_STRUCT_KuOriMounting_FWDDECL
#include <Modloader/app/structs/KuOriMounting__Class.h>
#endif
#undef IL2CPP_STRUCT_KuOriMounting_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuOriMounting_DEFINED) && !defined(IL2CPP_STRUCT_KuOriMounting_FWDDECL)
#include <Modloader/app/structs/KuOriMounting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuOriMounting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
