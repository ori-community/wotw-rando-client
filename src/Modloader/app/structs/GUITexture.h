#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUITexture_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUITexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUITexture_DEFINED)
#include <Modloader/app/structs/GUITexture__Fields.h>
#if defined(IL2CPP_STRUCT_GUITexture__Fields_DEFINED)
#define IL2CPP_STRUCT_GUITexture_DEFINED
struct GUITexture__Class;
struct GUITexture {
    struct GUITexture__Class* klass;
    MonitorData* monitor;
    struct GUITexture__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUITexture_FWDDECL)
#define IL2CPP_STRUCT_GUITexture_FWDDECL
#include <Modloader/app/structs/GUITexture__Class.h>
#endif
#undef IL2CPP_STRUCT_GUITexture_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUITexture_DEFINED) && !defined(IL2CPP_STRUCT_GUITexture_FWDDECL)
#include <Modloader/app/structs/GUITexture.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUITexture.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
