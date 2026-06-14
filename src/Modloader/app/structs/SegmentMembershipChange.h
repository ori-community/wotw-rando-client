#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SegmentMembershipChange_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SegmentMembershipChange_INITIALIZING
#if !defined(IL2CPP_STRUCT_SegmentMembershipChange_DEFINED)
#include <Modloader/app/structs/SegmentMembershipChange__Fields.h>
#if defined(IL2CPP_STRUCT_SegmentMembershipChange__Fields_DEFINED)
#define IL2CPP_STRUCT_SegmentMembershipChange_DEFINED
struct SegmentMembershipChange__Class;
struct SegmentMembershipChange {
    struct SegmentMembershipChange__Class* klass;
    MonitorData* monitor;
    struct SegmentMembershipChange__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SegmentMembershipChange_FWDDECL)
#define IL2CPP_STRUCT_SegmentMembershipChange_FWDDECL
#include <Modloader/app/structs/SegmentMembershipChange__Class.h>
#endif
#undef IL2CPP_STRUCT_SegmentMembershipChange_INITIALIZING
#if !defined(IL2CPP_STRUCT_SegmentMembershipChange_DEFINED) && !defined(IL2CPP_STRUCT_SegmentMembershipChange_FWDDECL)
#include <Modloader/app/structs/SegmentMembershipChange.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SegmentMembershipChange.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
