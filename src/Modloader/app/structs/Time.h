#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Time_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Time_INITIALIZING
#if !defined(IL2CPP_STRUCT_Time_DEFINED)
#define IL2CPP_STRUCT_Time_DEFINED
struct Time__Class;
struct Time {
    struct Time__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Time_FWDDECL)
#define IL2CPP_STRUCT_Time_FWDDECL
#include <Modloader/app/structs/Time__Class.h>
#endif
#undef IL2CPP_STRUCT_Time_INITIALIZING
#if !defined(IL2CPP_STRUCT_Time_DEFINED) && !defined(IL2CPP_STRUCT_Time_FWDDECL)
#include <Modloader/app/structs/Time.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Time.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
