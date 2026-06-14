#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrushPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrushPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrushPlayer_DEFINED)
#include <Modloader/app/structs/CrushPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_CrushPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_CrushPlayer_DEFINED
struct CrushPlayer__Class;
struct CrushPlayer {
    struct CrushPlayer__Class* klass;
    MonitorData* monitor;
    struct CrushPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrushPlayer_FWDDECL)
#define IL2CPP_STRUCT_CrushPlayer_FWDDECL
#include <Modloader/app/structs/CrushPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_CrushPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrushPlayer_DEFINED) && !defined(IL2CPP_STRUCT_CrushPlayer_FWDDECL)
#include <Modloader/app/structs/CrushPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrushPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
