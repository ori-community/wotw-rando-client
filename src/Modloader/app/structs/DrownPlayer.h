#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DrownPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DrownPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrownPlayer_DEFINED)
#include <Modloader/app/structs/DrownPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_DrownPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_DrownPlayer_DEFINED
struct DrownPlayer__Class;
struct DrownPlayer {
    struct DrownPlayer__Class* klass;
    MonitorData* monitor;
    struct DrownPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DrownPlayer_FWDDECL)
#define IL2CPP_STRUCT_DrownPlayer_FWDDECL
#include <Modloader/app/structs/DrownPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_DrownPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DrownPlayer_DEFINED) && !defined(IL2CPP_STRUCT_DrownPlayer_FWDDECL)
#include <Modloader/app/structs/DrownPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DrownPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
