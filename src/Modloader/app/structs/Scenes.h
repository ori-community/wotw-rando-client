#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Scenes_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Scenes_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scenes_DEFINED)
#define IL2CPP_STRUCT_Scenes_DEFINED
struct Scenes__Class;
struct Scenes {
    struct Scenes__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Scenes_FWDDECL)
#define IL2CPP_STRUCT_Scenes_FWDDECL
#include <Modloader/app/structs/Scenes__Class.h>
#endif
#undef IL2CPP_STRUCT_Scenes_INITIALIZING
#if !defined(IL2CPP_STRUCT_Scenes_DEFINED) && !defined(IL2CPP_STRUCT_Scenes_FWDDECL)
#include <Modloader/app/structs/Scenes.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Scenes.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
