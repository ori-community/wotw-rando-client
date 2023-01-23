#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeDescriptor_AttributeProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeDescriptor_AttributeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_AttributeProvider_DEFINED)
#include <Modloader/app/structs/TypeDescriptor_AttributeProvider__Fields.h>
#if defined(IL2CPP_STRUCT_TypeDescriptor_AttributeProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeDescriptor_AttributeProvider_DEFINED
struct TypeDescriptor_AttributeProvider__Class;
struct TypeDescriptor_AttributeProvider {
    struct TypeDescriptor_AttributeProvider__Class* klass;
    MonitorData* monitor;
    struct TypeDescriptor_AttributeProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeDescriptor_AttributeProvider_FWDDECL)
#define IL2CPP_STRUCT_TypeDescriptor_AttributeProvider_FWDDECL
#include <Modloader/app/structs/TypeDescriptor_AttributeProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeDescriptor_AttributeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_AttributeProvider_DEFINED) && !defined(IL2CPP_STRUCT_TypeDescriptor_AttributeProvider_FWDDECL)
#include <Modloader/app/structs/TypeDescriptor_AttributeProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeDescriptor_AttributeProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
