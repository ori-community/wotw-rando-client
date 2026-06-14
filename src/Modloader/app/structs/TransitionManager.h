#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransitionManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransitionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransitionManager_DEFINED)
#include <Modloader/app/structs/TransitionManager__Fields.h>
#if defined(IL2CPP_STRUCT_TransitionManager__Fields_DEFINED)
#define IL2CPP_STRUCT_TransitionManager_DEFINED
struct TransitionManager__Class;
struct TransitionManager {
    struct TransitionManager__Class* klass;
    MonitorData* monitor;
    struct TransitionManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransitionManager_FWDDECL)
#define IL2CPP_STRUCT_TransitionManager_FWDDECL
#include <Modloader/app/structs/TransitionManager__Class.h>
#endif
#undef IL2CPP_STRUCT_TransitionManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransitionManager_DEFINED) && !defined(IL2CPP_STRUCT_TransitionManager_FWDDECL)
#include <Modloader/app/structs/TransitionManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransitionManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
