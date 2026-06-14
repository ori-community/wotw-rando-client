#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyDamageReciever_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyDamageReciever_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDamageReciever_DEFINED)
#include <Modloader/app/structs/LegacyDamageReciever__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyDamageReciever__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyDamageReciever_DEFINED
struct LegacyDamageReciever__Class;
struct LegacyDamageReciever {
    struct LegacyDamageReciever__Class* klass;
    MonitorData* monitor;
    struct LegacyDamageReciever__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyDamageReciever_FWDDECL)
#define IL2CPP_STRUCT_LegacyDamageReciever_FWDDECL
#include <Modloader/app/structs/LegacyDamageReciever__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyDamageReciever_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDamageReciever_DEFINED) && !defined(IL2CPP_STRUCT_LegacyDamageReciever_FWDDECL)
#include <Modloader/app/structs/LegacyDamageReciever.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyDamageReciever.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
