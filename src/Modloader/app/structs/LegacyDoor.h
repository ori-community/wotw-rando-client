#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyDoor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyDoor_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDoor_DEFINED)
#include <Modloader/app/structs/LegacyDoor__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyDoor__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyDoor_DEFINED
struct LegacyDoor__Class;
struct LegacyDoor {
    struct LegacyDoor__Class* klass;
    MonitorData* monitor;
    struct LegacyDoor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyDoor_FWDDECL)
#define IL2CPP_STRUCT_LegacyDoor_FWDDECL
#include <Modloader/app/structs/LegacyDoor__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyDoor_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDoor_DEFINED) && !defined(IL2CPP_STRUCT_LegacyDoor_FWDDECL)
#include <Modloader/app/structs/LegacyDoor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyDoor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
