#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DamageContext__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DamageContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageContext__Boxed_DEFINED)
#include <Modloader/app/structs/DamageContext.h>
#if defined(IL2CPP_STRUCT_DamageContext_DEFINED)
#define IL2CPP_STRUCT_DamageContext__Boxed_DEFINED
struct DamageContext__Class;
struct DamageContext__Boxed {
    struct DamageContext__Class* klass;
    MonitorData* monitor;
    struct DamageContext fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DamageContext__Boxed_FWDDECL)
#define IL2CPP_STRUCT_DamageContext__Boxed_FWDDECL
#include <Modloader/app/structs/DamageContext__Class.h>
#endif
#undef IL2CPP_STRUCT_DamageContext__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_DamageContext__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_DamageContext__Boxed_FWDDECL)
#include <Modloader/app/structs/DamageContext__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DamageContext__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
