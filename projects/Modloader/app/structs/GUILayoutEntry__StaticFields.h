#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUILayoutEntry__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUILayoutEntry__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutEntry__StaticFields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_GUILayoutEntry__StaticFields_DEFINED
struct GUILayoutEntry__StaticFields {
    struct Rect kDummyRect;
    int32_t indent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUILayoutEntry__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GUILayoutEntry__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_GUILayoutEntry__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUILayoutEntry__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GUILayoutEntry__StaticFields_FWDDECL)
#include <Modloader/app/structs/GUILayoutEntry__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUILayoutEntry__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
