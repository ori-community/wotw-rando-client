#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleverMenuOptionsList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleverMenuOptionsList_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuOptionsList_DEFINED)
#include <Modloader/app/structs/CleverMenuOptionsList__Fields.h>
#if defined(IL2CPP_STRUCT_CleverMenuOptionsList__Fields_DEFINED)
#define IL2CPP_STRUCT_CleverMenuOptionsList_DEFINED
struct CleverMenuOptionsList__Class;
struct CleverMenuOptionsList {
    struct CleverMenuOptionsList__Class* klass;
    MonitorData* monitor;
    struct CleverMenuOptionsList__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CleverMenuOptionsList_FWDDECL)
#define IL2CPP_STRUCT_CleverMenuOptionsList_FWDDECL
#include <Modloader/app/structs/CleverMenuOptionsList__Class.h>
#endif
#undef IL2CPP_STRUCT_CleverMenuOptionsList_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuOptionsList_DEFINED) && !defined(IL2CPP_STRUCT_CleverMenuOptionsList_FWDDECL)
#include <Modloader/app/structs/CleverMenuOptionsList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleverMenuOptionsList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
