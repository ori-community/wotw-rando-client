#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnowBall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnowBall_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnowBall_DEFINED)
#include <Modloader/app/structs/SnowBall__Fields.h>
#if defined(IL2CPP_STRUCT_SnowBall__Fields_DEFINED)
#define IL2CPP_STRUCT_SnowBall_DEFINED
struct SnowBall__Class;
struct SnowBall {
    struct SnowBall__Class* klass;
    MonitorData* monitor;
    struct SnowBall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnowBall_FWDDECL)
#define IL2CPP_STRUCT_SnowBall_FWDDECL
#include <Modloader/app/structs/SnowBall__Class.h>
#endif
#undef IL2CPP_STRUCT_SnowBall_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnowBall_DEFINED) && !defined(IL2CPP_STRUCT_SnowBall_FWDDECL)
#include <Modloader/app/structs/SnowBall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnowBall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
