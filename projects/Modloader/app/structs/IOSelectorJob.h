#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IOSelectorJob_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IOSelectorJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOSelectorJob_DEFINED)
#include <Modloader/app/structs/IOSelectorJob__Fields.h>
#if defined(IL2CPP_STRUCT_IOSelectorJob__Fields_DEFINED)
#define IL2CPP_STRUCT_IOSelectorJob_DEFINED
struct IOSelectorJob__Class;
struct IOSelectorJob {
    struct IOSelectorJob__Class* klass;
    MonitorData* monitor;
    struct IOSelectorJob__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IOSelectorJob_FWDDECL)
#define IL2CPP_STRUCT_IOSelectorJob_FWDDECL
#include <Modloader/app/structs/IOSelectorJob__Class.h>
#endif
#undef IL2CPP_STRUCT_IOSelectorJob_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOSelectorJob_DEFINED) && !defined(IL2CPP_STRUCT_IOSelectorJob_FWDDECL)
#include <Modloader/app/structs/IOSelectorJob.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IOSelectorJob.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
