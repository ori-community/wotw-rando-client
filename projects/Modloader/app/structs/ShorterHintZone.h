#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShorterHintZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShorterHintZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShorterHintZone_DEFINED)
#include <Modloader/app/structs/ShorterHintZone__Fields.h>
#if defined(IL2CPP_STRUCT_ShorterHintZone__Fields_DEFINED)
#define IL2CPP_STRUCT_ShorterHintZone_DEFINED
struct ShorterHintZone__Class;
struct ShorterHintZone {
    struct ShorterHintZone__Class* klass;
    MonitorData* monitor;
    struct ShorterHintZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShorterHintZone_FWDDECL)
#define IL2CPP_STRUCT_ShorterHintZone_FWDDECL
#include <Modloader/app/structs/ShorterHintZone__Class.h>
#endif
#undef IL2CPP_STRUCT_ShorterHintZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShorterHintZone_DEFINED) && !defined(IL2CPP_STRUCT_ShorterHintZone_FWDDECL)
#include <Modloader/app/structs/ShorterHintZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShorterHintZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
