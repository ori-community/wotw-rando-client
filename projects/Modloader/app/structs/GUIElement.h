#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIElement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIElement_DEFINED)
#include <Modloader/app/structs/GUIElement__Fields.h>
#if defined(IL2CPP_STRUCT_GUIElement__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIElement_DEFINED
struct GUIElement__Class;
struct GUIElement {
    struct GUIElement__Class* klass;
    MonitorData* monitor;
    struct GUIElement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIElement_FWDDECL)
#define IL2CPP_STRUCT_GUIElement_FWDDECL
#include <Modloader/app/structs/GUIElement__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIElement_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIElement_DEFINED) && !defined(IL2CPP_STRUCT_GUIElement_FWDDECL)
#include <Modloader/app/structs/GUIElement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIElement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
