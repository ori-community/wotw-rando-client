#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EarlyZParentDebugger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EarlyZParentDebugger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZParentDebugger__Fields_DEFINED)
#include <Modloader/app/structs/EarlyZGrid.h>
#include <Modloader/app/structs/EarlyZParentDebugger_GridOptions.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_EarlyZGrid_DEFINED) && defined(IL2CPP_STRUCT_EarlyZParentDebugger_GridOptions_DEFINED)
#define IL2CPP_STRUCT_EarlyZParentDebugger__Fields_DEFINED
struct EarlyZParentDebugger__Fields {
    struct MonoBehaviour__Fields _;
    struct EarlyZGrid grid;
    bool debug;
    struct EarlyZParentDebugger_GridOptions gridOptions;
    int32_t selectedCellX;
    int32_t selectedCellY;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EarlyZParentDebugger__Fields_FWDDECL)
#define IL2CPP_STRUCT_EarlyZParentDebugger__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_EarlyZParentDebugger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZParentDebugger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EarlyZParentDebugger__Fields_FWDDECL)
#include <Modloader/app/structs/EarlyZParentDebugger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EarlyZParentDebugger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
