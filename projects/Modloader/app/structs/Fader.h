#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Fader_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Fader_INITIALIZING
#if !defined(IL2CPP_STRUCT_Fader_DEFINED)
#include <Modloader/app/structs/Fader__Fields.h>
#if defined(IL2CPP_STRUCT_Fader__Fields_DEFINED)
#define IL2CPP_STRUCT_Fader_DEFINED
struct Fader__Class;
struct Fader {
    struct Fader__Class* klass;
    MonitorData* monitor;
    struct Fader__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Fader_FWDDECL)
#define IL2CPP_STRUCT_Fader_FWDDECL
#include <Modloader/app/structs/Fader__Class.h>
#endif
#undef IL2CPP_STRUCT_Fader_INITIALIZING
#if !defined(IL2CPP_STRUCT_Fader_DEFINED) && !defined(IL2CPP_STRUCT_Fader_FWDDECL)
#include <Modloader/app/structs/Fader.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Fader.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
