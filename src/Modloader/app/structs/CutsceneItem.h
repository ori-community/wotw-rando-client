#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CutsceneItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CutsceneItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneItem_DEFINED)
#include <Modloader/app/structs/CutsceneItem__Fields.h>
#if defined(IL2CPP_STRUCT_CutsceneItem__Fields_DEFINED)
#define IL2CPP_STRUCT_CutsceneItem_DEFINED
struct CutsceneItem__Class;
struct CutsceneItem {
    struct CutsceneItem__Class* klass;
    MonitorData* monitor;
    struct CutsceneItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CutsceneItem_FWDDECL)
#define IL2CPP_STRUCT_CutsceneItem_FWDDECL
#include <Modloader/app/structs/CutsceneItem__Class.h>
#endif
#undef IL2CPP_STRUCT_CutsceneItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_CutsceneItem_DEFINED) && !defined(IL2CPP_STRUCT_CutsceneItem_FWDDECL)
#include <Modloader/app/structs/CutsceneItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CutsceneItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
