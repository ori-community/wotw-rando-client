#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageTextSpawner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageTextSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTextSpawner_DEFINED)
#include <Modloader/app/structs/DamageTextSpawner__Fields.h>
#if defined(IL2CPP_STRUCT_DamageTextSpawner__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageTextSpawner_DEFINED
struct DamageTextSpawner__Class;
struct DamageTextSpawner {
    struct DamageTextSpawner__Class* klass;
    MonitorData* monitor;
    struct DamageTextSpawner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageTextSpawner_FWDDECL)
#define IL2CPP_STRUCT_DamageTextSpawner_FWDDECL
#include <Modloader/app/structs/DamageTextSpawner__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageTextSpawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageTextSpawner_DEFINED) && !defined(IL2CPP_STRUCT_DamageTextSpawner_FWDDECL)
#include <Modloader/app/structs/DamageTextSpawner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageTextSpawner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
