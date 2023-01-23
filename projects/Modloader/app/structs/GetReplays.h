#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetReplays_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetReplays_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetReplays_DEFINED)
#include <Modloader/app/structs/GetReplays__Fields.h>
#if defined(IL2CPP_STRUCT_GetReplays__Fields_DEFINED)
#define IL2CPP_STRUCT_GetReplays_DEFINED
struct GetReplays__Class;
struct GetReplays {
    struct GetReplays__Class* klass;
    MonitorData* monitor;
    struct GetReplays__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetReplays_FWDDECL)
#define IL2CPP_STRUCT_GetReplays_FWDDECL
#include <Modloader/app/structs/GetReplays__Class.h>
#endif
#undef IL2CPP_STRUCT_GetReplays_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetReplays_DEFINED) && !defined(IL2CPP_STRUCT_GetReplays_FWDDECL)
#include <Modloader/app/structs/GetReplays.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetReplays.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
