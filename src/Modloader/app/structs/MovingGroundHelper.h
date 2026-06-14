#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovingGroundHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovingGroundHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingGroundHelper_DEFINED)
#include <Modloader/app/structs/MovingGroundHelper__Fields.h>
#if defined(IL2CPP_STRUCT_MovingGroundHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_MovingGroundHelper_DEFINED
struct MovingGroundHelper__Class;
struct MovingGroundHelper {
    struct MovingGroundHelper__Class* klass;
    MonitorData* monitor;
    struct MovingGroundHelper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovingGroundHelper_FWDDECL)
#define IL2CPP_STRUCT_MovingGroundHelper_FWDDECL
#include <Modloader/app/structs/MovingGroundHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_MovingGroundHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingGroundHelper_DEFINED) && !defined(IL2CPP_STRUCT_MovingGroundHelper_FWDDECL)
#include <Modloader/app/structs/MovingGroundHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovingGroundHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
