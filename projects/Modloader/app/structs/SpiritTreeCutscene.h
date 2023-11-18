#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritTreeCutscene_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritTreeCutscene_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritTreeCutscene_DEFINED)
#include <Modloader/app/structs/SpiritTreeCutscene__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritTreeCutscene__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritTreeCutscene_DEFINED
struct SpiritTreeCutscene__Class;
struct SpiritTreeCutscene {
    struct SpiritTreeCutscene__Class* klass;
    MonitorData* monitor;
    struct SpiritTreeCutscene__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritTreeCutscene_FWDDECL)
#define IL2CPP_STRUCT_SpiritTreeCutscene_FWDDECL
#include <Modloader/app/structs/SpiritTreeCutscene__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritTreeCutscene_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritTreeCutscene_DEFINED) && !defined(IL2CPP_STRUCT_SpiritTreeCutscene_FWDDECL)
#include <Modloader/app/structs/SpiritTreeCutscene.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritTreeCutscene.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
