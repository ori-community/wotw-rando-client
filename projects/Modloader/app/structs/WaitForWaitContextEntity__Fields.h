#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaitForWaitContextEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaitForWaitContextEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForWaitContextEntity__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_WaitForWaitContextEntity__Fields_DEFINED
struct IWaitContext;
struct WaitForWaitContextEntity__Fields {
    struct TimelineEntity__Fields _;
    float m_time;
    bool m_isFinished;
    struct IWaitContext* m_WaitContext;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaitForWaitContextEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_WaitForWaitContextEntity__Fields_FWDDECL
#include <Modloader/app/structs/IWaitContext.h>
#endif
#undef IL2CPP_STRUCT_WaitForWaitContextEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaitForWaitContextEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WaitForWaitContextEntity__Fields_FWDDECL)
#include <Modloader/app/structs/WaitForWaitContextEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaitForWaitContextEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
