#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IconPlacementScaler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IconPlacementScaler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IconPlacementScaler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_IconPlacementScaler__Fields_DEFINED
struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_;
struct List_1_System_Int32_;
struct IconPlacementScaler__Fields {
    struct MonoBehaviour__Fields _;
    float MaxScaleFactor;
    float MinScaleFactor;
    struct Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_* m_icons;
    struct Vector3 m_offset;
    struct List_1_System_Int32_* m_keysToRemove;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IconPlacementScaler__Fields_FWDDECL)
#define IL2CPP_STRUCT_IconPlacementScaler__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_IconPlacementScaler_IconOffsetPosition_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_IconPlacementScaler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IconPlacementScaler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IconPlacementScaler__Fields_FWDDECL)
#include <Modloader/app/structs/IconPlacementScaler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IconPlacementScaler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
