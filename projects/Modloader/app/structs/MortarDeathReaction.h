#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarDeathReaction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarDeathReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarDeathReaction_DEFINED)
#include <Modloader/app/structs/MortarDeathReaction__Fields.h>
#if defined(IL2CPP_STRUCT_MortarDeathReaction__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarDeathReaction_DEFINED
struct MortarDeathReaction__Class;
struct MortarDeathReaction {
    struct MortarDeathReaction__Class* klass;
    MonitorData* monitor;
    struct MortarDeathReaction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarDeathReaction_FWDDECL)
#define IL2CPP_STRUCT_MortarDeathReaction_FWDDECL
#include <Modloader/app/structs/MortarDeathReaction__Class.h>
#endif
#undef IL2CPP_STRUCT_MortarDeathReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarDeathReaction_DEFINED) && !defined(IL2CPP_STRUCT_MortarDeathReaction_FWDDECL)
#include <Modloader/app/structs/MortarDeathReaction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarDeathReaction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
