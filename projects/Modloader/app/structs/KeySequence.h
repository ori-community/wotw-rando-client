#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeySequence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeySequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeySequence_DEFINED)
#include <Modloader/app/structs/KeySequence__Fields.h>
#if defined(IL2CPP_STRUCT_KeySequence__Fields_DEFINED)
#define IL2CPP_STRUCT_KeySequence_DEFINED
struct KeySequence__Class;
struct KeySequence {
    struct KeySequence__Class* klass;
    MonitorData* monitor;
    struct KeySequence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeySequence_FWDDECL)
#define IL2CPP_STRUCT_KeySequence_FWDDECL
#include <Modloader/app/structs/KeySequence__Class.h>
#endif
#undef IL2CPP_STRUCT_KeySequence_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeySequence_DEFINED) && !defined(IL2CPP_STRUCT_KeySequence_FWDDECL)
#include <Modloader/app/structs/KeySequence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeySequence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
