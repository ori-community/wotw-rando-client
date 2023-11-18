#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CapsuleCastManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CapsuleCastManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_CapsuleCastManager_DEFINED)
#include <Modloader/app/structs/CapsuleCastManager__Fields.h>
#if defined(IL2CPP_STRUCT_CapsuleCastManager__Fields_DEFINED)
#define IL2CPP_STRUCT_CapsuleCastManager_DEFINED
struct CapsuleCastManager__Class;
struct CapsuleCastManager {
    struct CapsuleCastManager__Class* klass;
    MonitorData* monitor;
    struct CapsuleCastManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CapsuleCastManager_FWDDECL)
#define IL2CPP_STRUCT_CapsuleCastManager_FWDDECL
#include <Modloader/app/structs/CapsuleCastManager__Class.h>
#endif
#undef IL2CPP_STRUCT_CapsuleCastManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_CapsuleCastManager_DEFINED) && !defined(IL2CPP_STRUCT_CapsuleCastManager_FWDDECL)
#include <Modloader/app/structs/CapsuleCastManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CapsuleCastManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
