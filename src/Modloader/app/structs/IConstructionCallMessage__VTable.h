#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IConstructionCallMessage__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IConstructionCallMessage__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstructionCallMessage__VTable_DEFINED)
#define IL2CPP_STRUCT_IConstructionCallMessage__VTable_DEFINED
struct IConstructionCallMessage__VTable {
    VirtualInvokeData get_ActivationType;
    VirtualInvokeData get_ActivationTypeName;
    VirtualInvokeData get_Activator;
    VirtualInvokeData set_Activator;
    VirtualInvokeData get_CallSiteActivationAttributes;
    VirtualInvokeData get_ContextProperties;
};
#endif
#if !defined(IL2CPP_STRUCT_IConstructionCallMessage__VTable_FWDDECL)
#define IL2CPP_STRUCT_IConstructionCallMessage__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IConstructionCallMessage__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstructionCallMessage__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IConstructionCallMessage__VTable_FWDDECL)
#include <Modloader/app/structs/IConstructionCallMessage__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IConstructionCallMessage__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
