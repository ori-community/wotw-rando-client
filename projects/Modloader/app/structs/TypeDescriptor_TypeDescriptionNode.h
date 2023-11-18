#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_DEFINED)
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode__Fields.h>
#if defined(IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_DEFINED
struct TypeDescriptor_TypeDescriptionNode__Class;
struct TypeDescriptor_TypeDescriptionNode {
    struct TypeDescriptor_TypeDescriptionNode__Class* klass;
    MonitorData* monitor;
    struct TypeDescriptor_TypeDescriptionNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_FWDDECL)
#define IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_FWDDECL
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_DEFINED) && !defined(IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_FWDDECL)
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
