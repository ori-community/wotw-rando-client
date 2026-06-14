#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IBooleanUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IBooleanUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBooleanUberState_DEFINED)
#define IL2CPP_STRUCT_IBooleanUberState_DEFINED
struct IBooleanUberState__Class;
struct IBooleanUberState {
    struct IBooleanUberState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IBooleanUberState_FWDDECL)
#define IL2CPP_STRUCT_IBooleanUberState_FWDDECL
#include <Modloader/app/structs/IBooleanUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_IBooleanUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IBooleanUberState_DEFINED) && !defined(IL2CPP_STRUCT_IBooleanUberState_FWDDECL)
#include <Modloader/app/structs/IBooleanUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IBooleanUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
