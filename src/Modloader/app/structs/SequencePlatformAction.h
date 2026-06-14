#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SequencePlatformAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SequencePlatformAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatformAction_DEFINED)
#include <Modloader/app/structs/SequencePlatformAction__Fields.h>
#if defined(IL2CPP_STRUCT_SequencePlatformAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SequencePlatformAction_DEFINED
struct SequencePlatformAction__Class;
struct SequencePlatformAction {
    struct SequencePlatformAction__Class* klass;
    MonitorData* monitor;
    struct SequencePlatformAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SequencePlatformAction_FWDDECL)
#define IL2CPP_STRUCT_SequencePlatformAction_FWDDECL
#include <Modloader/app/structs/SequencePlatformAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SequencePlatformAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SequencePlatformAction_DEFINED) && !defined(IL2CPP_STRUCT_SequencePlatformAction_FWDDECL)
#include <Modloader/app/structs/SequencePlatformAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SequencePlatformAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
