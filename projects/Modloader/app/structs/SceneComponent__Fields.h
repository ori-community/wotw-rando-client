#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneComponent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneComponent__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneComponent__Fields_DEFINED
struct String;
struct SceneComponent__Fields {
    struct ScriptableObject__Fields _;
    struct String* _Path_k__BackingField;
    struct String* _Group_k__BackingField;
    struct String* _Name_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneComponent__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneComponent__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SceneComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneComponent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneComponent__Fields_FWDDECL)
#include <Modloader/app/structs/SceneComponent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneComponent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
