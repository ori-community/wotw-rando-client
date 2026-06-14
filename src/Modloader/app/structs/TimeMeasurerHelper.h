#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeMeasurerHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeMeasurerHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeMeasurerHelper_DEFINED)
#define IL2CPP_STRUCT_TimeMeasurerHelper_DEFINED
struct TimeMeasurerHelper__Class;
struct TimeMeasurerHelper {
    struct TimeMeasurerHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TimeMeasurerHelper_FWDDECL)
#define IL2CPP_STRUCT_TimeMeasurerHelper_FWDDECL
#include <Modloader/app/structs/TimeMeasurerHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeMeasurerHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeMeasurerHelper_DEFINED) && !defined(IL2CPP_STRUCT_TimeMeasurerHelper_FWDDECL)
#include <Modloader/app/structs/TimeMeasurerHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeMeasurerHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
