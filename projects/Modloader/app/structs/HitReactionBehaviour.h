#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReactionBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReactionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionBehaviour_DEFINED)
#include <Modloader/app/structs/HitReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_HitReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HitReactionBehaviour_DEFINED
struct HitReactionBehaviour__Class;
struct HitReactionBehaviour {
    struct HitReactionBehaviour__Class* klass;
    MonitorData* monitor;
    struct HitReactionBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReactionBehaviour_FWDDECL)
#define IL2CPP_STRUCT_HitReactionBehaviour_FWDDECL
#include <Modloader/app/structs/HitReactionBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_HitReactionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_HitReactionBehaviour_FWDDECL)
#include <Modloader/app/structs/HitReactionBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReactionBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
