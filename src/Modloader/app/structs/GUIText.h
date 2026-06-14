#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIText_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIText_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIText_DEFINED)
#include <Modloader/app/structs/GUIText__Fields.h>
#if defined(IL2CPP_STRUCT_GUIText__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIText_DEFINED
struct GUIText__Class;
struct GUIText {
    struct GUIText__Class* klass;
    MonitorData* monitor;
    struct GUIText__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIText_FWDDECL)
#define IL2CPP_STRUCT_GUIText_FWDDECL
#include <Modloader/app/structs/GUIText__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIText_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIText_DEFINED) && !defined(IL2CPP_STRUCT_GUIText_FWDDECL)
#include <Modloader/app/structs/GUIText.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIText.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
