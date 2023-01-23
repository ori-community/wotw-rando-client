#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLocalSpeedAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLocalSpeedAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLocalSpeedAction_DEFINED)
#include <Modloader/app/structs/SeinLocalSpeedAction__Fields.h>
#if defined(IL2CPP_STRUCT_SeinLocalSpeedAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinLocalSpeedAction_DEFINED
struct SeinLocalSpeedAction__Class;
struct SeinLocalSpeedAction {
    struct SeinLocalSpeedAction__Class* klass;
    MonitorData* monitor;
    struct SeinLocalSpeedAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLocalSpeedAction_FWDDECL)
#define IL2CPP_STRUCT_SeinLocalSpeedAction_FWDDECL
#include <Modloader/app/structs/SeinLocalSpeedAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinLocalSpeedAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLocalSpeedAction_DEFINED) && !defined(IL2CPP_STRUCT_SeinLocalSpeedAction_FWDDECL)
#include <Modloader/app/structs/SeinLocalSpeedAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLocalSpeedAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
