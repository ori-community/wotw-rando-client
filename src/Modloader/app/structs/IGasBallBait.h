#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGasBallBait_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGasBallBait_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGasBallBait_DEFINED)
#define IL2CPP_STRUCT_IGasBallBait_DEFINED
struct IGasBallBait__Class;
struct IGasBallBait {
    struct IGasBallBait__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IGasBallBait_FWDDECL)
#define IL2CPP_STRUCT_IGasBallBait_FWDDECL
#include <Modloader/app/structs/IGasBallBait__Class.h>
#endif
#undef IL2CPP_STRUCT_IGasBallBait_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGasBallBait_DEFINED) && !defined(IL2CPP_STRUCT_IGasBallBait_FWDDECL)
#include <Modloader/app/structs/IGasBallBait.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGasBallBait.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
