#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishEnemySounds_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishEnemySounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemySounds_DEFINED)
#include <Modloader/app/structs/FishEnemySounds__Fields.h>
#if defined(IL2CPP_STRUCT_FishEnemySounds__Fields_DEFINED)
#define IL2CPP_STRUCT_FishEnemySounds_DEFINED
struct FishEnemySounds__Class;
struct FishEnemySounds {
    struct FishEnemySounds__Class* klass;
    MonitorData* monitor;
    struct FishEnemySounds__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishEnemySounds_FWDDECL)
#define IL2CPP_STRUCT_FishEnemySounds_FWDDECL
#include <Modloader/app/structs/FishEnemySounds__Class.h>
#endif
#undef IL2CPP_STRUCT_FishEnemySounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemySounds_DEFINED) && !defined(IL2CPP_STRUCT_FishEnemySounds_FWDDECL)
#include <Modloader/app/structs/FishEnemySounds.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishEnemySounds.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
