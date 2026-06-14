#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RectangleGameplayZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RectangleGameplayZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectangleGameplayZone_DEFINED)
#include <Modloader/app/structs/RectangleGameplayZone__Fields.h>
#if defined(IL2CPP_STRUCT_RectangleGameplayZone__Fields_DEFINED)
#define IL2CPP_STRUCT_RectangleGameplayZone_DEFINED
struct RectangleGameplayZone__Class;
struct RectangleGameplayZone {
    struct RectangleGameplayZone__Class* klass;
    MonitorData* monitor;
    struct RectangleGameplayZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RectangleGameplayZone_FWDDECL)
#define IL2CPP_STRUCT_RectangleGameplayZone_FWDDECL
#include <Modloader/app/structs/RectangleGameplayZone__Class.h>
#endif
#undef IL2CPP_STRUCT_RectangleGameplayZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_RectangleGameplayZone_DEFINED) && !defined(IL2CPP_STRUCT_RectangleGameplayZone_FWDDECL)
#include <Modloader/app/structs/RectangleGameplayZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RectangleGameplayZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
