#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinMaxSpeedAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinMaxSpeedAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMaxSpeedAction_DEFINED)
#include <Modloader/app/structs/SeinMaxSpeedAction__Fields.h>
#if defined(IL2CPP_STRUCT_SeinMaxSpeedAction__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinMaxSpeedAction_DEFINED
struct SeinMaxSpeedAction__Class;
struct SeinMaxSpeedAction {
    struct SeinMaxSpeedAction__Class* klass;
    MonitorData* monitor;
    struct SeinMaxSpeedAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinMaxSpeedAction_FWDDECL)
#define IL2CPP_STRUCT_SeinMaxSpeedAction_FWDDECL
#include <Modloader/app/structs/SeinMaxSpeedAction__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinMaxSpeedAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMaxSpeedAction_DEFINED) && !defined(IL2CPP_STRUCT_SeinMaxSpeedAction_FWDDECL)
#include <Modloader/app/structs/SeinMaxSpeedAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinMaxSpeedAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
