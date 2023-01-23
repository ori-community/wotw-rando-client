#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonFlagsSystem_ObjectState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonFlagsSystem_ObjectState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonFlagsSystem_ObjectState_DEFINED)
#include <Modloader/app/structs/MoonFlagsSystem_ObjectState__Fields.h>
#if defined(IL2CPP_STRUCT_MoonFlagsSystem_ObjectState__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonFlagsSystem_ObjectState_DEFINED
struct MoonFlagsSystem_ObjectState__Class;
struct MoonFlagsSystem_ObjectState {
    struct MoonFlagsSystem_ObjectState__Class* klass;
    MonitorData* monitor;
    struct MoonFlagsSystem_ObjectState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonFlagsSystem_ObjectState_FWDDECL)
#define IL2CPP_STRUCT_MoonFlagsSystem_ObjectState_FWDDECL
#include <Modloader/app/structs/MoonFlagsSystem_ObjectState__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonFlagsSystem_ObjectState_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonFlagsSystem_ObjectState_DEFINED) && !defined(IL2CPP_STRUCT_MoonFlagsSystem_ObjectState_FWDDECL)
#include <Modloader/app/structs/MoonFlagsSystem_ObjectState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonFlagsSystem_ObjectState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
