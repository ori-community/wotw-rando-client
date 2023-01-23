#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlackboardVariableGameObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlackboardVariableGameObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariableGameObject_DEFINED)
#include <Modloader/app/structs/BlackboardVariableGameObject__Fields.h>
#if defined(IL2CPP_STRUCT_BlackboardVariableGameObject__Fields_DEFINED)
#define IL2CPP_STRUCT_BlackboardVariableGameObject_DEFINED
struct BlackboardVariableGameObject__Class;
struct BlackboardVariableGameObject {
    struct BlackboardVariableGameObject__Class* klass;
    MonitorData* monitor;
    struct BlackboardVariableGameObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlackboardVariableGameObject_FWDDECL)
#define IL2CPP_STRUCT_BlackboardVariableGameObject_FWDDECL
#include <Modloader/app/structs/BlackboardVariableGameObject__Class.h>
#endif
#undef IL2CPP_STRUCT_BlackboardVariableGameObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariableGameObject_DEFINED) && !defined(IL2CPP_STRUCT_BlackboardVariableGameObject_FWDDECL)
#include <Modloader/app/structs/BlackboardVariableGameObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlackboardVariableGameObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
