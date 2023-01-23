#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchSeriesPuzzle_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchSeriesPuzzle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchSeriesPuzzle_DEFINED)
#include <Modloader/app/structs/SwitchSeriesPuzzle__Fields.h>
#if defined(IL2CPP_STRUCT_SwitchSeriesPuzzle__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchSeriesPuzzle_DEFINED
struct SwitchSeriesPuzzle__Class;
struct SwitchSeriesPuzzle {
    struct SwitchSeriesPuzzle__Class* klass;
    MonitorData* monitor;
    struct SwitchSeriesPuzzle__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchSeriesPuzzle_FWDDECL)
#define IL2CPP_STRUCT_SwitchSeriesPuzzle_FWDDECL
#include <Modloader/app/structs/SwitchSeriesPuzzle__Class.h>
#endif
#undef IL2CPP_STRUCT_SwitchSeriesPuzzle_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchSeriesPuzzle_DEFINED) && !defined(IL2CPP_STRUCT_SwitchSeriesPuzzle_FWDDECL)
#include <Modloader/app/structs/SwitchSeriesPuzzle.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchSeriesPuzzle.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
