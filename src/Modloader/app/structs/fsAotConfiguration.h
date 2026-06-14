#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsAotConfiguration_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsAotConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsAotConfiguration_DEFINED)
#include <Modloader/app/structs/fsAotConfiguration__Fields.h>
#if defined(IL2CPP_STRUCT_fsAotConfiguration__Fields_DEFINED)
#define IL2CPP_STRUCT_fsAotConfiguration_DEFINED
struct fsAotConfiguration__Class;
struct fsAotConfiguration {
    struct fsAotConfiguration__Class* klass;
    MonitorData* monitor;
    struct fsAotConfiguration__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsAotConfiguration_FWDDECL)
#define IL2CPP_STRUCT_fsAotConfiguration_FWDDECL
#include <Modloader/app/structs/fsAotConfiguration__Class.h>
#endif
#undef IL2CPP_STRUCT_fsAotConfiguration_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsAotConfiguration_DEFINED) && !defined(IL2CPP_STRUCT_fsAotConfiguration_FWDDECL)
#include <Modloader/app/structs/fsAotConfiguration.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsAotConfiguration.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
