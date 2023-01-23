#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIHelper_DEFINED)
#define IL2CPP_STRUCT_GUIHelper_DEFINED
struct GUIHelper__Class;
struct GUIHelper {
    struct GUIHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GUIHelper_FWDDECL)
#define IL2CPP_STRUCT_GUIHelper_FWDDECL
#include <Modloader/app/structs/GUIHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIHelper_DEFINED) && !defined(IL2CPP_STRUCT_GUIHelper_FWDDECL)
#include <Modloader/app/structs/GUIHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
