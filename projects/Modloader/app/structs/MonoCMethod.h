#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoCMethod_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoCMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoCMethod_DEFINED)
#include <Modloader/app/structs/MonoCMethod__Fields.h>
#if defined(IL2CPP_STRUCT_MonoCMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoCMethod_DEFINED
struct MonoCMethod__Class;
struct MonoCMethod {
    struct MonoCMethod__Class* klass;
    MonitorData* monitor;
    struct MonoCMethod__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoCMethod_FWDDECL)
#define IL2CPP_STRUCT_MonoCMethod_FWDDECL
#include <Modloader/app/structs/MonoCMethod__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoCMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoCMethod_DEFINED) && !defined(IL2CPP_STRUCT_MonoCMethod_FWDDECL)
#include <Modloader/app/structs/MonoCMethod.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoCMethod.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
