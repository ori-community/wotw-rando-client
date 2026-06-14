#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Portal_AssistConfig_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Portal_AssistConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_Portal_AssistConfig_DEFINED)
#include <Modloader/app/structs/Portal_AssistConfig__Fields.h>
#if defined(IL2CPP_STRUCT_Portal_AssistConfig__Fields_DEFINED)
#define IL2CPP_STRUCT_Portal_AssistConfig_DEFINED
struct Portal_AssistConfig__Class;
struct Portal_AssistConfig {
    struct Portal_AssistConfig__Class* klass;
    MonitorData* monitor;
    struct Portal_AssistConfig__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Portal_AssistConfig_FWDDECL)
#define IL2CPP_STRUCT_Portal_AssistConfig_FWDDECL
#include <Modloader/app/structs/Portal_AssistConfig__Class.h>
#endif
#undef IL2CPP_STRUCT_Portal_AssistConfig_INITIALIZING
#if !defined(IL2CPP_STRUCT_Portal_AssistConfig_DEFINED) && !defined(IL2CPP_STRUCT_Portal_AssistConfig_FWDDECL)
#include <Modloader/app/structs/Portal_AssistConfig.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Portal_AssistConfig.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
