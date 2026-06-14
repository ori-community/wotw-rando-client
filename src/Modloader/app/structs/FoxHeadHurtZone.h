#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FoxHeadHurtZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FoxHeadHurtZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxHeadHurtZone_DEFINED)
#include <Modloader/app/structs/FoxHeadHurtZone__Fields.h>
#if defined(IL2CPP_STRUCT_FoxHeadHurtZone__Fields_DEFINED)
#define IL2CPP_STRUCT_FoxHeadHurtZone_DEFINED
struct FoxHeadHurtZone__Class;
struct FoxHeadHurtZone {
    struct FoxHeadHurtZone__Class* klass;
    MonitorData* monitor;
    struct FoxHeadHurtZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FoxHeadHurtZone_FWDDECL)
#define IL2CPP_STRUCT_FoxHeadHurtZone_FWDDECL
#include <Modloader/app/structs/FoxHeadHurtZone__Class.h>
#endif
#undef IL2CPP_STRUCT_FoxHeadHurtZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxHeadHurtZone_DEFINED) && !defined(IL2CPP_STRUCT_FoxHeadHurtZone_FWDDECL)
#include <Modloader/app/structs/FoxHeadHurtZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FoxHeadHurtZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
