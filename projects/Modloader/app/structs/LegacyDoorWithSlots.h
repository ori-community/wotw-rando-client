#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyDoorWithSlots_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyDoorWithSlots_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDoorWithSlots_DEFINED)
#include <Modloader/app/structs/LegacyDoorWithSlots__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyDoorWithSlots__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyDoorWithSlots_DEFINED
struct LegacyDoorWithSlots__Class;
struct LegacyDoorWithSlots {
    struct LegacyDoorWithSlots__Class* klass;
    MonitorData* monitor;
    struct LegacyDoorWithSlots__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyDoorWithSlots_FWDDECL)
#define IL2CPP_STRUCT_LegacyDoorWithSlots_FWDDECL
#include <Modloader/app/structs/LegacyDoorWithSlots__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyDoorWithSlots_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDoorWithSlots_DEFINED) && !defined(IL2CPP_STRUCT_LegacyDoorWithSlots_FWDDECL)
#include <Modloader/app/structs/LegacyDoorWithSlots.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyDoorWithSlots.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
