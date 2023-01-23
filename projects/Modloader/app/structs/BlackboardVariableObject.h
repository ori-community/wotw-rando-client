#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlackboardVariableObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlackboardVariableObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariableObject_DEFINED)
#include <Modloader/app/structs/BlackboardVariableObject__Fields.h>
#if defined(IL2CPP_STRUCT_BlackboardVariableObject__Fields_DEFINED)
#define IL2CPP_STRUCT_BlackboardVariableObject_DEFINED
struct BlackboardVariableObject__Class;
struct BlackboardVariableObject {
    struct BlackboardVariableObject__Class* klass;
    MonitorData* monitor;
    struct BlackboardVariableObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlackboardVariableObject_FWDDECL)
#define IL2CPP_STRUCT_BlackboardVariableObject_FWDDECL
#include <Modloader/app/structs/BlackboardVariableObject__Class.h>
#endif
#undef IL2CPP_STRUCT_BlackboardVariableObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariableObject_DEFINED) && !defined(IL2CPP_STRUCT_BlackboardVariableObject_FWDDECL)
#include <Modloader/app/structs/BlackboardVariableObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlackboardVariableObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
