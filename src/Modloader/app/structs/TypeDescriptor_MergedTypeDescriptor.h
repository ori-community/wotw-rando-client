#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeDescriptor_MergedTypeDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeDescriptor_MergedTypeDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_MergedTypeDescriptor_DEFINED)
#include <Modloader/app/structs/TypeDescriptor_MergedTypeDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_TypeDescriptor_MergedTypeDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeDescriptor_MergedTypeDescriptor_DEFINED
struct TypeDescriptor_MergedTypeDescriptor__Class;
struct TypeDescriptor_MergedTypeDescriptor {
    struct TypeDescriptor_MergedTypeDescriptor__Class* klass;
    MonitorData* monitor;
    struct TypeDescriptor_MergedTypeDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeDescriptor_MergedTypeDescriptor_FWDDECL)
#define IL2CPP_STRUCT_TypeDescriptor_MergedTypeDescriptor_FWDDECL
#include <Modloader/app/structs/TypeDescriptor_MergedTypeDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeDescriptor_MergedTypeDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_MergedTypeDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_TypeDescriptor_MergedTypeDescriptor_FWDDECL)
#include <Modloader/app/structs/TypeDescriptor_MergedTypeDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeDescriptor_MergedTypeDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
