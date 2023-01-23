#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeType_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeType_DEFINED)
#include <Modloader/app/structs/RuntimeType__Fields.h>
#if defined(IL2CPP_STRUCT_RuntimeType__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeType_DEFINED
struct RuntimeType__Class;
struct RuntimeType {
    struct RuntimeType__Class* klass;
    MonitorData* monitor;
    struct RuntimeType__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RuntimeType_FWDDECL)
#define IL2CPP_STRUCT_RuntimeType_FWDDECL
#include <Modloader/app/structs/RuntimeType__Class.h>
#endif
#undef IL2CPP_STRUCT_RuntimeType_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeType_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeType_FWDDECL)
#include <Modloader/app/structs/RuntimeType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
