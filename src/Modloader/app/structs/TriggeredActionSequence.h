#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TriggeredActionSequence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TriggeredActionSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggeredActionSequence_DEFINED)
#include <Modloader/app/structs/TriggeredActionSequence__Fields.h>
#if defined(IL2CPP_STRUCT_TriggeredActionSequence__Fields_DEFINED)
#define IL2CPP_STRUCT_TriggeredActionSequence_DEFINED
struct TriggeredActionSequence__Class;
struct TriggeredActionSequence {
    struct TriggeredActionSequence__Class* klass;
    MonitorData* monitor;
    struct TriggeredActionSequence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TriggeredActionSequence_FWDDECL)
#define IL2CPP_STRUCT_TriggeredActionSequence_FWDDECL
#include <Modloader/app/structs/TriggeredActionSequence__Class.h>
#endif
#undef IL2CPP_STRUCT_TriggeredActionSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_TriggeredActionSequence_DEFINED) && !defined(IL2CPP_STRUCT_TriggeredActionSequence_FWDDECL)
#include <Modloader/app/structs/TriggeredActionSequence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TriggeredActionSequence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
