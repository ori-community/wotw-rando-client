#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Authorization_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Authorization_INITIALIZING
#if !defined(IL2CPP_STRUCT_Authorization_DEFINED)
#include <Modloader/app/structs/Authorization__Fields.h>
#if defined(IL2CPP_STRUCT_Authorization__Fields_DEFINED)
#define IL2CPP_STRUCT_Authorization_DEFINED
struct Authorization__Class;
struct Authorization {
    struct Authorization__Class* klass;
    MonitorData* monitor;
    struct Authorization__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Authorization_FWDDECL)
#define IL2CPP_STRUCT_Authorization_FWDDECL
#include <Modloader/app/structs/Authorization__Class.h>
#endif
#undef IL2CPP_STRUCT_Authorization_INITIALIZING
#if !defined(IL2CPP_STRUCT_Authorization_DEFINED) && !defined(IL2CPP_STRUCT_Authorization_FWDDECL)
#include <Modloader/app/structs/Authorization.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Authorization.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
