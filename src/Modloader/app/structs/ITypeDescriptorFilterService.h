#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITypeDescriptorFilterService_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITypeDescriptorFilterService_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITypeDescriptorFilterService_DEFINED)
#define IL2CPP_STRUCT_ITypeDescriptorFilterService_DEFINED
struct ITypeDescriptorFilterService__Class;
struct ITypeDescriptorFilterService {
    struct ITypeDescriptorFilterService__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITypeDescriptorFilterService_FWDDECL)
#define IL2CPP_STRUCT_ITypeDescriptorFilterService_FWDDECL
#include <Modloader/app/structs/ITypeDescriptorFilterService__Class.h>
#endif
#undef IL2CPP_STRUCT_ITypeDescriptorFilterService_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITypeDescriptorFilterService_DEFINED) && !defined(IL2CPP_STRUCT_ITypeDescriptorFilterService_FWDDECL)
#include <Modloader/app/structs/ITypeDescriptorFilterService.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITypeDescriptorFilterService.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
