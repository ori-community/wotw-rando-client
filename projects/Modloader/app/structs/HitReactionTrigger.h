#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReactionTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReactionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionTrigger_DEFINED)
#include <Modloader/app/structs/HitReactionTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_HitReactionTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_HitReactionTrigger_DEFINED
struct HitReactionTrigger__Class;
struct HitReactionTrigger {
    struct HitReactionTrigger__Class* klass;
    MonitorData* monitor;
    struct HitReactionTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReactionTrigger_FWDDECL)
#define IL2CPP_STRUCT_HitReactionTrigger_FWDDECL
#include <Modloader/app/structs/HitReactionTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_HitReactionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionTrigger_DEFINED) && !defined(IL2CPP_STRUCT_HitReactionTrigger_FWDDECL)
#include <Modloader/app/structs/HitReactionTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReactionTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
