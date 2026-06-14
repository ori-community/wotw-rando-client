#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkPositioningInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkPositioningInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPositioningInfo_DEFINED)
#include <Modloader/app/structs/AkPositioningInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkPositioningInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkPositioningInfo_DEFINED
struct AkPositioningInfo__Class;
struct AkPositioningInfo {
    struct AkPositioningInfo__Class* klass;
    MonitorData* monitor;
    struct AkPositioningInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkPositioningInfo_FWDDECL)
#define IL2CPP_STRUCT_AkPositioningInfo_FWDDECL
#include <Modloader/app/structs/AkPositioningInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkPositioningInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkPositioningInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkPositioningInfo_FWDDECL)
#include <Modloader/app/structs/AkPositioningInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkPositioningInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
