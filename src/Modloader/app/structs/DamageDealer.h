#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageDealer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageDealer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageDealer_DEFINED)
#include <Modloader/app/structs/DamageDealer__Fields.h>
#if defined(IL2CPP_STRUCT_DamageDealer__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageDealer_DEFINED
struct DamageDealer__Class;
struct DamageDealer {
    struct DamageDealer__Class* klass;
    MonitorData* monitor;
    struct DamageDealer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageDealer_FWDDECL)
#define IL2CPP_STRUCT_DamageDealer_FWDDECL
#include <Modloader/app/structs/DamageDealer__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageDealer_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageDealer_DEFINED) && !defined(IL2CPP_STRUCT_DamageDealer_FWDDECL)
#include <Modloader/app/structs/DamageDealer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageDealer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
