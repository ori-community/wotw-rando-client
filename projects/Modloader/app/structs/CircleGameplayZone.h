#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CircleGameplayZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CircleGameplayZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CircleGameplayZone_DEFINED)
#include <Modloader/app/structs/CircleGameplayZone__Fields.h>
#if defined(IL2CPP_STRUCT_CircleGameplayZone__Fields_DEFINED)
#define IL2CPP_STRUCT_CircleGameplayZone_DEFINED
struct CircleGameplayZone__Class;
struct CircleGameplayZone {
    struct CircleGameplayZone__Class* klass;
    MonitorData* monitor;
    struct CircleGameplayZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CircleGameplayZone_FWDDECL)
#define IL2CPP_STRUCT_CircleGameplayZone_FWDDECL
#include <Modloader/app/structs/CircleGameplayZone__Class.h>
#endif
#undef IL2CPP_STRUCT_CircleGameplayZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_CircleGameplayZone_DEFINED) && !defined(IL2CPP_STRUCT_CircleGameplayZone_FWDDECL)
#include <Modloader/app/structs/CircleGameplayZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CircleGameplayZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
