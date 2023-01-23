#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoMethod_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoMethod_DEFINED)
#include <Modloader/app/structs/MonoMethod__Fields.h>
#if defined(IL2CPP_STRUCT_MonoMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_MonoMethod_DEFINED
struct MonoMethod__Class;
struct MonoMethod {
    struct MonoMethod__Class* klass;
    MonitorData* monitor;
    struct MonoMethod__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MonoMethod_FWDDECL)
#define IL2CPP_STRUCT_MonoMethod_FWDDECL
#include <Modloader/app/structs/MonoMethod__Class.h>
#endif
#undef IL2CPP_STRUCT_MonoMethod_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoMethod_DEFINED) && !defined(IL2CPP_STRUCT_MonoMethod_FWDDECL)
#include <Modloader/app/structs/MonoMethod.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoMethod.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
