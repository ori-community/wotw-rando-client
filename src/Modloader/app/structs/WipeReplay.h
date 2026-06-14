#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WipeReplay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WipeReplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_WipeReplay_DEFINED)
#include <Modloader/app/structs/WipeReplay__Fields.h>
#if defined(IL2CPP_STRUCT_WipeReplay__Fields_DEFINED)
#define IL2CPP_STRUCT_WipeReplay_DEFINED
struct WipeReplay__Class;
struct WipeReplay {
    struct WipeReplay__Class* klass;
    MonitorData* monitor;
    struct WipeReplay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WipeReplay_FWDDECL)
#define IL2CPP_STRUCT_WipeReplay_FWDDECL
#include <Modloader/app/structs/WipeReplay__Class.h>
#endif
#undef IL2CPP_STRUCT_WipeReplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_WipeReplay_DEFINED) && !defined(IL2CPP_STRUCT_WipeReplay_FWDDECL)
#include <Modloader/app/structs/WipeReplay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WipeReplay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
