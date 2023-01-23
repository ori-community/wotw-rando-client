#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SmallInteractivesPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SmallInteractivesPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmallInteractivesPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/FloatRange_1.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SmallInteractivesPlaceholder_SpawnMode__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FloatRange_1_DEFINED) && defined(IL2CPP_STRUCT_SmallInteractivesPlaceholder_SpawnMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SmallInteractivesPlaceholder__Fields_DEFINED
struct GameObject;
struct Condition_1;
struct MoonReference_1_ISwitch_;
struct List_1_UnityEngine_GameObject_;
struct ISwitch;
struct List_1_UnityEngine_Vector3_;
struct SmallInteractivesPlaceholder__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Prefab;
    int32_t Amount;
    float Radius;
    struct FloatRange_1 SizeVariation;
    float ForceAtSpawn;
    struct Condition_1* Condition;
    SmallInteractivesPlaceholder_SpawnMode__Enum Mode;

    struct MoonReference_1_ISwitch_* SpawnEvent;
    bool m_spawnedInstance;
    struct List_1_UnityEngine_GameObject_* m_currentInstances;
    struct ISwitch* m_spawnEvent;
    struct List_1_UnityEngine_Vector3_* m_previewData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SmallInteractivesPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SmallInteractivesPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/ISwitch.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/MoonReference_1_ISwitch_.h>
#endif
#undef IL2CPP_STRUCT_SmallInteractivesPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SmallInteractivesPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SmallInteractivesPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/SmallInteractivesPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SmallInteractivesPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
