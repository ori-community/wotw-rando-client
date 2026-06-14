#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseType_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseType_DEFINED)
#include <Modloader/app/structs/BaseType__Fields.h>
#if defined(IL2CPP_STRUCT_BaseType__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseType_DEFINED
struct BaseType__Class;
struct BaseType {
    struct BaseType__Class* klass;
    MonitorData* monitor;
    struct BaseType__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseType_FWDDECL)
#define IL2CPP_STRUCT_BaseType_FWDDECL
#include <Modloader/app/structs/BaseType__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseType_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseType_DEFINED) && !defined(IL2CPP_STRUCT_BaseType_FWDDECL)
#include <Modloader/app/structs/BaseType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
