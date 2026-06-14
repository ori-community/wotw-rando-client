#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGenericCastManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGenericCastManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGenericCastManager_DEFINED)
#define IL2CPP_STRUCT_IGenericCastManager_DEFINED
struct IGenericCastManager__Class;
struct IGenericCastManager {
    struct IGenericCastManager__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IGenericCastManager_FWDDECL)
#define IL2CPP_STRUCT_IGenericCastManager_FWDDECL
#include <Modloader/app/structs/IGenericCastManager__Class.h>
#endif
#undef IL2CPP_STRUCT_IGenericCastManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGenericCastManager_DEFINED) && !defined(IL2CPP_STRUCT_IGenericCastManager_FWDDECL)
#include <Modloader/app/structs/IGenericCastManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGenericCastManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
