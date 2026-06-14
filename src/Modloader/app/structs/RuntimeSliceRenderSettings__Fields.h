#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeSliceRenderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeSliceRenderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeSliceRenderSettings__Fields_DEFINED)
#include <Modloader/app/structs/RuntimeSliceRenderSettings_DofCurveMode__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RuntimeSliceRenderSettings_DofCurveMode__Enum_DEFINED)
#define IL2CPP_STRUCT_RuntimeSliceRenderSettings__Fields_DEFINED
struct SceneDefaultSettingsHelper;
struct SliceRenderSettings;
struct LayeredRenderSettings;
struct __declspec(align(8)) RuntimeSliceRenderSettings__Fields {
    struct SceneDefaultSettingsHelper* m_defaultSettingsHelper;
    struct SliceRenderSettings* m_currentSRS;
    struct LayeredRenderSettings* m_currentLRS;
    bool m_isDirty;
    float m_deltaTime;
    struct Vector3 m_cameraPos;
    RuntimeSliceRenderSettings_DofCurveMode__Enum dofCurveMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeSliceRenderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_RuntimeSliceRenderSettings__Fields_FWDDECL
#include <Modloader/app/structs/LayeredRenderSettings.h>
#include <Modloader/app/structs/SceneDefaultSettingsHelper.h>
#include <Modloader/app/structs/SliceRenderSettings.h>
#endif
#undef IL2CPP_STRUCT_RuntimeSliceRenderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeSliceRenderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeSliceRenderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/RuntimeSliceRenderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeSliceRenderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
