#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RopeVisualLogic__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RopeVisualLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RopeVisualLogic__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_RopeVisualLogic__Fields_DEFINED
struct Transform;
struct GameObject;
struct RopeVisualLogic__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* LeftAttachment;
    struct Transform* RightAttachment;
    struct GameObject* RopeGraphic;
    float m_ropeOriginalScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RopeVisualLogic__Fields_FWDDECL)
#define IL2CPP_STRUCT_RopeVisualLogic__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_RopeVisualLogic__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RopeVisualLogic__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RopeVisualLogic__Fields_FWDDECL)
#include <Modloader/app/structs/RopeVisualLogic__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RopeVisualLogic__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
