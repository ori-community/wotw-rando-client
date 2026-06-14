#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Behavior__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Behavior__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Behavior__Fields_DEFINED)
#define IL2CPP_STRUCT_Behavior__Fields_DEFINED
struct Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_;
struct __declspec(align(8)) Behavior__Fields {
    bool poly;
    bool quality;
    bool varArea;
    bool convex;
    bool jettison;
    bool boundaryMarkers;
    bool noHoles;
    bool conformDel;
    struct Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_* usertest;
    int32_t noBisect;
    double minAngle;
    double maxAngle;
    double maxArea;
    bool fixedArea;
    bool useSegments;
    bool useRegions;
    double goodAngle;
    double maxGoodAngle;
    double offconstant;
};
#endif
#if !defined(IL2CPP_STRUCT_Behavior__Fields_FWDDECL)
#define IL2CPP_STRUCT_Behavior__Fields_FWDDECL
#include <Modloader/app/structs/Func_3_TriangleNet_Geometry_ITriangle_Double_Boolean_.h>
#endif
#undef IL2CPP_STRUCT_Behavior__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Behavior__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Behavior__Fields_FWDDECL)
#include <Modloader/app/structs/Behavior__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Behavior__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
