#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrogGroupSpawner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrogGroupSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogGroupSpawner_DEFINED)
#include <Modloader/app/structs/FrogGroupSpawner__Fields.h>
#if defined(IL2CPP_STRUCT_FrogGroupSpawner__Fields_DEFINED)
#define IL2CPP_STRUCT_FrogGroupSpawner_DEFINED
struct FrogGroupSpawner__Class;
struct FrogGroupSpawner {
    struct FrogGroupSpawner__Class* klass;
    MonitorData* monitor;
    struct FrogGroupSpawner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrogGroupSpawner_FWDDECL)
#define IL2CPP_STRUCT_FrogGroupSpawner_FWDDECL
#include <Modloader/app/structs/FrogGroupSpawner__Class.h>
#endif
#undef IL2CPP_STRUCT_FrogGroupSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrogGroupSpawner_DEFINED) && !defined(IL2CPP_STRUCT_FrogGroupSpawner_FWDDECL)
#include <Modloader/app/structs/FrogGroupSpawner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrogGroupSpawner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
