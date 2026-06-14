#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelayedRegex_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelayedRegex_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedRegex_DEFINED)
#include <Modloader/app/structs/DelayedRegex__Fields.h>
#if defined(IL2CPP_STRUCT_DelayedRegex__Fields_DEFINED)
#define IL2CPP_STRUCT_DelayedRegex_DEFINED
struct DelayedRegex__Class;
struct DelayedRegex {
    struct DelayedRegex__Class* klass;
    MonitorData* monitor;
    struct DelayedRegex__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelayedRegex_FWDDECL)
#define IL2CPP_STRUCT_DelayedRegex_FWDDECL
#include <Modloader/app/structs/DelayedRegex__Class.h>
#endif
#undef IL2CPP_STRUCT_DelayedRegex_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelayedRegex_DEFINED) && !defined(IL2CPP_STRUCT_DelayedRegex_FWDDECL)
#include <Modloader/app/structs/DelayedRegex.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelayedRegex.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
