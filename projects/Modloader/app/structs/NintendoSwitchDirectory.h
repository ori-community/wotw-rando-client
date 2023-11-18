#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NintendoSwitchDirectory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NintendoSwitchDirectory_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoSwitchDirectory_DEFINED)
#define IL2CPP_STRUCT_NintendoSwitchDirectory_DEFINED
struct NintendoSwitchDirectory__Class;
struct NintendoSwitchDirectory {
    struct NintendoSwitchDirectory__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NintendoSwitchDirectory_FWDDECL)
#define IL2CPP_STRUCT_NintendoSwitchDirectory_FWDDECL
#include <Modloader/app/structs/NintendoSwitchDirectory__Class.h>
#endif
#undef IL2CPP_STRUCT_NintendoSwitchDirectory_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoSwitchDirectory_DEFINED) && !defined(IL2CPP_STRUCT_NintendoSwitchDirectory_FWDDECL)
#include <Modloader/app/structs/NintendoSwitchDirectory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NintendoSwitchDirectory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
