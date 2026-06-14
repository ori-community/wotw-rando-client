#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EndState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EndState_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndState_DEFINED)
#define IL2CPP_STRUCT_EndState_DEFINED
struct EndState__Class;
struct EndState {
    struct EndState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_EndState_FWDDECL)
#define IL2CPP_STRUCT_EndState_FWDDECL
#include <Modloader/app/structs/EndState__Class.h>
#endif
#undef IL2CPP_STRUCT_EndState_INITIALIZING
#if !defined(IL2CPP_STRUCT_EndState_DEFINED) && !defined(IL2CPP_STRUCT_EndState_FWDDECL)
#include <Modloader/app/structs/EndState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EndState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
