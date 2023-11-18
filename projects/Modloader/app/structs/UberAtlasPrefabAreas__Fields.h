#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberAtlasPrefabAreas__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberAtlasPrefabAreas__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberAtlasPrefabAreas__Fields_DEFINED)
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_UberAtlasPrefabAreas__Fields_DEFINED
struct Action;
struct UberAtlasPrefabAreaDictionary;
struct String__Array;
struct PrefabAreaData__Array;
struct PrefabAreaData;
struct UberAtlasPrefabAreas__Fields {
    struct ScriptableObject__Fields _;
    struct Action* OnUpdated;
    struct UberAtlasPrefabAreaDictionary* m_prefabToArea;
    struct String__Array* PrefabLabels;
    struct PrefabAreaData__Array* PrefabData;
    struct PrefabAreaData* DefaultData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberAtlasPrefabAreas__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberAtlasPrefabAreas__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/PrefabAreaData.h>
#include <Modloader/app/structs/PrefabAreaData__Array.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/UberAtlasPrefabAreaDictionary.h>
#endif
#undef IL2CPP_STRUCT_UberAtlasPrefabAreas__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberAtlasPrefabAreas__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberAtlasPrefabAreas__Fields_FWDDECL)
#include <Modloader/app/structs/UberAtlasPrefabAreas__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberAtlasPrefabAreas__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
