#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StickToMovingPlatforms_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StickToMovingPlatforms_INITIALIZING
#if !defined(IL2CPP_STRUCT_StickToMovingPlatforms_DEFINED)
#include <Modloader/app/structs/StickToMovingPlatforms__Fields.h>
#if defined(IL2CPP_STRUCT_StickToMovingPlatforms__Fields_DEFINED)
#define IL2CPP_STRUCT_StickToMovingPlatforms_DEFINED
struct StickToMovingPlatforms__Class;
struct StickToMovingPlatforms {
    struct StickToMovingPlatforms__Class* klass;
    MonitorData* monitor;
    struct StickToMovingPlatforms__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StickToMovingPlatforms_FWDDECL)
#define IL2CPP_STRUCT_StickToMovingPlatforms_FWDDECL
#include <Modloader/app/structs/StickToMovingPlatforms__Class.h>
#endif
#undef IL2CPP_STRUCT_StickToMovingPlatforms_INITIALIZING
#if !defined(IL2CPP_STRUCT_StickToMovingPlatforms_DEFINED) && !defined(IL2CPP_STRUCT_StickToMovingPlatforms_FWDDECL)
#include <Modloader/app/structs/StickToMovingPlatforms.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StickToMovingPlatforms.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
