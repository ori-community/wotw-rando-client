#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionManagerAccelerator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionManagerAccelerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManagerAccelerator__Fields_DEFINED)
#define IL2CPP_STRUCT_UberInteractionManagerAccelerator__Fields_DEFINED
struct UberInteractionManagerAccelerator_Cell__Array;
struct UberInteractionManagerAccelerator_CellInteractionData__Array;
struct __declspec(align(8)) UberInteractionManagerAccelerator__Fields {
    float _CellSize_k__BackingField;
    float _InvCellSize_k__BackingField;
    struct UberInteractionManagerAccelerator_Cell__Array* m_cells;
    struct UberInteractionManagerAccelerator_CellInteractionData__Array* m_dynamicObjects;
    int32_t m_splitCount;
};
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionManagerAccelerator__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionManagerAccelerator__Fields_FWDDECL
#include <Modloader/app/structs/UberInteractionManagerAccelerator_CellInteractionData__Array.h>
#include <Modloader/app/structs/UberInteractionManagerAccelerator_Cell__Array.h>
#endif
#undef IL2CPP_STRUCT_UberInteractionManagerAccelerator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManagerAccelerator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionManagerAccelerator__Fields_FWDDECL)
#include <Modloader/app/structs/UberInteractionManagerAccelerator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionManagerAccelerator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
