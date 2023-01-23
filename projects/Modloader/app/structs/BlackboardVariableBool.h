#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlackboardVariableBool_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlackboardVariableBool_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariableBool_DEFINED)
#include <Modloader/app/structs/BlackboardVariableBool__Fields.h>
#if defined(IL2CPP_STRUCT_BlackboardVariableBool__Fields_DEFINED)
#define IL2CPP_STRUCT_BlackboardVariableBool_DEFINED
struct BlackboardVariableBool__Class;
struct BlackboardVariableBool {
    struct BlackboardVariableBool__Class* klass;
    MonitorData* monitor;
    struct BlackboardVariableBool__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlackboardVariableBool_FWDDECL)
#define IL2CPP_STRUCT_BlackboardVariableBool_FWDDECL
#include <Modloader/app/structs/BlackboardVariableBool__Class.h>
#endif
#undef IL2CPP_STRUCT_BlackboardVariableBool_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariableBool_DEFINED) && !defined(IL2CPP_STRUCT_BlackboardVariableBool_FWDDECL)
#include <Modloader/app/structs/BlackboardVariableBool.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlackboardVariableBool.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
