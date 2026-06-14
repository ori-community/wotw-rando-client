#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_DEFINED)
#define IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_DEFINED
struct TypeDescriptor_TypeDescriptionNode;
struct Type;
struct Object;
struct TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor {
    struct TypeDescriptor_TypeDescriptionNode* _node;
    struct Type* _objectType;
    struct Object* _instance;
};
#endif
#if !defined(IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_FWDDECL)
#define IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode.h>
#endif
#undef IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor_FWDDECL)
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeDescriptor_TypeDescriptionNode_DefaultTypeDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
