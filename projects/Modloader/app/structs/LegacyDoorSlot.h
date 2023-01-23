#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyDoorSlot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyDoorSlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDoorSlot_DEFINED)
#include <Modloader/app/structs/LegacyDoorSlot__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyDoorSlot__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyDoorSlot_DEFINED
struct LegacyDoorSlot__Class;
struct LegacyDoorSlot {
    struct LegacyDoorSlot__Class* klass;
    MonitorData* monitor;
    struct LegacyDoorSlot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyDoorSlot_FWDDECL)
#define IL2CPP_STRUCT_LegacyDoorSlot_FWDDECL
#include <Modloader/app/structs/LegacyDoorSlot__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyDoorSlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDoorSlot_DEFINED) && !defined(IL2CPP_STRUCT_LegacyDoorSlot_FWDDECL)
#include <Modloader/app/structs/LegacyDoorSlot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyDoorSlot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
