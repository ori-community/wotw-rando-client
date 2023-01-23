#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlackboardVariableString_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlackboardVariableString_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariableString_DEFINED)
#include <Modloader/app/structs/BlackboardVariableString__Fields.h>
#if defined(IL2CPP_STRUCT_BlackboardVariableString__Fields_DEFINED)
#define IL2CPP_STRUCT_BlackboardVariableString_DEFINED
struct BlackboardVariableString__Class;
struct BlackboardVariableString {
    struct BlackboardVariableString__Class* klass;
    MonitorData* monitor;
    struct BlackboardVariableString__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlackboardVariableString_FWDDECL)
#define IL2CPP_STRUCT_BlackboardVariableString_FWDDECL
#include <Modloader/app/structs/BlackboardVariableString__Class.h>
#endif
#undef IL2CPP_STRUCT_BlackboardVariableString_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariableString_DEFINED) && !defined(IL2CPP_STRUCT_BlackboardVariableString_FWDDECL)
#include <Modloader/app/structs/BlackboardVariableString.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlackboardVariableString.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
