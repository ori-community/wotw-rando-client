#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoreNodeWisps_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoreNodeWisps_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoreNodeWisps_DEFINED)
#include <Modloader/app/structs/LoreNodeWisps__Fields.h>
#if defined(IL2CPP_STRUCT_LoreNodeWisps__Fields_DEFINED)
#define IL2CPP_STRUCT_LoreNodeWisps_DEFINED
struct LoreNodeWisps__Class;
struct LoreNodeWisps {
    struct LoreNodeWisps__Class* klass;
    MonitorData* monitor;
    struct LoreNodeWisps__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoreNodeWisps_FWDDECL)
#define IL2CPP_STRUCT_LoreNodeWisps_FWDDECL
#include <Modloader/app/structs/LoreNodeWisps__Class.h>
#endif
#undef IL2CPP_STRUCT_LoreNodeWisps_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoreNodeWisps_DEFINED) && !defined(IL2CPP_STRUCT_LoreNodeWisps_FWDDECL)
#include <Modloader/app/structs/LoreNodeWisps.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoreNodeWisps.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
