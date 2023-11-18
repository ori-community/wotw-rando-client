#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenOverlay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenOverlay_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenOverlay_DEFINED)
#include <Modloader/app/structs/ScreenOverlay__Fields.h>
#if defined(IL2CPP_STRUCT_ScreenOverlay__Fields_DEFINED)
#define IL2CPP_STRUCT_ScreenOverlay_DEFINED
struct ScreenOverlay__Class;
struct ScreenOverlay {
    struct ScreenOverlay__Class* klass;
    MonitorData* monitor;
    struct ScreenOverlay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenOverlay_FWDDECL)
#define IL2CPP_STRUCT_ScreenOverlay_FWDDECL
#include <Modloader/app/structs/ScreenOverlay__Class.h>
#endif
#undef IL2CPP_STRUCT_ScreenOverlay_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenOverlay_DEFINED) && !defined(IL2CPP_STRUCT_ScreenOverlay_FWDDECL)
#include <Modloader/app/structs/ScreenOverlay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenOverlay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
