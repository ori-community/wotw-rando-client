#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkipCutscene_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkipCutscene_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkipCutscene_DEFINED)
#include <Modloader/app/structs/SkipCutscene__Fields.h>
#if defined(IL2CPP_STRUCT_SkipCutscene__Fields_DEFINED)
#define IL2CPP_STRUCT_SkipCutscene_DEFINED
struct SkipCutscene__Class;
struct SkipCutscene {
    struct SkipCutscene__Class* klass;
    MonitorData* monitor;
    struct SkipCutscene__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkipCutscene_FWDDECL)
#define IL2CPP_STRUCT_SkipCutscene_FWDDECL
#include <Modloader/app/structs/SkipCutscene__Class.h>
#endif
#undef IL2CPP_STRUCT_SkipCutscene_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkipCutscene_DEFINED) && !defined(IL2CPP_STRUCT_SkipCutscene_FWDDECL)
#include <Modloader/app/structs/SkipCutscene.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkipCutscene.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
