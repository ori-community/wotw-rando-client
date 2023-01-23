#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceFinishIcon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceFinishIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceFinishIcon_DEFINED)
#include <Modloader/app/structs/RaceFinishIcon__Fields.h>
#if defined(IL2CPP_STRUCT_RaceFinishIcon__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceFinishIcon_DEFINED
struct RaceFinishIcon__Class;
struct RaceFinishIcon {
    struct RaceFinishIcon__Class* klass;
    MonitorData* monitor;
    struct RaceFinishIcon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceFinishIcon_FWDDECL)
#define IL2CPP_STRUCT_RaceFinishIcon_FWDDECL
#include <Modloader/app/structs/RaceFinishIcon__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceFinishIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceFinishIcon_DEFINED) && !defined(IL2CPP_STRUCT_RaceFinishIcon_FWDDECL)
#include <Modloader/app/structs/RaceFinishIcon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceFinishIcon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
