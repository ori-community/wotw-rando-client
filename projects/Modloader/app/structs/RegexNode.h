#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegexNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegexNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexNode_DEFINED)
#include <Modloader/app/structs/RegexNode__Fields.h>
#if defined(IL2CPP_STRUCT_RegexNode__Fields_DEFINED)
#define IL2CPP_STRUCT_RegexNode_DEFINED
struct RegexNode__Class;
struct RegexNode {
    struct RegexNode__Class* klass;
    MonitorData* monitor;
    struct RegexNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegexNode_FWDDECL)
#define IL2CPP_STRUCT_RegexNode_FWDDECL
#include <Modloader/app/structs/RegexNode__Class.h>
#endif
#undef IL2CPP_STRUCT_RegexNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegexNode_DEFINED) && !defined(IL2CPP_STRUCT_RegexNode_FWDDECL)
#include <Modloader/app/structs/RegexNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegexNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
