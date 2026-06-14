#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RBTreeError__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RBTreeError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RBTreeError__Enum_DEFINED)
#define IL2CPP_STRUCT_RBTreeError__Enum_DEFINED
enum class RBTreeError__Enum : int32_t {
    InvalidPageSize = 0x00000001,
    PagePositionInSlotInUse = 0x00000003,
    NoFreeSlots = 0x00000004,
    InvalidStateinInsert = 0x00000005,
    InvalidNextSizeInDelete = 0x00000007,
    InvalidStateinDelete = 0x00000008,
    InvalidNodeSizeinDelete = 0x00000009,
    InvalidStateinEndDelete = 0x0000000a,
    CannotRotateInvalidsuccessorNodeinDelete = 0x0000000b,
    IndexOutOFRangeinGetNodeByIndex = 0x0000000d,
    RBDeleteFixup = 0x0000000e,
    UnsupportedAccessMethod1 = 0x0000000f,
    UnsupportedAccessMethod2 = 0x00000010,
    UnsupportedAccessMethodInNonNillRootSubtree = 0x00000011,
    AttachedNodeWithZerorbTreeNodeId = 0x00000012,
    CompareNodeInDataRowTree = 0x00000013,
    CompareSateliteTreeNodeInDataRowTree = 0x00000014,
    NestedSatelliteTreeEnumerator = 0x00000015,
};
#endif
#if !defined(IL2CPP_STRUCT_RBTreeError__Enum_FWDDECL)
#define IL2CPP_STRUCT_RBTreeError__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_RBTreeError__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_RBTreeError__Enum_DEFINED) && !defined(IL2CPP_STRUCT_RBTreeError__Enum_FWDDECL)
#include <Modloader/app/structs/RBTreeError__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RBTreeError__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
