#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CanvasUpdateRegistry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CanvasUpdateRegistry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasUpdateRegistry__Fields_DEFINED)
#define IL2CPP_STRUCT_CanvasUpdateRegistry__Fields_DEFINED
struct IndexedSet_1_UnityEngine_UI_ICanvasElement_;
struct __declspec(align(8)) CanvasUpdateRegistry__Fields {
    bool m_PerformingLayoutUpdate;
    bool m_PerformingGraphicUpdate;
    struct IndexedSet_1_UnityEngine_UI_ICanvasElement_* m_LayoutRebuildQueue;
    struct IndexedSet_1_UnityEngine_UI_ICanvasElement_* m_GraphicRebuildQueue;
};
#endif
#if !defined(IL2CPP_STRUCT_CanvasUpdateRegistry__Fields_FWDDECL)
#define IL2CPP_STRUCT_CanvasUpdateRegistry__Fields_FWDDECL
#include <Modloader/app/structs/IndexedSet_1_UnityEngine_UI_ICanvasElement_.h>
#endif
#undef IL2CPP_STRUCT_CanvasUpdateRegistry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CanvasUpdateRegistry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CanvasUpdateRegistry__Fields_FWDDECL)
#include <Modloader/app/structs/CanvasUpdateRegistry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CanvasUpdateRegistry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
