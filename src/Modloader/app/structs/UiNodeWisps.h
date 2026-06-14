#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UiNodeWisps_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UiNodeWisps_INITIALIZING
#if !defined(IL2CPP_STRUCT_UiNodeWisps_DEFINED)
#include <Modloader/app/structs/UiNodeWisps__Fields.h>
#if defined(IL2CPP_STRUCT_UiNodeWisps__Fields_DEFINED)
#define IL2CPP_STRUCT_UiNodeWisps_DEFINED
struct UiNodeWisps__Class;
struct UiNodeWisps {
    struct UiNodeWisps__Class* klass;
    MonitorData* monitor;
    struct UiNodeWisps__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UiNodeWisps_FWDDECL)
#define IL2CPP_STRUCT_UiNodeWisps_FWDDECL
#include <Modloader/app/structs/UiNodeWisps__Class.h>
#endif
#undef IL2CPP_STRUCT_UiNodeWisps_INITIALIZING
#if !defined(IL2CPP_STRUCT_UiNodeWisps_DEFINED) && !defined(IL2CPP_STRUCT_UiNodeWisps_FWDDECL)
#include <Modloader/app/structs/UiNodeWisps.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UiNodeWisps.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
