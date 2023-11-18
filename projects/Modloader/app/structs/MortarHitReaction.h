#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarHitReaction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarHitReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarHitReaction_DEFINED)
#include <Modloader/app/structs/MortarHitReaction__Fields.h>
#if defined(IL2CPP_STRUCT_MortarHitReaction__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarHitReaction_DEFINED
struct MortarHitReaction__Class;
struct MortarHitReaction {
    struct MortarHitReaction__Class* klass;
    MonitorData* monitor;
    struct MortarHitReaction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarHitReaction_FWDDECL)
#define IL2CPP_STRUCT_MortarHitReaction_FWDDECL
#include <Modloader/app/structs/MortarHitReaction__Class.h>
#endif
#undef IL2CPP_STRUCT_MortarHitReaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarHitReaction_DEFINED) && !defined(IL2CPP_STRUCT_MortarHitReaction_FWDDECL)
#include <Modloader/app/structs/MortarHitReaction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarHitReaction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
