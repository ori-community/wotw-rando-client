#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoolingProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoolingProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolingProfilingSetting_DEFINED)
#include <Modloader/app/structs/PoolingProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_PoolingProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_PoolingProfilingSetting_DEFINED
struct PoolingProfilingSetting__Class;
struct PoolingProfilingSetting {
    struct PoolingProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct PoolingProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PoolingProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_PoolingProfilingSetting_FWDDECL
#include <Modloader/app/structs/PoolingProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_PoolingProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolingProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_PoolingProfilingSetting_FWDDECL)
#include <Modloader/app/structs/PoolingProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoolingProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
