#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeDescriptor_AttributeFilterCacheItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeDescriptor_AttributeFilterCacheItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_AttributeFilterCacheItem__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeDescriptor_AttributeFilterCacheItem__Fields_DEFINED
struct Attribute__Array;
struct ICollection;
struct __declspec(align(8)) TypeDescriptor_AttributeFilterCacheItem__Fields {
    struct Attribute__Array* _filter;
    struct ICollection* FilteredMembers;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeDescriptor_AttributeFilterCacheItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_TypeDescriptor_AttributeFilterCacheItem__Fields_FWDDECL
#include <Modloader/app/structs/Attribute__Array.h>
#include <Modloader/app/structs/ICollection.h>
#endif
#undef IL2CPP_STRUCT_TypeDescriptor_AttributeFilterCacheItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_AttributeFilterCacheItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TypeDescriptor_AttributeFilterCacheItem__Fields_FWDDECL)
#include <Modloader/app/structs/TypeDescriptor_AttributeFilterCacheItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeDescriptor_AttributeFilterCacheItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
