#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColosseumTimer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColosseumTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColosseumTimer_DEFINED)
#include <Modloader/app/structs/ColosseumTimer__Fields.h>
#if defined(IL2CPP_STRUCT_ColosseumTimer__Fields_DEFINED)
#define IL2CPP_STRUCT_ColosseumTimer_DEFINED
struct ColosseumTimer__Class;
struct ColosseumTimer {
    struct ColosseumTimer__Class* klass;
    MonitorData* monitor;
    struct ColosseumTimer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColosseumTimer_FWDDECL)
#define IL2CPP_STRUCT_ColosseumTimer_FWDDECL
#include <Modloader/app/structs/ColosseumTimer__Class.h>
#endif
#undef IL2CPP_STRUCT_ColosseumTimer_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColosseumTimer_DEFINED) && !defined(IL2CPP_STRUCT_ColosseumTimer_FWDDECL)
#include <Modloader/app/structs/ColosseumTimer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColosseumTimer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
