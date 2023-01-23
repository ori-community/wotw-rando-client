#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonContainerContract_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonContainerContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContainerContract_DEFINED)
#include <Modloader/app/structs/JsonContainerContract__Fields.h>
#if defined(IL2CPP_STRUCT_JsonContainerContract__Fields_DEFINED)
#define IL2CPP_STRUCT_JsonContainerContract_DEFINED
struct JsonContainerContract__Class;
struct JsonContainerContract {
    struct JsonContainerContract__Class* klass;
    MonitorData* monitor;
    struct JsonContainerContract__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonContainerContract_FWDDECL)
#define IL2CPP_STRUCT_JsonContainerContract_FWDDECL
#include <Modloader/app/structs/JsonContainerContract__Class.h>
#endif
#undef IL2CPP_STRUCT_JsonContainerContract_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonContainerContract_DEFINED) && !defined(IL2CPP_STRUCT_JsonContainerContract_FWDDECL)
#include <Modloader/app/structs/JsonContainerContract.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonContainerContract.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
