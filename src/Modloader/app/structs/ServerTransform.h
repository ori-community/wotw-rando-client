#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerTransform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerTransform_DEFINED)
#include <Modloader/app/structs/ServerTransform__Fields.h>
#if defined(IL2CPP_STRUCT_ServerTransform__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerTransform_DEFINED
struct ServerTransform__Class;
struct ServerTransform {
    struct ServerTransform__Class* klass;
    MonitorData* monitor;
    struct ServerTransform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ServerTransform_FWDDECL)
#define IL2CPP_STRUCT_ServerTransform_FWDDECL
#include <Modloader/app/structs/ServerTransform__Class.h>
#endif
#undef IL2CPP_STRUCT_ServerTransform_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerTransform_DEFINED) && !defined(IL2CPP_STRUCT_ServerTransform_FWDDECL)
#include <Modloader/app/structs/ServerTransform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerTransform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
