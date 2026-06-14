#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CountUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CountUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CountUberState_DEFINED)
#include <Modloader/app/structs/CountUberState__Fields.h>
#if defined(IL2CPP_STRUCT_CountUberState__Fields_DEFINED)
#define IL2CPP_STRUCT_CountUberState_DEFINED
struct CountUberState__Class;
struct CountUberState {
    struct CountUberState__Class* klass;
    MonitorData* monitor;
    struct CountUberState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CountUberState_FWDDECL)
#define IL2CPP_STRUCT_CountUberState_FWDDECL
#include <Modloader/app/structs/CountUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_CountUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_CountUberState_DEFINED) && !defined(IL2CPP_STRUCT_CountUberState_FWDDECL)
#include <Modloader/app/structs/CountUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CountUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
