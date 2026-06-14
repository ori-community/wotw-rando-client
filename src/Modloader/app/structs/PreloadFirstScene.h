#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreloadFirstScene_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreloadFirstScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreloadFirstScene_DEFINED)
#include <Modloader/app/structs/PreloadFirstScene__Fields.h>
#if defined(IL2CPP_STRUCT_PreloadFirstScene__Fields_DEFINED)
#define IL2CPP_STRUCT_PreloadFirstScene_DEFINED
struct PreloadFirstScene__Class;
struct PreloadFirstScene {
    struct PreloadFirstScene__Class* klass;
    MonitorData* monitor;
    struct PreloadFirstScene__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreloadFirstScene_FWDDECL)
#define IL2CPP_STRUCT_PreloadFirstScene_FWDDECL
#include <Modloader/app/structs/PreloadFirstScene__Class.h>
#endif
#undef IL2CPP_STRUCT_PreloadFirstScene_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreloadFirstScene_DEFINED) && !defined(IL2CPP_STRUCT_PreloadFirstScene_FWDDECL)
#include <Modloader/app/structs/PreloadFirstScene.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreloadFirstScene.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
