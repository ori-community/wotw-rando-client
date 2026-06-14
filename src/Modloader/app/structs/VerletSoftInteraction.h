#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletSoftInteraction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletSoftInteraction_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletSoftInteraction_DEFINED)
#include <Modloader/app/structs/VerletSoftInteraction__Fields.h>
#if defined(IL2CPP_STRUCT_VerletSoftInteraction__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletSoftInteraction_DEFINED
struct VerletSoftInteraction__Class;
struct VerletSoftInteraction {
    struct VerletSoftInteraction__Class* klass;
    MonitorData* monitor;
    struct VerletSoftInteraction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletSoftInteraction_FWDDECL)
#define IL2CPP_STRUCT_VerletSoftInteraction_FWDDECL
#include <Modloader/app/structs/VerletSoftInteraction__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletSoftInteraction_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletSoftInteraction_DEFINED) && !defined(IL2CPP_STRUCT_VerletSoftInteraction_FWDDECL)
#include <Modloader/app/structs/VerletSoftInteraction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletSoftInteraction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
