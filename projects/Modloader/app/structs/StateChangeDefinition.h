#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateChangeDefinition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateChangeDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateChangeDefinition_DEFINED)
#include <Modloader/app/structs/StateChangeDefinition__Fields.h>
#if defined(IL2CPP_STRUCT_StateChangeDefinition__Fields_DEFINED)
#define IL2CPP_STRUCT_StateChangeDefinition_DEFINED
struct StateChangeDefinition__Class;
struct StateChangeDefinition {
    struct StateChangeDefinition__Class* klass;
    MonitorData* monitor;
    struct StateChangeDefinition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateChangeDefinition_FWDDECL)
#define IL2CPP_STRUCT_StateChangeDefinition_FWDDECL
#include <Modloader/app/structs/StateChangeDefinition__Class.h>
#endif
#undef IL2CPP_STRUCT_StateChangeDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateChangeDefinition_DEFINED) && !defined(IL2CPP_STRUCT_StateChangeDefinition_FWDDECL)
#include <Modloader/app/structs/StateChangeDefinition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateChangeDefinition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
