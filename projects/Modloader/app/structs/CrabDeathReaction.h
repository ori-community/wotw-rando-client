#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrabDeathReaction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrabDeathReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabDeathReaction_DEFINED)
#include <Modloader/app/structs/CrabDeathReaction__Fields.h>
#if defined(IL2CPP_STRUCT_CrabDeathReaction__Fields_DEFINED)
#define IL2CPP_STRUCT_CrabDeathReaction_DEFINED
struct CrabDeathReaction__Class;
struct CrabDeathReaction {
    struct CrabDeathReaction__Class* klass;
    MonitorData* monitor;
    struct CrabDeathReaction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrabDeathReaction_FWDDECL)
#define IL2CPP_STRUCT_CrabDeathReaction_FWDDECL
#include <Modloader/app/structs/CrabDeathReaction__Class.h>
#endif
#undef IL2CPP_STRUCT_CrabDeathReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabDeathReaction_DEFINED) && !defined(IL2CPP_STRUCT_CrabDeathReaction_FWDDECL)
#include <Modloader/app/structs/CrabDeathReaction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrabDeathReaction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
