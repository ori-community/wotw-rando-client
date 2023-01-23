#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_State_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_State_INITIALIZING
#if !defined(IL2CPP_STRUCT_State_DEFINED)
#include <Modloader/app/structs/State__Fields.h>
#if defined(IL2CPP_STRUCT_State__Fields_DEFINED)
#define IL2CPP_STRUCT_State_DEFINED
struct State__Class;
struct State {
    struct State__Class* klass;
    MonitorData* monitor;
    struct State__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_State_FWDDECL)
#define IL2CPP_STRUCT_State_FWDDECL
#include <Modloader/app/structs/State__Class.h>
#endif
#undef IL2CPP_STRUCT_State_INITIALIZING
#if !defined(IL2CPP_STRUCT_State_DEFINED) && !defined(IL2CPP_STRUCT_State_FWDDECL)
#include <Modloader/app/structs/State.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/State.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
