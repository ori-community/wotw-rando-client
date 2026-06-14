#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DemoEndState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DemoEndState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoEndState_DEFINED)
#include <Modloader/app/structs/DemoEndState__Fields.h>
#if defined(IL2CPP_STRUCT_DemoEndState__Fields_DEFINED)
#define IL2CPP_STRUCT_DemoEndState_DEFINED
struct DemoEndState__Class;
struct DemoEndState {
    struct DemoEndState__Class* klass;
    MonitorData* monitor;
    struct DemoEndState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DemoEndState_FWDDECL)
#define IL2CPP_STRUCT_DemoEndState_FWDDECL
#include <Modloader/app/structs/DemoEndState__Class.h>
#endif
#undef IL2CPP_STRUCT_DemoEndState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DemoEndState_DEFINED) && !defined(IL2CPP_STRUCT_DemoEndState_FWDDECL)
#include <Modloader/app/structs/DemoEndState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DemoEndState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
