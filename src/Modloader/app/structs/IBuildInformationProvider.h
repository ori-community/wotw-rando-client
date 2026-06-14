#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBuildInformationProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBuildInformationProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBuildInformationProvider_DEFINED)
#define IL2CPP_STRUCT_IBuildInformationProvider_DEFINED
struct IBuildInformationProvider__Class;
struct IBuildInformationProvider {
    struct IBuildInformationProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IBuildInformationProvider_FWDDECL)
#define IL2CPP_STRUCT_IBuildInformationProvider_FWDDECL
#include <Modloader/app/structs/IBuildInformationProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_IBuildInformationProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBuildInformationProvider_DEFINED) && !defined(IL2CPP_STRUCT_IBuildInformationProvider_FWDDECL)
#include <Modloader/app/structs/IBuildInformationProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBuildInformationProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
