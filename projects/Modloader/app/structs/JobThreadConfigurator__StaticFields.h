#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JobThreadConfigurator__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JobThreadConfigurator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobThreadConfigurator__StaticFields_DEFINED)
#include <Modloader/app/structs/JobThreadConfigurator_PreloadManagerThreadingMode__Enum.h>
#include <Modloader/app/structs/JobThreadConfigurator_SaveIOThreadingMode__Enum.h>
#include <Modloader/app/structs/JobThreadConfigurator_ThreadingMode__Enum.h>
#include <Modloader/app/structs/ThreadPriority__Enum_1.h>
#if defined(IL2CPP_STRUCT_JobThreadConfigurator_ThreadingMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_ThreadPriority__Enum_1_DEFINED) && defined(IL2CPP_STRUCT_JobThreadConfigurator_PreloadManagerThreadingMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_JobThreadConfigurator_SaveIOThreadingMode__Enum_DEFINED)
#define IL2CPP_STRUCT_JobThreadConfigurator__StaticFields_DEFINED
struct JobThreadConfigurator__StaticFields {
    int32_t NumWorkers;
    JobThreadConfigurator_ThreadingMode__Enum m_currentMode;

    ThreadPriority__Enum_1 m_currentPrio;

    JobThreadConfigurator_PreloadManagerThreadingMode__Enum m_preloadManagerMode;

    JobThreadConfigurator_SaveIOThreadingMode__Enum m_saveIoThreadingMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JobThreadConfigurator__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_JobThreadConfigurator__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_JobThreadConfigurator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JobThreadConfigurator__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_JobThreadConfigurator__StaticFields_FWDDECL)
#include <Modloader/app/structs/JobThreadConfigurator__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JobThreadConfigurator__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
