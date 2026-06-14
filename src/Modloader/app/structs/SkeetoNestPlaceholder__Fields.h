#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoNestPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoNestPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoNestPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/EntityPlaceholder__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SkeetoNestPlaceholder__Fields_DEFINED
struct SkeetoPlaceholder;
struct List_1_SkeetoPlaceholder_;
struct SkeetoNestPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    struct Vector3 SpawnPosition;
    struct SkeetoPlaceholder* PlaceholderPrefab;
    int32_t MaxSkeetoCount;
    bool LimitCountOnSwitch;
    int32_t MaxSkeetoCountOnSwitch;
    struct List_1_SkeetoPlaceholder_* Placeholders;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoNestPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoNestPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SkeetoPlaceholder_.h>
#include <Modloader/app/structs/SkeetoPlaceholder.h>
#endif
#undef IL2CPP_STRUCT_SkeetoNestPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoNestPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoNestPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoNestPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoNestPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
