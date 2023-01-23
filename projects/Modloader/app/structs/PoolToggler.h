#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PoolToggler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PoolToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolToggler_DEFINED)
#include <Modloader/app/structs/PoolToggler__Fields.h>
#if defined(IL2CPP_STRUCT_PoolToggler__Fields_DEFINED)
#define IL2CPP_STRUCT_PoolToggler_DEFINED
struct PoolToggler__Class;
struct PoolToggler {
    struct PoolToggler__Class* klass;
    MonitorData* monitor;
    struct PoolToggler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PoolToggler_FWDDECL)
#define IL2CPP_STRUCT_PoolToggler_FWDDECL
#include <Modloader/app/structs/PoolToggler__Class.h>
#endif
#undef IL2CPP_STRUCT_PoolToggler_INITIALIZING
#if !defined(IL2CPP_STRUCT_PoolToggler_DEFINED) && !defined(IL2CPP_STRUCT_PoolToggler_FWDDECL)
#include <Modloader/app/structs/PoolToggler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PoolToggler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
