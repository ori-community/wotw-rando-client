#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericRegularEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericRegularEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericRegularEvent_DEFINED)
#include <Modloader/app/structs/GenericRegularEvent__Fields.h>
#if defined(IL2CPP_STRUCT_GenericRegularEvent__Fields_DEFINED)
#define IL2CPP_STRUCT_GenericRegularEvent_DEFINED
struct GenericRegularEvent__Class;
struct GenericRegularEvent {
    struct GenericRegularEvent__Class* klass;
    MonitorData* monitor;
    struct GenericRegularEvent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericRegularEvent_FWDDECL)
#define IL2CPP_STRUCT_GenericRegularEvent_FWDDECL
#include <Modloader/app/structs/GenericRegularEvent__Class.h>
#endif
#undef IL2CPP_STRUCT_GenericRegularEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericRegularEvent_DEFINED) && !defined(IL2CPP_STRUCT_GenericRegularEvent_FWDDECL)
#include <Modloader/app/structs/GenericRegularEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericRegularEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
