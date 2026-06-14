#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FromBase64Transform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FromBase64Transform_INITIALIZING
#if !defined(IL2CPP_STRUCT_FromBase64Transform_DEFINED)
#include <Modloader/app/structs/FromBase64Transform__Fields.h>
#if defined(IL2CPP_STRUCT_FromBase64Transform__Fields_DEFINED)
#define IL2CPP_STRUCT_FromBase64Transform_DEFINED
struct FromBase64Transform__Class;
struct FromBase64Transform {
    struct FromBase64Transform__Class* klass;
    MonitorData* monitor;
    struct FromBase64Transform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FromBase64Transform_FWDDECL)
#define IL2CPP_STRUCT_FromBase64Transform_FWDDECL
#include <Modloader/app/structs/FromBase64Transform__Class.h>
#endif
#undef IL2CPP_STRUCT_FromBase64Transform_INITIALIZING
#if !defined(IL2CPP_STRUCT_FromBase64Transform_DEFINED) && !defined(IL2CPP_STRUCT_FromBase64Transform_FWDDECL)
#include <Modloader/app/structs/FromBase64Transform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FromBase64Transform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
