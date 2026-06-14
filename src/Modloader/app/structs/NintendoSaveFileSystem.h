#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NintendoSaveFileSystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NintendoSaveFileSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoSaveFileSystem_DEFINED)
#define IL2CPP_STRUCT_NintendoSaveFileSystem_DEFINED
struct NintendoSaveFileSystem__Class;
struct NintendoSaveFileSystem {
    struct NintendoSaveFileSystem__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_NintendoSaveFileSystem_FWDDECL)
#define IL2CPP_STRUCT_NintendoSaveFileSystem_FWDDECL
#include <Modloader/app/structs/NintendoSaveFileSystem__Class.h>
#endif
#undef IL2CPP_STRUCT_NintendoSaveFileSystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_NintendoSaveFileSystem_DEFINED) && !defined(IL2CPP_STRUCT_NintendoSaveFileSystem_FWDDECL)
#include <Modloader/app/structs/NintendoSaveFileSystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NintendoSaveFileSystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
