#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageNodeWisps_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageNodeWisps_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageNodeWisps_DEFINED)
#include <Modloader/app/structs/MessageNodeWisps__Fields.h>
#if defined(IL2CPP_STRUCT_MessageNodeWisps__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageNodeWisps_DEFINED
struct MessageNodeWisps__Class;
struct MessageNodeWisps {
    struct MessageNodeWisps__Class* klass;
    MonitorData* monitor;
    struct MessageNodeWisps__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageNodeWisps_FWDDECL)
#define IL2CPP_STRUCT_MessageNodeWisps_FWDDECL
#include <Modloader/app/structs/MessageNodeWisps__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageNodeWisps_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageNodeWisps_DEFINED) && !defined(IL2CPP_STRUCT_MessageNodeWisps_FWDDECL)
#include <Modloader/app/structs/MessageNodeWisps.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageNodeWisps.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
