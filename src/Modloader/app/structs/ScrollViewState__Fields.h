#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScrollViewState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScrollViewState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollViewState__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_ScrollViewState__Fields_DEFINED
struct __declspec(align(8)) ScrollViewState__Fields {
    struct Rect position;
    struct Rect visibleRect;
    struct Rect viewRect;
    struct Vector2 scrollPosition;
    bool apply;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScrollViewState__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScrollViewState__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ScrollViewState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScrollViewState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScrollViewState__Fields_FWDDECL)
#include <Modloader/app/structs/ScrollViewState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScrollViewState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
