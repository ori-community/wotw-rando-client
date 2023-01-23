#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UI_Cameras_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UI_Cameras_INITIALIZING
#if !defined(IL2CPP_STRUCT_UI_Cameras_DEFINED)
#define IL2CPP_STRUCT_UI_Cameras_DEFINED
struct UI_Cameras__Class;
struct UI_Cameras {
    struct UI_Cameras__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_UI_Cameras_FWDDECL)
#define IL2CPP_STRUCT_UI_Cameras_FWDDECL
#include <Modloader/app/structs/UI_Cameras__Class.h>
#endif
#undef IL2CPP_STRUCT_UI_Cameras_INITIALIZING
#if !defined(IL2CPP_STRUCT_UI_Cameras_DEFINED) && !defined(IL2CPP_STRUCT_UI_Cameras_FWDDECL)
#include <Modloader/app/structs/UI_Cameras.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UI_Cameras.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
