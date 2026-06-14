#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkSegmentInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkSegmentInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSegmentInfo_DEFINED)
#include <Modloader/app/structs/AkSegmentInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkSegmentInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkSegmentInfo_DEFINED
struct AkSegmentInfo__Class;
struct AkSegmentInfo {
    struct AkSegmentInfo__Class* klass;
    MonitorData* monitor;
    struct AkSegmentInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkSegmentInfo_FWDDECL)
#define IL2CPP_STRUCT_AkSegmentInfo_FWDDECL
#include <Modloader/app/structs/AkSegmentInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkSegmentInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkSegmentInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkSegmentInfo_FWDDECL)
#include <Modloader/app/structs/AkSegmentInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkSegmentInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
