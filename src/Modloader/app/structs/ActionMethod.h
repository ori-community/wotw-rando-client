#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActionMethod_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActionMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionMethod_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_ActionMethod_DEFINED
struct ActionMethod__Class;
struct ActionMethod {
    struct ActionMethod__Class* klass;
    MonitorData* monitor;
    struct ActionMethod__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActionMethod_FWDDECL)
#define IL2CPP_STRUCT_ActionMethod_FWDDECL
#include <Modloader/app/structs/ActionMethod__Class.h>
#endif
#undef IL2CPP_STRUCT_ActionMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActionMethod_DEFINED) && !defined(IL2CPP_STRUCT_ActionMethod_FWDDECL)
#include <Modloader/app/structs/ActionMethod.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActionMethod.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
