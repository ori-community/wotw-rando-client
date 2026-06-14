#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_fsAotVersionInfo__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_fsAotVersionInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsAotVersionInfo__Boxed_DEFINED)
#include <Modloader/app/structs/fsAotVersionInfo.h>
#if defined(IL2CPP_STRUCT_fsAotVersionInfo_DEFINED)
#define IL2CPP_STRUCT_fsAotVersionInfo__Boxed_DEFINED
struct fsAotVersionInfo__Class;
struct fsAotVersionInfo__Boxed {
    struct fsAotVersionInfo__Class* klass;
    MonitorData* monitor;
    struct fsAotVersionInfo fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_fsAotVersionInfo__Boxed_FWDDECL)
#define IL2CPP_STRUCT_fsAotVersionInfo__Boxed_FWDDECL
#include <Modloader/app/structs/fsAotVersionInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_fsAotVersionInfo__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_fsAotVersionInfo__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_fsAotVersionInfo__Boxed_FWDDECL)
#include <Modloader/app/structs/fsAotVersionInfo__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/fsAotVersionInfo__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
