#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CommandPressedCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CommandPressedCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommandPressedCondition_DEFINED)
#include <Modloader/app/structs/CommandPressedCondition__Fields.h>
#if defined(IL2CPP_STRUCT_CommandPressedCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_CommandPressedCondition_DEFINED
struct CommandPressedCondition__Class;
struct CommandPressedCondition {
    struct CommandPressedCondition__Class* klass;
    MonitorData* monitor;
    struct CommandPressedCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CommandPressedCondition_FWDDECL)
#define IL2CPP_STRUCT_CommandPressedCondition_FWDDECL
#include <Modloader/app/structs/CommandPressedCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_CommandPressedCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommandPressedCondition_DEFINED) && !defined(IL2CPP_STRUCT_CommandPressedCondition_FWDDECL)
#include <Modloader/app/structs/CommandPressedCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CommandPressedCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
