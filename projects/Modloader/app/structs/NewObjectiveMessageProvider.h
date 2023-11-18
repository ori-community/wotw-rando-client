#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NewObjectiveMessageProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NewObjectiveMessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewObjectiveMessageProvider_DEFINED)
#include <Modloader/app/structs/NewObjectiveMessageProvider__Fields.h>
#if defined(IL2CPP_STRUCT_NewObjectiveMessageProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_NewObjectiveMessageProvider_DEFINED
struct NewObjectiveMessageProvider__Class;
struct NewObjectiveMessageProvider {
    struct NewObjectiveMessageProvider__Class* klass;
    MonitorData* monitor;
    struct NewObjectiveMessageProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NewObjectiveMessageProvider_FWDDECL)
#define IL2CPP_STRUCT_NewObjectiveMessageProvider_FWDDECL
#include <Modloader/app/structs/NewObjectiveMessageProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_NewObjectiveMessageProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_NewObjectiveMessageProvider_DEFINED) && !defined(IL2CPP_STRUCT_NewObjectiveMessageProvider_FWDDECL)
#include <Modloader/app/structs/NewObjectiveMessageProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NewObjectiveMessageProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
