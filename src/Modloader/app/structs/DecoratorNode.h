#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DecoratorNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DecoratorNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoratorNode_DEFINED)
#include <Modloader/app/structs/DecoratorNode__Fields.h>
#if defined(IL2CPP_STRUCT_DecoratorNode__Fields_DEFINED)
#define IL2CPP_STRUCT_DecoratorNode_DEFINED
struct DecoratorNode__Class;
struct DecoratorNode {
    struct DecoratorNode__Class* klass;
    MonitorData* monitor;
    struct DecoratorNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DecoratorNode_FWDDECL)
#define IL2CPP_STRUCT_DecoratorNode_FWDDECL
#include <Modloader/app/structs/DecoratorNode__Class.h>
#endif
#undef IL2CPP_STRUCT_DecoratorNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_DecoratorNode_DEFINED) && !defined(IL2CPP_STRUCT_DecoratorNode_FWDDECL)
#include <Modloader/app/structs/DecoratorNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DecoratorNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
