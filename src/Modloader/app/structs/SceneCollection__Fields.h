#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneCollection__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneCollection__Fields_DEFINED
struct List_1_SceneMetaData_;
struct Dictionary_2_System_String_SceneMetaData_;
struct SceneCollection__Fields {
    struct ScriptableObject__Fields _;
    struct List_1_SceneMetaData_* SceneMetaDatas;
    struct Dictionary_2_System_String_SceneMetaData_* m_metaDatasByNameDictionary;
    struct Dictionary_2_System_String_SceneMetaData_* m_metaDatasByGuidDictionary;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneCollection__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_SceneMetaData_.h>
#include <Modloader/app/structs/List_1_SceneMetaData_.h>
#endif
#undef IL2CPP_STRUCT_SceneCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneCollection__Fields_FWDDECL)
#include <Modloader/app/structs/SceneCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
