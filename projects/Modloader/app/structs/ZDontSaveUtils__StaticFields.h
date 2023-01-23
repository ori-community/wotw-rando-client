#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ZDontSaveUtils__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ZDontSaveUtils__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZDontSaveUtils__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ZDontSaveUtils__StaticFields_DEFINED
struct String;
struct Transform;
struct List_1_UnityEngine_GameObject_;
struct ZDontSaveUtils__StaticFields {
    struct String* zDontSaveGroupName;
    struct Transform* m_dontSaveTransform;
    struct List_1_UnityEngine_GameObject_* m_tempGameObjects;
};
#endif
#if !defined(IL2CPP_STRUCT_ZDontSaveUtils__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ZDontSaveUtils__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ZDontSaveUtils__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ZDontSaveUtils__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ZDontSaveUtils__StaticFields_FWDDECL)
#include <Modloader/app/structs/ZDontSaveUtils__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ZDontSaveUtils__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
