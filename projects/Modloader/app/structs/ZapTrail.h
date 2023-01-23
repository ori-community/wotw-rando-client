#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZapTrail_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZapTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZapTrail_DEFINED)
#include <Modloader/app/structs/ZapTrail__Fields.h>
#if defined(IL2CPP_STRUCT_ZapTrail__Fields_DEFINED)
#define IL2CPP_STRUCT_ZapTrail_DEFINED
struct ZapTrail__Class;
struct ZapTrail {
    struct ZapTrail__Class* klass;
    MonitorData* monitor;
    struct ZapTrail__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ZapTrail_FWDDECL)
#define IL2CPP_STRUCT_ZapTrail_FWDDECL
#include <Modloader/app/structs/ZapTrail__Class.h>
#endif
#undef IL2CPP_STRUCT_ZapTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZapTrail_DEFINED) && !defined(IL2CPP_STRUCT_ZapTrail_FWDDECL)
#include <Modloader/app/structs/ZapTrail.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZapTrail.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
