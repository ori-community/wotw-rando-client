#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Component_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Component_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Component_1__Fields_DEFINED)
#include <Modloader/app/structs/Object_1__Fields.h>
#if defined(IL2CPP_STRUCT_Object_1__Fields_DEFINED)
#define IL2CPP_STRUCT_Component_1__Fields_DEFINED
struct Transform;
struct GameObject;
struct Component_1__Fields {
    struct Object_1__Fields _;
    struct Transform* m_cachedTransform;
    struct GameObject* m_cachedGameObject;
    bool m_transformCached;
    bool m_gameObjectCached;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Component_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Component_1__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_Component_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Component_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Component_1__Fields_FWDDECL)
#include <Modloader/app/structs/Component_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Component_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
