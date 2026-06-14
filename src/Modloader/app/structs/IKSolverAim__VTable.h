#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IKSolverAim__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IKSolverAim__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverAim__VTable_DEFINED)
#define IL2CPP_STRUCT_IKSolverAim__VTable_DEFINED
struct IKSolverAim__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData IsValid;
    VirtualInvokeData GetIKPosition;
    VirtualInvokeData GetPoints;
    VirtualInvokeData GetPoint;
    VirtualInvokeData FixTransforms;
    VirtualInvokeData StoreDefaultLocalState;
    VirtualInvokeData OnInitiate;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData get_minBones;
    VirtualInvokeData get_boneLengthCanBeZero;
    VirtualInvokeData get_allowCommonParent;
    VirtualInvokeData get_localDirection;
};
#endif
#if !defined(IL2CPP_STRUCT_IKSolverAim__VTable_FWDDECL)
#define IL2CPP_STRUCT_IKSolverAim__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IKSolverAim__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IKSolverAim__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IKSolverAim__VTable_FWDDECL)
#include <Modloader/app/structs/IKSolverAim__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IKSolverAim__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
