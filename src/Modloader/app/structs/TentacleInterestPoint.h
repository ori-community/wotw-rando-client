#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentacleInterestPoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentacleInterestPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleInterestPoint_DEFINED)
#include <Modloader/app/structs/TentacleInterestPoint__Fields.h>
#if defined(IL2CPP_STRUCT_TentacleInterestPoint__Fields_DEFINED)
#define IL2CPP_STRUCT_TentacleInterestPoint_DEFINED
struct TentacleInterestPoint__Class;
struct TentacleInterestPoint {
    struct TentacleInterestPoint__Class* klass;
    MonitorData* monitor;
    struct TentacleInterestPoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentacleInterestPoint_FWDDECL)
#define IL2CPP_STRUCT_TentacleInterestPoint_FWDDECL
#include <Modloader/app/structs/TentacleInterestPoint__Class.h>
#endif
#undef IL2CPP_STRUCT_TentacleInterestPoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentacleInterestPoint_DEFINED) && !defined(IL2CPP_STRUCT_TentacleInterestPoint_FWDDECL)
#include <Modloader/app/structs/TentacleInterestPoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentacleInterestPoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
