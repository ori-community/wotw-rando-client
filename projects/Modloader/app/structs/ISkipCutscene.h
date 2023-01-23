#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISkipCutscene_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISkipCutscene_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISkipCutscene_DEFINED)
#define IL2CPP_STRUCT_ISkipCutscene_DEFINED
struct ISkipCutscene__Class;
struct ISkipCutscene {
    struct ISkipCutscene__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISkipCutscene_FWDDECL)
#define IL2CPP_STRUCT_ISkipCutscene_FWDDECL
#include <Modloader/app/structs/ISkipCutscene__Class.h>
#endif
#undef IL2CPP_STRUCT_ISkipCutscene_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISkipCutscene_DEFINED) && !defined(IL2CPP_STRUCT_ISkipCutscene_FWDDECL)
#include <Modloader/app/structs/ISkipCutscene.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISkipCutscene.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
