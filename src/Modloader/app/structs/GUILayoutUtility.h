#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUILayoutUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUILayoutUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutUtility_DEFINED)
#define IL2CPP_STRUCT_GUILayoutUtility_DEFINED
struct GUILayoutUtility__Class;
struct GUILayoutUtility {
    struct GUILayoutUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GUILayoutUtility_FWDDECL)
#define IL2CPP_STRUCT_GUILayoutUtility_FWDDECL
#include <Modloader/app/structs/GUILayoutUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_GUILayoutUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutUtility_DEFINED) && !defined(IL2CPP_STRUCT_GUILayoutUtility_FWDDECL)
#include <Modloader/app/structs/GUILayoutUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUILayoutUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
