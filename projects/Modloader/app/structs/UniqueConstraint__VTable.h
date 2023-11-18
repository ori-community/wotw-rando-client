#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UniqueConstraint__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UniqueConstraint__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UniqueConstraint__VTable_DEFINED)
#define IL2CPP_STRUCT_UniqueConstraint__VTable_DEFINED
struct UniqueConstraint__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ConstraintName;
    VirtualInvokeData set_ConstraintName;
    VirtualInvokeData get_InCollection;
    VirtualInvokeData set_InCollection;
    VirtualInvokeData get_Table;
    VirtualInvokeData ContainsColumn;
    VirtualInvokeData CanEnableConstraint;
    VirtualInvokeData Clone;
    VirtualInvokeData Clone_1;
    VirtualInvokeData CheckCanAddToCollection;
    VirtualInvokeData CanBeRemovedFromCollection;
    VirtualInvokeData CheckConstraint;
    VirtualInvokeData CheckState;
    VirtualInvokeData get__DataSet;
    VirtualInvokeData IsConstraintViolated;
    VirtualInvokeData get_Columns;
};
#endif
#if !defined(IL2CPP_STRUCT_UniqueConstraint__VTable_FWDDECL)
#define IL2CPP_STRUCT_UniqueConstraint__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_UniqueConstraint__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UniqueConstraint__VTable_DEFINED) && !defined(IL2CPP_STRUCT_UniqueConstraint__VTable_FWDDECL)
#include <Modloader/app/structs/UniqueConstraint__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UniqueConstraint__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
