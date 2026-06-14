#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DomainNameHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DomainNameHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_DomainNameHelper_DEFINED)
#define IL2CPP_STRUCT_DomainNameHelper_DEFINED
struct DomainNameHelper__Class;
struct DomainNameHelper {
    struct DomainNameHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_DomainNameHelper_FWDDECL)
#define IL2CPP_STRUCT_DomainNameHelper_FWDDECL
#include <Modloader/app/structs/DomainNameHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_DomainNameHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_DomainNameHelper_DEFINED) && !defined(IL2CPP_STRUCT_DomainNameHelper_FWDDECL)
#include <Modloader/app/structs/DomainNameHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DomainNameHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
