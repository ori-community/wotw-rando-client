#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlackboardVariableInt_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlackboardVariableInt_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariableInt_DEFINED)
#include <Modloader/app/structs/BlackboardVariableInt__Fields.h>
#if defined(IL2CPP_STRUCT_BlackboardVariableInt__Fields_DEFINED)
#define IL2CPP_STRUCT_BlackboardVariableInt_DEFINED
struct BlackboardVariableInt__Class;
struct BlackboardVariableInt {
    struct BlackboardVariableInt__Class* klass;
    MonitorData* monitor;
    struct BlackboardVariableInt__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlackboardVariableInt_FWDDECL)
#define IL2CPP_STRUCT_BlackboardVariableInt_FWDDECL
#include <Modloader/app/structs/BlackboardVariableInt__Class.h>
#endif
#undef IL2CPP_STRUCT_BlackboardVariableInt_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariableInt_DEFINED) && !defined(IL2CPP_STRUCT_BlackboardVariableInt_FWDDECL)
#include <Modloader/app/structs/BlackboardVariableInt.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlackboardVariableInt.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
