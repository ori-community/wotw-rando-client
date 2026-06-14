#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SphereCastManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SphereCastManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SphereCastManager_DEFINED)
#include <Modloader/app/structs/SphereCastManager__Fields.h>
#if defined(IL2CPP_STRUCT_SphereCastManager__Fields_DEFINED)
#define IL2CPP_STRUCT_SphereCastManager_DEFINED
struct SphereCastManager__Class;
struct SphereCastManager {
    struct SphereCastManager__Class* klass;
    MonitorData* monitor;
    struct SphereCastManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SphereCastManager_FWDDECL)
#define IL2CPP_STRUCT_SphereCastManager_FWDDECL
#include <Modloader/app/structs/SphereCastManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SphereCastManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SphereCastManager_DEFINED) && !defined(IL2CPP_STRUCT_SphereCastManager_FWDDECL)
#include <Modloader/app/structs/SphereCastManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SphereCastManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
