#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DefaultContractResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DefaultContractResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultContractResolver_DEFINED)
#include <Modloader/app/structs/DefaultContractResolver__Fields.h>
#if defined(IL2CPP_STRUCT_DefaultContractResolver__Fields_DEFINED)
#define IL2CPP_STRUCT_DefaultContractResolver_DEFINED
struct DefaultContractResolver__Class;
struct DefaultContractResolver {
    struct DefaultContractResolver__Class* klass;
    MonitorData* monitor;
    struct DefaultContractResolver__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DefaultContractResolver_FWDDECL)
#define IL2CPP_STRUCT_DefaultContractResolver_FWDDECL
#include <Modloader/app/structs/DefaultContractResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_DefaultContractResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_DefaultContractResolver_DEFINED) && !defined(IL2CPP_STRUCT_DefaultContractResolver_FWDDECL)
#include <Modloader/app/structs/DefaultContractResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DefaultContractResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
