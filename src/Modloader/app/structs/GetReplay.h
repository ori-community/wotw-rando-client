#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetReplay_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetReplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetReplay_DEFINED)
#include <Modloader/app/structs/GetReplay__Fields.h>
#if defined(IL2CPP_STRUCT_GetReplay__Fields_DEFINED)
#define IL2CPP_STRUCT_GetReplay_DEFINED
struct GetReplay__Class;
struct GetReplay {
    struct GetReplay__Class* klass;
    MonitorData* monitor;
    struct GetReplay__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetReplay_FWDDECL)
#define IL2CPP_STRUCT_GetReplay_FWDDECL
#include <Modloader/app/structs/GetReplay__Class.h>
#endif
#undef IL2CPP_STRUCT_GetReplay_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetReplay_DEFINED) && !defined(IL2CPP_STRUCT_GetReplay_FWDDECL)
#include <Modloader/app/structs/GetReplay.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetReplay.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
