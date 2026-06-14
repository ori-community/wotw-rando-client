#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnScreenPositionSetter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnScreenPositionSetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnScreenPositionSetter_DEFINED)
#include <Modloader/app/structs/OnScreenPositionSetter__Fields.h>
#if defined(IL2CPP_STRUCT_OnScreenPositionSetter__Fields_DEFINED)
#define IL2CPP_STRUCT_OnScreenPositionSetter_DEFINED
struct OnScreenPositionSetter__Class;
struct OnScreenPositionSetter {
    struct OnScreenPositionSetter__Class* klass;
    MonitorData* monitor;
    struct OnScreenPositionSetter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OnScreenPositionSetter_FWDDECL)
#define IL2CPP_STRUCT_OnScreenPositionSetter_FWDDECL
#include <Modloader/app/structs/OnScreenPositionSetter__Class.h>
#endif
#undef IL2CPP_STRUCT_OnScreenPositionSetter_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnScreenPositionSetter_DEFINED) && !defined(IL2CPP_STRUCT_OnScreenPositionSetter_FWDDECL)
#include <Modloader/app/structs/OnScreenPositionSetter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnScreenPositionSetter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
