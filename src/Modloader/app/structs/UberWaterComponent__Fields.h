#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterComponent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterComponent__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UberWaterComponent__Fields_DEFINED
struct UberWaterControl;
struct MeshFilter;
struct UberWaterComponent__Fields {
    struct MonoBehaviour__Fields _;
    struct UberWaterControl* m_control;
    struct MeshFilter* m_filter;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterComponent__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberWaterComponent__Fields_FWDDECL
#include <Modloader/app/structs/MeshFilter.h>
#include <Modloader/app/structs/UberWaterControl.h>
#endif
#undef IL2CPP_STRUCT_UberWaterComponent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterComponent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterComponent__Fields_FWDDECL)
#include <Modloader/app/structs/UberWaterComponent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterComponent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
