#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateChangeProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateChangeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateChangeProvider_DEFINED)
#include <Modloader/app/structs/StateChangeProvider__Fields.h>
#if defined(IL2CPP_STRUCT_StateChangeProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_StateChangeProvider_DEFINED
struct StateChangeProvider__Class;
struct StateChangeProvider {
    struct StateChangeProvider__Class* klass;
    MonitorData* monitor;
    struct StateChangeProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StateChangeProvider_FWDDECL)
#define IL2CPP_STRUCT_StateChangeProvider_FWDDECL
#include <Modloader/app/structs/StateChangeProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_StateChangeProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateChangeProvider_DEFINED) && !defined(IL2CPP_STRUCT_StateChangeProvider_FWDDECL)
#include <Modloader/app/structs/StateChangeProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateChangeProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
