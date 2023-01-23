#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionWithDuration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionWithDuration_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionWithDuration_DEFINED)
#include <Modloader/app/structs/ActionWithDuration__Fields.h>
#if defined(IL2CPP_STRUCT_ActionWithDuration__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionWithDuration_DEFINED
struct ActionWithDuration__Class;
struct ActionWithDuration {
    struct ActionWithDuration__Class* klass;
    MonitorData* monitor;
    struct ActionWithDuration__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionWithDuration_FWDDECL)
#define IL2CPP_STRUCT_ActionWithDuration_FWDDECL
#include <Modloader/app/structs/ActionWithDuration__Class.h>
#endif
#undef IL2CPP_STRUCT_ActionWithDuration_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionWithDuration_DEFINED) && !defined(IL2CPP_STRUCT_ActionWithDuration_FWDDECL)
#include <Modloader/app/structs/ActionWithDuration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionWithDuration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
