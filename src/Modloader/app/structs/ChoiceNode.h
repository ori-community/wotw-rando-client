#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChoiceNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChoiceNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChoiceNode_DEFINED)
#include <Modloader/app/structs/ChoiceNode__Fields.h>
#if defined(IL2CPP_STRUCT_ChoiceNode__Fields_DEFINED)
#define IL2CPP_STRUCT_ChoiceNode_DEFINED
struct ChoiceNode__Class;
struct ChoiceNode {
    struct ChoiceNode__Class* klass;
    MonitorData* monitor;
    struct ChoiceNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChoiceNode_FWDDECL)
#define IL2CPP_STRUCT_ChoiceNode_FWDDECL
#include <Modloader/app/structs/ChoiceNode__Class.h>
#endif
#undef IL2CPP_STRUCT_ChoiceNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChoiceNode_DEFINED) && !defined(IL2CPP_STRUCT_ChoiceNode_FWDDECL)
#include <Modloader/app/structs/ChoiceNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChoiceNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
