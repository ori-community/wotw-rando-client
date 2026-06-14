#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NintendoSwitchFile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NintendoSwitchFile_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoSwitchFile_DEFINED)
#define IL2CPP_STRUCT_NintendoSwitchFile_DEFINED
struct NintendoSwitchFile__Class;
struct NintendoSwitchFile {
    struct NintendoSwitchFile__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NintendoSwitchFile_FWDDECL)
#define IL2CPP_STRUCT_NintendoSwitchFile_FWDDECL
#include <Modloader/app/structs/NintendoSwitchFile__Class.h>
#endif
#undef IL2CPP_STRUCT_NintendoSwitchFile_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoSwitchFile_DEFINED) && !defined(IL2CPP_STRUCT_NintendoSwitchFile_FWDDECL)
#include <Modloader/app/structs/NintendoSwitchFile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NintendoSwitchFile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
