#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoModule__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoModule__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoModule__VTable_DEFINED)
#define IL2CPP_STRUCT_MonoModule__VTable_DEFINED
struct MonoModule__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData GetCustomAttributes;
    VirtualInvokeData GetCustomAttributes_1;
    VirtualInvokeData IsDefined;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetModuleVersionId;
    VirtualInvokeData get_Assembly;
    VirtualInvokeData get_ScopeName;
    VirtualInvokeData get_ModuleVersionId;
    VirtualInvokeData get_FullyQualifiedName;
    VirtualInvokeData IsResource;
    VirtualInvokeData GetCustomAttributes_2;
    VirtualInvokeData GetCustomAttributes_3;
    VirtualInvokeData IsDefined_1;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoModule__VTable_FWDDECL)
#define IL2CPP_STRUCT_MonoModule__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_MonoModule__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoModule__VTable_DEFINED) && !defined(IL2CPP_STRUCT_MonoModule__VTable_FWDDECL)
#include <Modloader/app/structs/MonoModule__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoModule__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
