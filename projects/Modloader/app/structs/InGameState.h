#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InGameState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InGameState_INITIALIZING
#if !defined(IL2CPP_STRUCT_InGameState_DEFINED)
#include <Modloader/app/structs/InGameState__Fields.h>
#if defined(IL2CPP_STRUCT_InGameState__Fields_DEFINED)
#define IL2CPP_STRUCT_InGameState_DEFINED
struct InGameState__Class;
struct InGameState {
    struct InGameState__Class* klass;
    MonitorData* monitor;
    struct InGameState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InGameState_FWDDECL)
#define IL2CPP_STRUCT_InGameState_FWDDECL
#include <Modloader/app/structs/InGameState__Class.h>
#endif
#undef IL2CPP_STRUCT_InGameState_INITIALIZING
#if !defined(IL2CPP_STRUCT_InGameState_DEFINED) && !defined(IL2CPP_STRUCT_InGameState_FWDDECL)
#include <Modloader/app/structs/InGameState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InGameState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
