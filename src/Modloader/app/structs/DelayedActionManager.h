#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayedActionManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayedActionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedActionManager_DEFINED)
#include <Modloader/app/structs/DelayedActionManager__Fields.h>
#if defined(IL2CPP_STRUCT_DelayedActionManager__Fields_DEFINED)
#define IL2CPP_STRUCT_DelayedActionManager_DEFINED
struct DelayedActionManager__Class;
struct DelayedActionManager {
    struct DelayedActionManager__Class* klass;
    MonitorData* monitor;
    struct DelayedActionManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelayedActionManager_FWDDECL)
#define IL2CPP_STRUCT_DelayedActionManager_FWDDECL
#include <Modloader/app/structs/DelayedActionManager__Class.h>
#endif
#undef IL2CPP_STRUCT_DelayedActionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedActionManager_DEFINED) && !defined(IL2CPP_STRUCT_DelayedActionManager_FWDDECL)
#include <Modloader/app/structs/DelayedActionManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayedActionManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
