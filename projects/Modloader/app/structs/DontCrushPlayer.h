#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DontCrushPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DontCrushPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DontCrushPlayer_DEFINED)
#include <Modloader/app/structs/DontCrushPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_DontCrushPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_DontCrushPlayer_DEFINED
struct DontCrushPlayer__Class;
struct DontCrushPlayer {
    struct DontCrushPlayer__Class* klass;
    MonitorData* monitor;
    struct DontCrushPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DontCrushPlayer_FWDDECL)
#define IL2CPP_STRUCT_DontCrushPlayer_FWDDECL
#include <Modloader/app/structs/DontCrushPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_DontCrushPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DontCrushPlayer_DEFINED) && !defined(IL2CPP_STRUCT_DontCrushPlayer_FWDDECL)
#include <Modloader/app/structs/DontCrushPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DontCrushPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
