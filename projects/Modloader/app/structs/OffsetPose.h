#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OffsetPose_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OffsetPose_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetPose_DEFINED)
#include <Modloader/app/structs/OffsetPose__Fields.h>
#if defined(IL2CPP_STRUCT_OffsetPose__Fields_DEFINED)
#define IL2CPP_STRUCT_OffsetPose_DEFINED
struct OffsetPose__Class;
struct OffsetPose {
    struct OffsetPose__Class* klass;
    MonitorData* monitor;
    struct OffsetPose__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OffsetPose_FWDDECL)
#define IL2CPP_STRUCT_OffsetPose_FWDDECL
#include <Modloader/app/structs/OffsetPose__Class.h>
#endif
#undef IL2CPP_STRUCT_OffsetPose_INITIALIZING
#if !defined(IL2CPP_STRUCT_OffsetPose_DEFINED) && !defined(IL2CPP_STRUCT_OffsetPose_FWDDECL)
#include <Modloader/app/structs/OffsetPose.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OffsetPose.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
