#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericScenePosition__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericScenePosition__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericScenePosition__VTable_DEFINED)
#define IL2CPP_STRUCT_GenericScenePosition__VTable_DEFINED
struct GenericScenePosition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Path;
    VirtualInvokeData get_Group;
    VirtualInvokeData get_Name;
    VirtualInvokeData RefreshData;
    VirtualInvokeData OnEnable;
    VirtualInvokeData get_Center;
    VirtualInvokeData set_Center;
};
#endif
#if !defined(IL2CPP_STRUCT_GenericScenePosition__VTable_FWDDECL)
#define IL2CPP_STRUCT_GenericScenePosition__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_GenericScenePosition__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericScenePosition__VTable_DEFINED) && !defined(IL2CPP_STRUCT_GenericScenePosition__VTable_FWDDECL)
#include <Modloader/app/structs/GenericScenePosition__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericScenePosition__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
