#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CursorRendererWorldSpace__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CursorRendererWorldSpace__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorRendererWorldSpace__Fields_DEFINED)
#include <Modloader/app/structs/CursorRendererBase__Fields.h>
#if defined(IL2CPP_STRUCT_CursorRendererBase__Fields_DEFINED)
#define IL2CPP_STRUCT_CursorRendererWorldSpace__Fields_DEFINED
struct GameObject;
struct PointerUIBase;
struct CursorRendererWorldSpace__Fields {
    struct CursorRendererBase__Fields _;
    float zOffset;
    float size;
    struct GameObject* cursorHolder;
    struct GameObject* cursorImage;
    struct PointerUIBase* pointerUI;
    bool cursorVisible;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CursorRendererWorldSpace__Fields_FWDDECL)
#define IL2CPP_STRUCT_CursorRendererWorldSpace__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PointerUIBase.h>
#endif
#undef IL2CPP_STRUCT_CursorRendererWorldSpace__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorRendererWorldSpace__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CursorRendererWorldSpace__Fields_FWDDECL)
#include <Modloader/app/structs/CursorRendererWorldSpace__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CursorRendererWorldSpace__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
