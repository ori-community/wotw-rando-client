#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VFXManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VFXManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_VFXManager_DEFINED)
#define IL2CPP_STRUCT_VFXManager_DEFINED
struct VFXManager__Class;
struct VFXManager {
    struct VFXManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_VFXManager_FWDDECL)
#define IL2CPP_STRUCT_VFXManager_FWDDECL
#include <Modloader/app/structs/VFXManager__Class.h>
#endif
#undef IL2CPP_STRUCT_VFXManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_VFXManager_DEFINED) && !defined(IL2CPP_STRUCT_VFXManager_FWDDECL)
#include <Modloader/app/structs/VFXManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VFXManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
