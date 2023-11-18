#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageRecieverSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageRecieverSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageRecieverSettings_DEFINED)
#include <Modloader/app/structs/DamageRecieverSettings__Fields.h>
#if defined(IL2CPP_STRUCT_DamageRecieverSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_DamageRecieverSettings_DEFINED
struct DamageRecieverSettings__Class;
struct DamageRecieverSettings {
    struct DamageRecieverSettings__Class* klass;
    MonitorData* monitor;
    struct DamageRecieverSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageRecieverSettings_FWDDECL)
#define IL2CPP_STRUCT_DamageRecieverSettings_FWDDECL
#include <Modloader/app/structs/DamageRecieverSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageRecieverSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageRecieverSettings_DEFINED) && !defined(IL2CPP_STRUCT_DamageRecieverSettings_FWDDECL)
#include <Modloader/app/structs/DamageRecieverSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageRecieverSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
