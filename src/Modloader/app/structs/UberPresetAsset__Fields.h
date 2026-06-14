#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPresetAsset__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPresetAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetAsset__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPresetAsset__Fields_DEFINED
struct UberPresetSerializedComponent__Array;
struct List_1_ObjectReference_;
struct String;
struct Texture2D;
struct GUIContent;
struct UberPresetAsset__Fields {
    struct ScriptableObject__Fields _;
    int32_t m_version;
    struct UberPresetSerializedComponent__Array* m_serializedComponents;
    struct List_1_ObjectReference_* m_associatedObjects;
    bool m_isFullPreset;
    bool OverrideName;
    struct String* DisplayName;
    struct String* m_metaString;
    bool m_metaIsDirty;
    struct Texture2D* m_mainTex;
    struct String* m_mainTexGUID;
    bool m_mainTexDirty;
    struct String* m_cachedName;
    bool m_nameIsDirty;
    float m_lastWidth;
    struct GUIContent* m_cachedGUIContent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPresetAsset__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPresetAsset__Fields_FWDDECL
#include <Modloader/app/structs/GUIContent.h>
#include <Modloader/app/structs/List_1_ObjectReference_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/UberPresetSerializedComponent__Array.h>
#endif
#undef IL2CPP_STRUCT_UberPresetAsset__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPresetAsset__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPresetAsset__Fields_FWDDECL)
#include <Modloader/app/structs/UberPresetAsset__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPresetAsset__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
