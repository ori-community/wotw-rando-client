#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTimelineState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTimelineState_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimelineState_DEFINED)
#define IL2CPP_STRUCT_LegacyTimelineState_DEFINED
struct LegacyTimelineState__Class;
struct LegacyTimelineState {
    struct LegacyTimelineState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_LegacyTimelineState_FWDDECL)
#define IL2CPP_STRUCT_LegacyTimelineState_FWDDECL
#include <Modloader/app/structs/LegacyTimelineState__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyTimelineState_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTimelineState_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTimelineState_FWDDECL)
#include <Modloader/app/structs/LegacyTimelineState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTimelineState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
