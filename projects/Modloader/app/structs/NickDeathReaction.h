#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NickDeathReaction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NickDeathReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NickDeathReaction_DEFINED)
#include <Modloader/app/structs/NickDeathReaction__Fields.h>
#if defined(IL2CPP_STRUCT_NickDeathReaction__Fields_DEFINED)
#define IL2CPP_STRUCT_NickDeathReaction_DEFINED
struct NickDeathReaction__Class;
struct NickDeathReaction {
    struct NickDeathReaction__Class* klass;
    MonitorData* monitor;
    struct NickDeathReaction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NickDeathReaction_FWDDECL)
#define IL2CPP_STRUCT_NickDeathReaction_FWDDECL
#include <Modloader/app/structs/NickDeathReaction__Class.h>
#endif
#undef IL2CPP_STRUCT_NickDeathReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_NickDeathReaction_DEFINED) && !defined(IL2CPP_STRUCT_NickDeathReaction_FWDDECL)
#include <Modloader/app/structs/NickDeathReaction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NickDeathReaction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
