#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberPoolGroupWarmer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberPoolGroupWarmer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolGroupWarmer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberPoolGroupWarmer__Fields_DEFINED
struct UberPoolGroupWarmer_PrewarmItem__Array;
struct List_1_System_Int32_;
struct String;
struct UberPoolGroupWarmer__Fields {
    struct MonoBehaviour__Fields _;
    struct UberPoolGroupWarmer_PrewarmItem__Array* PrewarmItems;
    struct List_1_System_Int32_* PrefabsWarmed;
    float _Progress_k__BackingField;
    struct String* CurrentPrefabName;
    bool SkipPrewarmIfUsingScenePooling;
    bool KeepLoaded;
    int32_t m_prefabIndex;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberPoolGroupWarmer__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberPoolGroupWarmer__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberPoolGroupWarmer_PrewarmItem__Array.h>
#endif
#undef IL2CPP_STRUCT_UberPoolGroupWarmer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberPoolGroupWarmer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberPoolGroupWarmer__Fields_FWDDECL)
#include <Modloader/app/structs/UberPoolGroupWarmer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberPoolGroupWarmer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
