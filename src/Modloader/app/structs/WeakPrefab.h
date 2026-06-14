#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeakPrefab_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeakPrefab_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeakPrefab_DEFINED)
#include <Modloader/app/structs/WeakPrefab__Fields.h>
#if defined(IL2CPP_STRUCT_WeakPrefab__Fields_DEFINED)
#define IL2CPP_STRUCT_WeakPrefab_DEFINED
struct WeakPrefab__Class;
struct WeakPrefab {
    struct WeakPrefab__Class* klass;
    MonitorData* monitor;
    struct WeakPrefab__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeakPrefab_FWDDECL)
#define IL2CPP_STRUCT_WeakPrefab_FWDDECL
#include <Modloader/app/structs/WeakPrefab__Class.h>
#endif
#undef IL2CPP_STRUCT_WeakPrefab_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeakPrefab_DEFINED) && !defined(IL2CPP_STRUCT_WeakPrefab_FWDDECL)
#include <Modloader/app/structs/WeakPrefab.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeakPrefab.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
