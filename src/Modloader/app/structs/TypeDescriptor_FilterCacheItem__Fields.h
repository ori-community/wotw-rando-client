#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeDescriptor_FilterCacheItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeDescriptor_FilterCacheItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_FilterCacheItem__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeDescriptor_FilterCacheItem__Fields_DEFINED
struct ITypeDescriptorFilterService;
struct ICollection;
struct __declspec(align(8)) TypeDescriptor_FilterCacheItem__Fields {
    struct ITypeDescriptorFilterService* _filterService;
    struct ICollection* FilteredMembers;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeDescriptor_FilterCacheItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_TypeDescriptor_FilterCacheItem__Fields_FWDDECL
#include <Modloader/app/structs/ICollection.h>
#include <Modloader/app/structs/ITypeDescriptorFilterService.h>
#endif
#undef IL2CPP_STRUCT_TypeDescriptor_FilterCacheItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_FilterCacheItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TypeDescriptor_FilterCacheItem__Fields_FWDDECL)
#include <Modloader/app/structs/TypeDescriptor_FilterCacheItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeDescriptor_FilterCacheItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
