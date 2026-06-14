#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPolygon__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPolygon__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPolygon__VTable_DEFINED)
#define IL2CPP_STRUCT_IPolygon__VTable_DEFINED
struct IPolygon__VTable {
    VirtualInvokeData get_Points;
    VirtualInvokeData get_Segments;
    VirtualInvokeData get_Holes;
    VirtualInvokeData get_Regions;
    VirtualInvokeData get_HasPointMarkers;
    VirtualInvokeData set_HasPointMarkers;
    VirtualInvokeData get_HasSegmentMarkers;
    VirtualInvokeData set_HasSegmentMarkers;
    VirtualInvokeData AddContour;
    VirtualInvokeData AddContour_1;
    VirtualInvokeData Bounds;
    VirtualInvokeData Add;
    VirtualInvokeData Add_1;
    VirtualInvokeData Add_2;
    VirtualInvokeData Add_3;
    VirtualInvokeData Add_4;
};
#endif
#if !defined(IL2CPP_STRUCT_IPolygon__VTable_FWDDECL)
#define IL2CPP_STRUCT_IPolygon__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IPolygon__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPolygon__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IPolygon__VTable_FWDDECL)
#include <Modloader/app/structs/IPolygon__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPolygon__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
