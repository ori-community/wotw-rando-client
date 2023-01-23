#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneStatistics_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneStatistics_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneStatistics_DEFINED)
#define IL2CPP_STRUCT_XboxOneStatistics_DEFINED
struct XboxOneStatistics__Class;
struct XboxOneStatistics {
    struct XboxOneStatistics__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneStatistics_FWDDECL)
#define IL2CPP_STRUCT_XboxOneStatistics_FWDDECL
#include <Modloader/app/structs/XboxOneStatistics__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneStatistics_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneStatistics_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneStatistics_FWDDECL)
#include <Modloader/app/structs/XboxOneStatistics.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneStatistics.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
