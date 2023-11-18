#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields_DEFINED)
#include <Modloader/app/structs/ProjectionAxis__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_ProjectionAxis__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields_DEFINED
struct String;
struct Renderer;
struct Transform;
struct __declspec(align(8)) UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields {
    struct String* BindName;
    struct Renderer* Renderer;
    ProjectionAxis__Enum ProjectionAxis;

    struct Transform* Anchor;
    struct Transform* LookAtTarget;
    struct Vector2 AnchorOffset;
    float RotationOffset;
    bool LockToAnchorRotation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields_FWDDECL)
#include <Modloader/app/structs/UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberShaderBuildUpdate_WorldProjectionUpdateEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
