#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderComponent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderComponent__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberShaderComponent__Fields_DEFINED
struct List_1_UberShaderTexture_;
struct String;
struct Renderer;
struct Dictionary_2_System_Type_System_Reflection_FieldInfo_;
struct List_1_UberShaderModifier_;
struct Transform;
struct UberShaderComponent__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UberShaderTexture_* WorldProjectedTextures;
    bool m_executeUpdate;
    struct String* m_materialStringIdentifier;
    struct Renderer* m_rendererTarget;
    bool registeredToEditorUpdate;
    struct Dictionary_2_System_Type_System_Reflection_FieldInfo_* m_reflectModifierFields;
    struct List_1_UberShaderModifier_* m_tempModifiers;
    bool _IsDoingRebinding_k__BackingField;
    bool _RequiresContinuosZUpdateInEditor_k__BackingField;
    bool _RequiresWorldProjectedTexturesUpdate_k__BackingField;
    struct Transform* m_transformCached;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderComponent__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderComponent__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Type_System_Reflection_FieldInfo_.h>
#include <Modloader/app/structs/List_1_UberShaderModifier_.h>
#include <Modloader/app/structs/List_1_UberShaderTexture_.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_UberShaderComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderComponent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderComponent__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderComponent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderComponent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
