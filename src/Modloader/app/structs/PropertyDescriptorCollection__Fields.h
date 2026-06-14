#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyDescriptorCollection__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyDescriptorCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyDescriptorCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyDescriptorCollection__Fields_DEFINED
struct IDictionary;
struct PropertyDescriptor__Array;
struct String__Array;
struct IComparer;
struct __declspec(align(8)) PropertyDescriptorCollection__Fields {
    struct IDictionary* cachedFoundProperties;
    bool cachedIgnoreCase;
    struct PropertyDescriptor__Array* properties;
    int32_t propCount;
    struct String__Array* namedSort;
    struct IComparer* comparer;
    bool propsOwned;
    bool needSort;
    bool readOnly;
};
#endif
#if !defined(IL2CPP_STRUCT_PropertyDescriptorCollection__Fields_FWDDECL)
#define IL2CPP_STRUCT_PropertyDescriptorCollection__Fields_FWDDECL
#include <Modloader/app/structs/IComparer.h>
#include <Modloader/app/structs/IDictionary.h>
#include <Modloader/app/structs/PropertyDescriptor__Array.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_PropertyDescriptorCollection__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyDescriptorCollection__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PropertyDescriptorCollection__Fields_FWDDECL)
#include <Modloader/app/structs/PropertyDescriptorCollection__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyDescriptorCollection__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
