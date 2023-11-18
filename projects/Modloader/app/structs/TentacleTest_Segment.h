#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleTest_Segment_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleTest_Segment_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleTest_Segment_DEFINED)
#include <Modloader/app/structs/TentacleTest_Segment__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleTest_Segment__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleTest_Segment_DEFINED
struct TentacleTest_Segment__Class;
struct TentacleTest_Segment {
    struct TentacleTest_Segment__Class* klass;
    MonitorData* monitor;
    struct TentacleTest_Segment__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleTest_Segment_FWDDECL)
#define IL2CPP_STRUCT_TentacleTest_Segment_FWDDECL
#include <Modloader/app/structs/TentacleTest_Segment__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleTest_Segment_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleTest_Segment_DEFINED) && !defined(IL2CPP_STRUCT_TentacleTest_Segment_FWDDECL)
#include <Modloader/app/structs/TentacleTest_Segment.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleTest_Segment.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
