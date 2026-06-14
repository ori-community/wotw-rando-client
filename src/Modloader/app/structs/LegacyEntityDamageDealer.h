#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyEntityDamageDealer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyEntityDamageDealer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEntityDamageDealer_DEFINED)
#include <Modloader/app/structs/LegacyEntityDamageDealer__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyEntityDamageDealer__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyEntityDamageDealer_DEFINED
struct LegacyEntityDamageDealer__Class;
struct LegacyEntityDamageDealer {
    struct LegacyEntityDamageDealer__Class* klass;
    MonitorData* monitor;
    struct LegacyEntityDamageDealer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyEntityDamageDealer_FWDDECL)
#define IL2CPP_STRUCT_LegacyEntityDamageDealer_FWDDECL
#include <Modloader/app/structs/LegacyEntityDamageDealer__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyEntityDamageDealer_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEntityDamageDealer_DEFINED) && !defined(IL2CPP_STRUCT_LegacyEntityDamageDealer_FWDDECL)
#include <Modloader/app/structs/LegacyEntityDamageDealer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyEntityDamageDealer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
