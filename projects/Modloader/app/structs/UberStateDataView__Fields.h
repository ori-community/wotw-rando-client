#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateDataView__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateDataView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateDataView__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Moon_UberStateVisualization_UberStateData_.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Rect_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Moon_UberStateVisualization_UberStateData__DEFINED)
#define IL2CPP_STRUCT_UberStateDataView__Fields_DEFINED
struct __declspec(align(8)) UberStateDataView__Fields {
    struct Rect m_viewRect;
    struct Rect m_headerRect;
    struct Nullable_1_Moon_UberStateVisualization_UberStateData_ m_uberStateData;
    int32_t m_lastControlId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateDataView__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberStateDataView__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberStateDataView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateDataView__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberStateDataView__Fields_FWDDECL)
#include <Modloader/app/structs/UberStateDataView__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateDataView__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
