#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIUtility_DEFINED)
#define IL2CPP_STRUCT_GUIUtility_DEFINED
struct GUIUtility__Class;
struct GUIUtility {
    struct GUIUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GUIUtility_FWDDECL)
#define IL2CPP_STRUCT_GUIUtility_FWDDECL
#include <Modloader/app/structs/GUIUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIUtility_DEFINED) && !defined(IL2CPP_STRUCT_GUIUtility_FWDDECL)
#include <Modloader/app/structs/GUIUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
