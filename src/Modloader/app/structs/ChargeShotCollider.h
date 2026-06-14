#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChargeShotCollider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChargeShotCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargeShotCollider_DEFINED)
#include <Modloader/app/structs/ChargeShotCollider__Fields.h>
#if defined(IL2CPP_STRUCT_ChargeShotCollider__Fields_DEFINED)
#define IL2CPP_STRUCT_ChargeShotCollider_DEFINED
struct ChargeShotCollider__Class;
struct ChargeShotCollider {
    struct ChargeShotCollider__Class* klass;
    MonitorData* monitor;
    struct ChargeShotCollider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChargeShotCollider_FWDDECL)
#define IL2CPP_STRUCT_ChargeShotCollider_FWDDECL
#include <Modloader/app/structs/ChargeShotCollider__Class.h>
#endif
#undef IL2CPP_STRUCT_ChargeShotCollider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChargeShotCollider_DEFINED) && !defined(IL2CPP_STRUCT_ChargeShotCollider_FWDDECL)
#include <Modloader/app/structs/ChargeShotCollider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChargeShotCollider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
