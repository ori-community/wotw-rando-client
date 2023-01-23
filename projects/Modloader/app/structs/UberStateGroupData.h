#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberStateGroupData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberStateGroupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateGroupData_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_UberStateGroupData_DEFINED
struct UberID;
struct List_1_Moon_UberStateVisualization_UberStateData_;
struct List_1_UnityEngine_Rect_;
struct String;
struct UberStateGroupData {
    struct UberID* Id;
    struct Color Color;
    struct Rect GroupRect;
    int64_t DataSize;
    struct List_1_Moon_UberStateVisualization_UberStateData_* States;
    struct List_1_UnityEngine_Rect_* GroupSplitters;
    struct String* m_name;
    int32_t m_previusStateCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberStateGroupData_FWDDECL)
#define IL2CPP_STRUCT_UberStateGroupData_FWDDECL
#include <Modloader/app/structs/List_1_Moon_UberStateVisualization_UberStateData_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Rect_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberID.h>
#endif
#undef IL2CPP_STRUCT_UberStateGroupData_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberStateGroupData_DEFINED) && !defined(IL2CPP_STRUCT_UberStateGroupData_FWDDECL)
#include <Modloader/app/structs/UberStateGroupData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberStateGroupData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
