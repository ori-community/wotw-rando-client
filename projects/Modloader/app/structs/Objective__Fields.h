#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Objective__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Objective__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Objective__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Objective__Fields_DEFINED
struct Texture2D;
struct Transform;
struct GameObject;
struct Objective__Fields {
    struct ScriptableObject__Fields _;
    struct Texture2D* Icon;
    struct Vector2 Position;
    struct Transform* _AreaMapTransform_k__BackingField;
    struct Transform* _WorldMapTransform_k__BackingField;
    struct GameObject* m_appearEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Objective__Fields_FWDDECL)
#define IL2CPP_STRUCT_Objective__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Objective__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Objective__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Objective__Fields_FWDDECL)
#include <Modloader/app/structs/Objective__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Objective__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
