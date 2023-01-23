#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonEffectWisps_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonEffectWisps_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectWisps_DEFINED)
#include <Modloader/app/structs/MoonEffectWisps__Fields.h>
#if defined(IL2CPP_STRUCT_MoonEffectWisps__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonEffectWisps_DEFINED
struct MoonEffectWisps__Class;
struct MoonEffectWisps {
    struct MoonEffectWisps__Class* klass;
    MonitorData* monitor;
    struct MoonEffectWisps__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonEffectWisps_FWDDECL)
#define IL2CPP_STRUCT_MoonEffectWisps_FWDDECL
#include <Modloader/app/structs/MoonEffectWisps__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonEffectWisps_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonEffectWisps_DEFINED) && !defined(IL2CPP_STRUCT_MoonEffectWisps_FWDDECL)
#include <Modloader/app/structs/MoonEffectWisps.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonEffectWisps.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
