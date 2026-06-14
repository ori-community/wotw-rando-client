#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BezierSpline__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BezierSpline__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_BezierSpline__VTable_DEFINED)
#define IL2CPP_STRUCT_BezierSpline__VTable_DEFINED
struct BezierSpline__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetPointCount;
    VirtualInvokeData GetSegmentCount;
    VirtualInvokeData GetPoint;
    VirtualInvokeData GetSegmentLength;
    VirtualInvokeData GetSegmentStartLength;
    VirtualInvokeData GetSegmentEndLength;
    VirtualInvokeData FindSegment;
    VirtualInvokeData GetDrawPosition;
    VirtualInvokeData GetPosition;
    VirtualInvokeData GetTangent;
    VirtualInvokeData GetNormal;
    VirtualInvokeData GetSpeed;
    VirtualInvokeData GetVelocity;
    VirtualInvokeData Rebuild;
    VirtualInvokeData GetColor;
    VirtualInvokeData GetHighlight;
    VirtualInvokeData GetAction;
    VirtualInvokeData PopAction;
};
#endif
#if !defined(IL2CPP_STRUCT_BezierSpline__VTable_FWDDECL)
#define IL2CPP_STRUCT_BezierSpline__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_BezierSpline__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_BezierSpline__VTable_DEFINED) && !defined(IL2CPP_STRUCT_BezierSpline__VTable_FWDDECL)
#include <Modloader/app/structs/BezierSpline__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BezierSpline__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
