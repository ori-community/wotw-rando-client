#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalCertSelectionCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalCertSelectionCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalCertSelectionCallback_DEFINED)
#include <Modloader/app/structs/LocalCertSelectionCallback__Fields.h>
#if defined(IL2CPP_STRUCT_LocalCertSelectionCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalCertSelectionCallback_DEFINED
struct LocalCertSelectionCallback__Class;
struct LocalCertSelectionCallback {
    struct LocalCertSelectionCallback__Class* klass;
    MonitorData* monitor;
    struct LocalCertSelectionCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalCertSelectionCallback_FWDDECL)
#define IL2CPP_STRUCT_LocalCertSelectionCallback_FWDDECL
#include <Modloader/app/structs/LocalCertSelectionCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalCertSelectionCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalCertSelectionCallback_DEFINED) && !defined(IL2CPP_STRUCT_LocalCertSelectionCallback_FWDDECL)
#include <Modloader/app/structs/LocalCertSelectionCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalCertSelectionCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
