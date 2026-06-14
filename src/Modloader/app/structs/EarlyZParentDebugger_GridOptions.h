#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EarlyZParentDebugger_GridOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EarlyZParentDebugger_GridOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZParentDebugger_GridOptions_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_EarlyZParentDebugger_GridOptions_DEFINED
struct EarlyZParentDebugger_GridOptions {
    bool draw;
    bool drawBounds;
    bool drawPlaneZero;
    bool drawFrontPlane;
    bool drawBackPlane;
    bool drawAllPlanes;
    bool drawDepthLines;
    bool drawCells;
    struct Color color;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EarlyZParentDebugger_GridOptions_FWDDECL)
#define IL2CPP_STRUCT_EarlyZParentDebugger_GridOptions_FWDDECL
#endif
#undef IL2CPP_STRUCT_EarlyZParentDebugger_GridOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZParentDebugger_GridOptions_DEFINED) && !defined(IL2CPP_STRUCT_EarlyZParentDebugger_GridOptions_FWDDECL)
#include <Modloader/app/structs/EarlyZParentDebugger_GridOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EarlyZParentDebugger_GridOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
