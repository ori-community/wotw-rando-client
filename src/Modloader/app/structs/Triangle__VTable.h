#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Triangle__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Triangle__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Triangle__VTable_DEFINED)
#define IL2CPP_STRUCT_Triangle__VTable_DEFINED
struct Triangle__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ID;
    VirtualInvokeData set_ID;
    VirtualInvokeData get_Label;
    VirtualInvokeData set_Label;
    VirtualInvokeData get_Area;
    VirtualInvokeData set_Area;
    VirtualInvokeData GetVertex;
    VirtualInvokeData GetVertexID;
    VirtualInvokeData GetNeighbor;
    VirtualInvokeData GetNeighborID;
    VirtualInvokeData GetSegment;
};
#endif
#if !defined(IL2CPP_STRUCT_Triangle__VTable_FWDDECL)
#define IL2CPP_STRUCT_Triangle__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_Triangle__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Triangle__VTable_DEFINED) && !defined(IL2CPP_STRUCT_Triangle__VTable_FWDDECL)
#include <Modloader/app/structs/Triangle__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Triangle__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
