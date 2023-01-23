#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUILayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUILayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayer_DEFINED)
#include <Modloader/app/structs/GUILayer__Fields.h>
#if defined(IL2CPP_STRUCT_GUILayer__Fields_DEFINED)
#define IL2CPP_STRUCT_GUILayer_DEFINED
struct GUILayer__Class;
struct GUILayer {
    struct GUILayer__Class* klass;
    MonitorData* monitor;
    struct GUILayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUILayer_FWDDECL)
#define IL2CPP_STRUCT_GUILayer_FWDDECL
#include <Modloader/app/structs/GUILayer__Class.h>
#endif
#undef IL2CPP_STRUCT_GUILayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayer_DEFINED) && !defined(IL2CPP_STRUCT_GUILayer_FWDDECL)
#include <Modloader/app/structs/GUILayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUILayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
