#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberState_DEFINED)
#define IL2CPP_STRUCT_IUberState_DEFINED
struct IUberState__Class;
struct IUberState {
    struct IUberState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IUberState_FWDDECL)
#define IL2CPP_STRUCT_IUberState_FWDDECL
#include <Modloader/app/structs/IUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_IUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberState_DEFINED) && !defined(IL2CPP_STRUCT_IUberState_FWDDECL)
#include <Modloader/app/structs/IUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
