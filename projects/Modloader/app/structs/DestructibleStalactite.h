#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestructibleStalactite_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestructibleStalactite_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestructibleStalactite_DEFINED)
#include <Modloader/app/structs/DestructibleStalactite__Fields.h>
#if defined(IL2CPP_STRUCT_DestructibleStalactite__Fields_DEFINED)
#define IL2CPP_STRUCT_DestructibleStalactite_DEFINED
struct DestructibleStalactite__Class;
struct DestructibleStalactite {
    struct DestructibleStalactite__Class* klass;
    MonitorData* monitor;
    struct DestructibleStalactite__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DestructibleStalactite_FWDDECL)
#define IL2CPP_STRUCT_DestructibleStalactite_FWDDECL
#include <Modloader/app/structs/DestructibleStalactite__Class.h>
#endif
#undef IL2CPP_STRUCT_DestructibleStalactite_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestructibleStalactite_DEFINED) && !defined(IL2CPP_STRUCT_DestructibleStalactite_FWDDECL)
#include <Modloader/app/structs/DestructibleStalactite.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestructibleStalactite.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
