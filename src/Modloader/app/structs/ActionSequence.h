#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionSequence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionSequence_DEFINED)
#include <Modloader/app/structs/ActionSequence__Fields.h>
#if defined(IL2CPP_STRUCT_ActionSequence__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionSequence_DEFINED
struct ActionSequence__Class;
struct ActionSequence {
    struct ActionSequence__Class* klass;
    MonitorData* monitor;
    struct ActionSequence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionSequence_FWDDECL)
#define IL2CPP_STRUCT_ActionSequence_FWDDECL
#include <Modloader/app/structs/ActionSequence__Class.h>
#endif
#undef IL2CPP_STRUCT_ActionSequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionSequence_DEFINED) && !defined(IL2CPP_STRUCT_ActionSequence_FWDDECL)
#include <Modloader/app/structs/ActionSequence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionSequence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
