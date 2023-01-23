#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KuLand_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KuLand_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuLand_DEFINED)
#include <Modloader/app/structs/KuLand__Fields.h>
#if defined(IL2CPP_STRUCT_KuLand__Fields_DEFINED)
#define IL2CPP_STRUCT_KuLand_DEFINED
struct KuLand__Class;
struct KuLand {
    struct KuLand__Class* klass;
    MonitorData* monitor;
    struct KuLand__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KuLand_FWDDECL)
#define IL2CPP_STRUCT_KuLand_FWDDECL
#include <Modloader/app/structs/KuLand__Class.h>
#endif
#undef IL2CPP_STRUCT_KuLand_INITIALIZING
#if !defined(IL2CPP_STRUCT_KuLand_DEFINED) && !defined(IL2CPP_STRUCT_KuLand_FWDDECL)
#include <Modloader/app/structs/KuLand.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KuLand.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
