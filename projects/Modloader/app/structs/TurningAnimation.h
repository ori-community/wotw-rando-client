#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurningAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurningAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurningAnimation_DEFINED)
#include <Modloader/app/structs/TurningAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_TurningAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_TurningAnimation_DEFINED
struct TurningAnimation__Class;
struct TurningAnimation {
    struct TurningAnimation__Class* klass;
    MonitorData* monitor;
    struct TurningAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurningAnimation_FWDDECL)
#define IL2CPP_STRUCT_TurningAnimation_FWDDECL
#include <Modloader/app/structs/TurningAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_TurningAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurningAnimation_DEFINED) && !defined(IL2CPP_STRUCT_TurningAnimation_FWDDECL)
#include <Modloader/app/structs/TurningAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurningAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
