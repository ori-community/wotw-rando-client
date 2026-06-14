#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ResetTriggerOnCheckpoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ResetTriggerOnCheckpoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResetTriggerOnCheckpoint_DEFINED)
#include <Modloader/app/structs/ResetTriggerOnCheckpoint__Fields.h>
#if defined(IL2CPP_STRUCT_ResetTriggerOnCheckpoint__Fields_DEFINED)
#define IL2CPP_STRUCT_ResetTriggerOnCheckpoint_DEFINED
struct ResetTriggerOnCheckpoint__Class;
struct ResetTriggerOnCheckpoint {
    struct ResetTriggerOnCheckpoint__Class* klass;
    MonitorData* monitor;
    struct ResetTriggerOnCheckpoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ResetTriggerOnCheckpoint_FWDDECL)
#define IL2CPP_STRUCT_ResetTriggerOnCheckpoint_FWDDECL
#include <Modloader/app/structs/ResetTriggerOnCheckpoint__Class.h>
#endif
#undef IL2CPP_STRUCT_ResetTriggerOnCheckpoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_ResetTriggerOnCheckpoint_DEFINED) && !defined(IL2CPP_STRUCT_ResetTriggerOnCheckpoint_FWDDECL)
#include <Modloader/app/structs/ResetTriggerOnCheckpoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ResetTriggerOnCheckpoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
