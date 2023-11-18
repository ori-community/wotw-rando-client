#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoBoostProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoBoostProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoBoostProfilingSetting_DEFINED)
#include <Modloader/app/structs/GPUAutoBoostProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_GPUAutoBoostProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_GPUAutoBoostProfilingSetting_DEFINED
struct GPUAutoBoostProfilingSetting__Class;
struct GPUAutoBoostProfilingSetting {
    struct GPUAutoBoostProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct GPUAutoBoostProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoBoostProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoBoostProfilingSetting_FWDDECL
#include <Modloader/app/structs/GPUAutoBoostProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_GPUAutoBoostProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoBoostProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoBoostProfilingSetting_FWDDECL)
#include <Modloader/app/structs/GPUAutoBoostProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoBoostProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
