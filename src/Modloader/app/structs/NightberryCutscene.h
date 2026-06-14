#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NightberryCutscene_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NightberryCutscene_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightberryCutscene_DEFINED)
#include <Modloader/app/structs/NightberryCutscene__Fields.h>
#if defined(IL2CPP_STRUCT_NightberryCutscene__Fields_DEFINED)
#define IL2CPP_STRUCT_NightberryCutscene_DEFINED
struct NightberryCutscene__Class;
struct NightberryCutscene {
    struct NightberryCutscene__Class* klass;
    MonitorData* monitor;
    struct NightberryCutscene__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NightberryCutscene_FWDDECL)
#define IL2CPP_STRUCT_NightberryCutscene_FWDDECL
#include <Modloader/app/structs/NightberryCutscene__Class.h>
#endif
#undef IL2CPP_STRUCT_NightberryCutscene_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightberryCutscene_DEFINED) && !defined(IL2CPP_STRUCT_NightberryCutscene_FWDDECL)
#include <Modloader/app/structs/NightberryCutscene.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NightberryCutscene.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
