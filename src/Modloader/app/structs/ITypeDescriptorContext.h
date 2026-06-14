#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITypeDescriptorContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITypeDescriptorContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITypeDescriptorContext_DEFINED)
#define IL2CPP_STRUCT_ITypeDescriptorContext_DEFINED
struct ITypeDescriptorContext__Class;
struct ITypeDescriptorContext {
    struct ITypeDescriptorContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITypeDescriptorContext_FWDDECL)
#define IL2CPP_STRUCT_ITypeDescriptorContext_FWDDECL
#include <Modloader/app/structs/ITypeDescriptorContext__Class.h>
#endif
#undef IL2CPP_STRUCT_ITypeDescriptorContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITypeDescriptorContext_DEFINED) && !defined(IL2CPP_STRUCT_ITypeDescriptorContext_FWDDECL)
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITypeDescriptorContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
