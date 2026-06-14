#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnitySynchronizationContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnitySynchronizationContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnitySynchronizationContext_DEFINED)
#include <Modloader/app/structs/UnitySynchronizationContext__Fields.h>
#if defined(IL2CPP_STRUCT_UnitySynchronizationContext__Fields_DEFINED)
#define IL2CPP_STRUCT_UnitySynchronizationContext_DEFINED
struct UnitySynchronizationContext__Class;
struct UnitySynchronizationContext {
    struct UnitySynchronizationContext__Class* klass;
    MonitorData* monitor;
    struct UnitySynchronizationContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnitySynchronizationContext_FWDDECL)
#define IL2CPP_STRUCT_UnitySynchronizationContext_FWDDECL
#include <Modloader/app/structs/UnitySynchronizationContext__Class.h>
#endif
#undef IL2CPP_STRUCT_UnitySynchronizationContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnitySynchronizationContext_DEFINED) && !defined(IL2CPP_STRUCT_UnitySynchronizationContext_FWDDECL)
#include <Modloader/app/structs/UnitySynchronizationContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnitySynchronizationContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
