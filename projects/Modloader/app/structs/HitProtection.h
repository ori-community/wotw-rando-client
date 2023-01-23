#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitProtection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitProtection_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitProtection_DEFINED)
#include <Modloader/app/structs/HitProtection__Fields.h>
#if defined(IL2CPP_STRUCT_HitProtection__Fields_DEFINED)
#define IL2CPP_STRUCT_HitProtection_DEFINED
struct HitProtection__Class;
struct HitProtection {
    struct HitProtection__Class* klass;
    MonitorData* monitor;
    struct HitProtection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitProtection_FWDDECL)
#define IL2CPP_STRUCT_HitProtection_FWDDECL
#include <Modloader/app/structs/HitProtection__Class.h>
#endif
#undef IL2CPP_STRUCT_HitProtection_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitProtection_DEFINED) && !defined(IL2CPP_STRUCT_HitProtection_FWDDECL)
#include <Modloader/app/structs/HitProtection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitProtection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
