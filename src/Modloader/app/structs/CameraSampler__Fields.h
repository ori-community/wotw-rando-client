#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraSampler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraSampler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSampler__Fields_DEFINED)
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_CameraSampler__Fields_DEFINED
struct SceneMetaData;
struct List_1_UnityEngine_Rect_;
struct Camera;
struct __declspec(align(8)) CameraSampler__Fields {
    struct Rect m_sceneBounds;
    struct SceneMetaData* m_metaData;
    struct List_1_UnityEngine_Rect_* _SceneRects_k__BackingField;
    struct Camera* _Camera_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraSampler__Fields_FWDDECL)
#define IL2CPP_STRUCT_CameraSampler__Fields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/SceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_CameraSampler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraSampler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CameraSampler__Fields_FWDDECL)
#include <Modloader/app/structs/CameraSampler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraSampler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
