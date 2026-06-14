#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuLookUp_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuLookUp_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuLookUp_DEFINED)
#include <Modloader/app/structs/KuLookUp__Fields.h>
#if defined(IL2CPP_STRUCT_KuLookUp__Fields_DEFINED)
#define IL2CPP_STRUCT_KuLookUp_DEFINED
struct KuLookUp__Class;
struct KuLookUp {
    struct KuLookUp__Class* klass;
    MonitorData* monitor;
    struct KuLookUp__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuLookUp_FWDDECL)
#define IL2CPP_STRUCT_KuLookUp_FWDDECL
#include <Modloader/app/structs/KuLookUp__Class.h>
#endif
#undef IL2CPP_STRUCT_KuLookUp_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuLookUp_DEFINED) && !defined(IL2CPP_STRUCT_KuLookUp_FWDDECL)
#include <Modloader/app/structs/KuLookUp.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuLookUp.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
