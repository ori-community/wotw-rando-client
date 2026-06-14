#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SharedStateProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SharedStateProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedStateProvider_DEFINED)
#include <Modloader/app/structs/SharedStateProvider__Fields.h>
#if defined(IL2CPP_STRUCT_SharedStateProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_SharedStateProvider_DEFINED
struct SharedStateProvider__Class;
struct SharedStateProvider {
    struct SharedStateProvider__Class* klass;
    MonitorData* monitor;
    struct SharedStateProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SharedStateProvider_FWDDECL)
#define IL2CPP_STRUCT_SharedStateProvider_FWDDECL
#include <Modloader/app/structs/SharedStateProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_SharedStateProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_SharedStateProvider_DEFINED) && !defined(IL2CPP_STRUCT_SharedStateProvider_FWDDECL)
#include <Modloader/app/structs/SharedStateProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SharedStateProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
