#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDoorSlot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDoorSlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDoorSlot_DEFINED)
#include <Modloader/app/structs/MoonDoorSlot__Fields.h>
#if defined(IL2CPP_STRUCT_MoonDoorSlot__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonDoorSlot_DEFINED
struct MoonDoorSlot__Class;
struct MoonDoorSlot {
    struct MoonDoorSlot__Class* klass;
    MonitorData* monitor;
    struct MoonDoorSlot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonDoorSlot_FWDDECL)
#define IL2CPP_STRUCT_MoonDoorSlot_FWDDECL
#include <Modloader/app/structs/MoonDoorSlot__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonDoorSlot_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDoorSlot_DEFINED) && !defined(IL2CPP_STRUCT_MoonDoorSlot_FWDDECL)
#include <Modloader/app/structs/MoonDoorSlot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDoorSlot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
