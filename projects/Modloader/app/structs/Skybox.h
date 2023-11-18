#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Skybox_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Skybox_INITIALIZING
#if !defined(IL2CPP_STRUCT_Skybox_DEFINED)
#include <Modloader/app/structs/Skybox__Fields.h>
#if defined(IL2CPP_STRUCT_Skybox__Fields_DEFINED)
#define IL2CPP_STRUCT_Skybox_DEFINED
struct Skybox__Class;
struct Skybox {
    struct Skybox__Class* klass;
    MonitorData* monitor;
    struct Skybox__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Skybox_FWDDECL)
#define IL2CPP_STRUCT_Skybox_FWDDECL
#include <Modloader/app/structs/Skybox__Class.h>
#endif
#undef IL2CPP_STRUCT_Skybox_INITIALIZING
#if !defined(IL2CPP_STRUCT_Skybox_DEFINED) && !defined(IL2CPP_STRUCT_Skybox_FWDDECL)
#include <Modloader/app/structs/Skybox.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Skybox.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
