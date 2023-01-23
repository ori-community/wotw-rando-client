#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlackboardVariableFloat_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlackboardVariableFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariableFloat_DEFINED)
#include <Modloader/app/structs/BlackboardVariableFloat__Fields.h>
#if defined(IL2CPP_STRUCT_BlackboardVariableFloat__Fields_DEFINED)
#define IL2CPP_STRUCT_BlackboardVariableFloat_DEFINED
struct BlackboardVariableFloat__Class;
struct BlackboardVariableFloat {
    struct BlackboardVariableFloat__Class* klass;
    MonitorData* monitor;
    struct BlackboardVariableFloat__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlackboardVariableFloat_FWDDECL)
#define IL2CPP_STRUCT_BlackboardVariableFloat_FWDDECL
#include <Modloader/app/structs/BlackboardVariableFloat__Class.h>
#endif
#undef IL2CPP_STRUCT_BlackboardVariableFloat_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariableFloat_DEFINED) && !defined(IL2CPP_STRUCT_BlackboardVariableFloat_FWDDECL)
#include <Modloader/app/structs/BlackboardVariableFloat.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlackboardVariableFloat.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
