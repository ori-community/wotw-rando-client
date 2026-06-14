#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlackboardVariable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlackboardVariable_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariable_DEFINED)
#include <Modloader/app/structs/BlackboardVariable__Fields.h>
#if defined(IL2CPP_STRUCT_BlackboardVariable__Fields_DEFINED)
#define IL2CPP_STRUCT_BlackboardVariable_DEFINED
struct BlackboardVariable__Class;
struct BlackboardVariable {
    struct BlackboardVariable__Class* klass;
    MonitorData* monitor;
    struct BlackboardVariable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlackboardVariable_FWDDECL)
#define IL2CPP_STRUCT_BlackboardVariable_FWDDECL
#include <Modloader/app/structs/BlackboardVariable__Class.h>
#endif
#undef IL2CPP_STRUCT_BlackboardVariable_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlackboardVariable_DEFINED) && !defined(IL2CPP_STRUCT_BlackboardVariable_FWDDECL)
#include <Modloader/app/structs/BlackboardVariable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlackboardVariable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
