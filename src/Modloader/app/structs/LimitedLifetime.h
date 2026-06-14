#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LimitedLifetime_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LimitedLifetime_INITIALIZING
#if !defined(IL2CPP_STRUCT_LimitedLifetime_DEFINED)
#include <Modloader/app/structs/LimitedLifetime__Fields.h>
#if defined(IL2CPP_STRUCT_LimitedLifetime__Fields_DEFINED)
#define IL2CPP_STRUCT_LimitedLifetime_DEFINED
struct LimitedLifetime__Class;
struct LimitedLifetime {
    struct LimitedLifetime__Class* klass;
    MonitorData* monitor;
    struct LimitedLifetime__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LimitedLifetime_FWDDECL)
#define IL2CPP_STRUCT_LimitedLifetime_FWDDECL
#include <Modloader/app/structs/LimitedLifetime__Class.h>
#endif
#undef IL2CPP_STRUCT_LimitedLifetime_INITIALIZING
#if !defined(IL2CPP_STRUCT_LimitedLifetime_DEFINED) && !defined(IL2CPP_STRUCT_LimitedLifetime_FWDDECL)
#include <Modloader/app/structs/LimitedLifetime.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LimitedLifetime.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
