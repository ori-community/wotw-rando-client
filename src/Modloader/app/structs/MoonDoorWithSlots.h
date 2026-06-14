#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDoorWithSlots_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDoorWithSlots_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDoorWithSlots_DEFINED)
#include <Modloader/app/structs/MoonDoorWithSlots__Fields.h>
#if defined(IL2CPP_STRUCT_MoonDoorWithSlots__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonDoorWithSlots_DEFINED
struct MoonDoorWithSlots__Class;
struct MoonDoorWithSlots {
    struct MoonDoorWithSlots__Class* klass;
    MonitorData* monitor;
    struct MoonDoorWithSlots__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonDoorWithSlots_FWDDECL)
#define IL2CPP_STRUCT_MoonDoorWithSlots_FWDDECL
#include <Modloader/app/structs/MoonDoorWithSlots__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonDoorWithSlots_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDoorWithSlots_DEFINED) && !defined(IL2CPP_STRUCT_MoonDoorWithSlots_FWDDECL)
#include <Modloader/app/structs/MoonDoorWithSlots.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDoorWithSlots.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
