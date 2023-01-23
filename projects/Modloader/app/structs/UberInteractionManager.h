#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager_DEFINED)
#include <Modloader/app/structs/UberInteractionManager__Fields.h>
#if defined(IL2CPP_STRUCT_UberInteractionManager__Fields_DEFINED)
#define IL2CPP_STRUCT_UberInteractionManager_DEFINED
struct UberInteractionManager__Class;
struct UberInteractionManager {
    struct UberInteractionManager__Class* klass;
    MonitorData* monitor;
    struct UberInteractionManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionManager_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionManager_FWDDECL
#include <Modloader/app/structs/UberInteractionManager__Class.h>
#endif
#undef IL2CPP_STRUCT_UberInteractionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionManager_FWDDECL)
#include <Modloader/app/structs/UberInteractionManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
