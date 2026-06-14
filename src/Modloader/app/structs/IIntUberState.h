#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IIntUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IIntUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IIntUberState_DEFINED)
#define IL2CPP_STRUCT_IIntUberState_DEFINED
struct IIntUberState__Class;
struct IIntUberState {
    struct IIntUberState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IIntUberState_FWDDECL)
#define IL2CPP_STRUCT_IIntUberState_FWDDECL
#include <Modloader/app/structs/IIntUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_IIntUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IIntUberState_DEFINED) && !defined(IL2CPP_STRUCT_IIntUberState_FWDDECL)
#include <Modloader/app/structs/IIntUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IIntUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
