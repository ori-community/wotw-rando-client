#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UIVertex__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UIVertex__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIVertex__StaticFields_DEFINED)
#include <Modloader/app/structs/Color32.h>
#include <Modloader/app/structs/UIVertex.h>
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Color32_DEFINED) && defined(IL2CPP_STRUCT_Vector4_DEFINED) && defined(IL2CPP_STRUCT_UIVertex_DEFINED)
#define IL2CPP_STRUCT_UIVertex__StaticFields_DEFINED
struct UIVertex__StaticFields {
    struct Color32 s_DefaultColor;
    struct Vector4 s_DefaultTangent;
    struct UIVertex simpleVert;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UIVertex__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UIVertex__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UIVertex__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIVertex__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UIVertex__StaticFields_FWDDECL)
#include <Modloader/app/structs/UIVertex__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UIVertex__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
