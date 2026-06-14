#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ILayoutElement__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ILayoutElement__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayoutElement__VTable_DEFINED)
#define IL2CPP_STRUCT_ILayoutElement__VTable_DEFINED
struct ILayoutElement__VTable {
    VirtualInvokeData CalculateLayoutInputHorizontal;
    VirtualInvokeData CalculateLayoutInputVertical;
    VirtualInvokeData get_minWidth;
    VirtualInvokeData get_preferredWidth;
    VirtualInvokeData get_flexibleWidth;
    VirtualInvokeData get_minHeight;
    VirtualInvokeData get_preferredHeight;
    VirtualInvokeData get_flexibleHeight;
    VirtualInvokeData get_layoutPriority;
};
#endif
#if !defined(IL2CPP_STRUCT_ILayoutElement__VTable_FWDDECL)
#define IL2CPP_STRUCT_ILayoutElement__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ILayoutElement__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ILayoutElement__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ILayoutElement__VTable_FWDDECL)
#include <Modloader/app/structs/ILayoutElement__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ILayoutElement__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
