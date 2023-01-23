#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrackingExclusions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrackingExclusions_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackingExclusions_DEFINED)
#define IL2CPP_STRUCT_TrackingExclusions_DEFINED
struct TrackingExclusions {
    bool ExcludePosition;
    bool ExcludeRotation;
    bool ExcludeScale;
    bool ExcludeActivation;
};
#endif
#if !defined(IL2CPP_STRUCT_TrackingExclusions_FWDDECL)
#define IL2CPP_STRUCT_TrackingExclusions_FWDDECL
#endif
#undef IL2CPP_STRUCT_TrackingExclusions_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrackingExclusions_DEFINED) && !defined(IL2CPP_STRUCT_TrackingExclusions_FWDDECL)
#include <Modloader/app/structs/TrackingExclusions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrackingExclusions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
