#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IContractResolver_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IContractResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContractResolver_DEFINED)
#define IL2CPP_STRUCT_IContractResolver_DEFINED
struct IContractResolver__Class;
struct IContractResolver {
    struct IContractResolver__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IContractResolver_FWDDECL)
#define IL2CPP_STRUCT_IContractResolver_FWDDECL
#include <Modloader/app/structs/IContractResolver__Class.h>
#endif
#undef IL2CPP_STRUCT_IContractResolver_INITIALIZING
#if !defined(IL2CPP_STRUCT_IContractResolver_DEFINED) && !defined(IL2CPP_STRUCT_IContractResolver_FWDDECL)
#include <Modloader/app/structs/IContractResolver.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IContractResolver.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
