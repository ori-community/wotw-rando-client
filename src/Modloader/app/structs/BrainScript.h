#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrainScript_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrainScript_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrainScript_DEFINED)
#include <Modloader/app/structs/BrainScript__Fields.h>
#if defined(IL2CPP_STRUCT_BrainScript__Fields_DEFINED)
#define IL2CPP_STRUCT_BrainScript_DEFINED
struct BrainScript__Class;
struct BrainScript {
    struct BrainScript__Class* klass;
    MonitorData* monitor;
    struct BrainScript__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrainScript_FWDDECL)
#define IL2CPP_STRUCT_BrainScript_FWDDECL
#include <Modloader/app/structs/BrainScript__Class.h>
#endif
#undef IL2CPP_STRUCT_BrainScript_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrainScript_DEFINED) && !defined(IL2CPP_STRUCT_BrainScript_FWDDECL)
#include <Modloader/app/structs/BrainScript.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrainScript.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
