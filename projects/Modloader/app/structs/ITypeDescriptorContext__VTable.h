#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITypeDescriptorContext__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITypeDescriptorContext__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITypeDescriptorContext__VTable_DEFINED)
#define IL2CPP_STRUCT_ITypeDescriptorContext__VTable_DEFINED
struct ITypeDescriptorContext__VTable {
    VirtualInvokeData get_Container;
    VirtualInvokeData get_Instance;
    VirtualInvokeData get_PropertyDescriptor;
    VirtualInvokeData OnComponentChanging;
    VirtualInvokeData OnComponentChanged;
};
#endif
#if !defined(IL2CPP_STRUCT_ITypeDescriptorContext__VTable_FWDDECL)
#define IL2CPP_STRUCT_ITypeDescriptorContext__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ITypeDescriptorContext__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITypeDescriptorContext__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ITypeDescriptorContext__VTable_FWDDECL)
#include <Modloader/app/structs/ITypeDescriptorContext__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITypeDescriptorContext__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
