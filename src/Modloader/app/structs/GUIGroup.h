#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIGroup_DEFINED)
#define IL2CPP_STRUCT_GUIGroup_DEFINED
struct GUIGroup {
};
#endif
#if !defined(IL2CPP_STRUCT_GUIGroup_FWDDECL)
#define IL2CPP_STRUCT_GUIGroup_FWDDECL
#endif
#undef IL2CPP_STRUCT_GUIGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIGroup_DEFINED) && !defined(IL2CPP_STRUCT_GUIGroup_FWDDECL)
#include <Modloader/app/structs/GUIGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
