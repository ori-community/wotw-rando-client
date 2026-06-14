#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Glitch_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Glitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_Glitch_DEFINED)
#include <Modloader/app/structs/Glitch__Fields.h>
#if defined(IL2CPP_STRUCT_Glitch__Fields_DEFINED)
#define IL2CPP_STRUCT_Glitch_DEFINED
struct Glitch__Class;
struct Glitch {
    struct Glitch__Class* klass;
    MonitorData* monitor;
    struct Glitch__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Glitch_FWDDECL)
#define IL2CPP_STRUCT_Glitch_FWDDECL
#include <Modloader/app/structs/Glitch__Class.h>
#endif
#undef IL2CPP_STRUCT_Glitch_INITIALIZING
#if !defined(IL2CPP_STRUCT_Glitch_DEFINED) && !defined(IL2CPP_STRUCT_Glitch_FWDDECL)
#include <Modloader/app/structs/Glitch.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Glitch.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
