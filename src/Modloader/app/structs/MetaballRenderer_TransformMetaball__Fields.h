#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MetaballRenderer_TransformMetaball__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MetaballRenderer_TransformMetaball__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaballRenderer_TransformMetaball__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_MetaballRenderer_TransformMetaball__Fields_DEFINED
struct Transform;
struct __declspec(align(8)) MetaballRenderer_TransformMetaball__Fields {
    struct Transform* MetaBallTransform;
    float TransformMetaballRadius;
    float _RadiusMultipier_k__BackingField;
    struct Vector2 _Speed_k__BackingField;
    float _Lifetime_k__BackingField;
    bool _ShouldRemove_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MetaballRenderer_TransformMetaball__Fields_FWDDECL)
#define IL2CPP_STRUCT_MetaballRenderer_TransformMetaball__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MetaballRenderer_TransformMetaball__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaballRenderer_TransformMetaball__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MetaballRenderer_TransformMetaball__Fields_FWDDECL)
#include <Modloader/app/structs/MetaballRenderer_TransformMetaball__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MetaballRenderer_TransformMetaball__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
