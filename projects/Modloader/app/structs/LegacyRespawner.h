#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyRespawner_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyRespawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyRespawner_DEFINED)
#include <Modloader/app/structs/LegacyRespawner__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyRespawner__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyRespawner_DEFINED
struct LegacyRespawner__Class;
struct LegacyRespawner {
    struct LegacyRespawner__Class* klass;
    MonitorData* monitor;
    struct LegacyRespawner__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyRespawner_FWDDECL)
#define IL2CPP_STRUCT_LegacyRespawner_FWDDECL
#include <Modloader/app/structs/LegacyRespawner__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyRespawner_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyRespawner_DEFINED) && !defined(IL2CPP_STRUCT_LegacyRespawner_FWDDECL)
#include <Modloader/app/structs/LegacyRespawner.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyRespawner.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
