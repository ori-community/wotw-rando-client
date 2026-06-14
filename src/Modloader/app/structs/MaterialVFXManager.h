#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MaterialVFXManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MaterialVFXManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialVFXManager_DEFINED)
#include <Modloader/app/structs/MaterialVFXManager__Fields.h>
#if defined(IL2CPP_STRUCT_MaterialVFXManager__Fields_DEFINED)
#define IL2CPP_STRUCT_MaterialVFXManager_DEFINED
struct MaterialVFXManager__Class;
struct MaterialVFXManager {
    struct MaterialVFXManager__Class* klass;
    MonitorData* monitor;
    struct MaterialVFXManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MaterialVFXManager_FWDDECL)
#define IL2CPP_STRUCT_MaterialVFXManager_FWDDECL
#include <Modloader/app/structs/MaterialVFXManager__Class.h>
#endif
#undef IL2CPP_STRUCT_MaterialVFXManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_MaterialVFXManager_DEFINED) && !defined(IL2CPP_STRUCT_MaterialVFXManager_FWDDECL)
#include <Modloader/app/structs/MaterialVFXManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MaterialVFXManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
