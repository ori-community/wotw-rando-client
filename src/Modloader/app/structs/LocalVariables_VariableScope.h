#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalVariables_VariableScope_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalVariables_VariableScope_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariables_VariableScope_DEFINED)
#include <Modloader/app/structs/LocalVariables_VariableScope__Fields.h>
#if defined(IL2CPP_STRUCT_LocalVariables_VariableScope__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalVariables_VariableScope_DEFINED
struct LocalVariables_VariableScope__Class;
struct LocalVariables_VariableScope {
    struct LocalVariables_VariableScope__Class* klass;
    MonitorData* monitor;
    struct LocalVariables_VariableScope__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalVariables_VariableScope_FWDDECL)
#define IL2CPP_STRUCT_LocalVariables_VariableScope_FWDDECL
#include <Modloader/app/structs/LocalVariables_VariableScope__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalVariables_VariableScope_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalVariables_VariableScope_DEFINED) && !defined(IL2CPP_STRUCT_LocalVariables_VariableScope_FWDDECL)
#include <Modloader/app/structs/LocalVariables_VariableScope.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalVariables_VariableScope.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
