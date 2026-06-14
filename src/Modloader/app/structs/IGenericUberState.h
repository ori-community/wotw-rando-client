#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IGenericUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IGenericUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGenericUberState_DEFINED)
#define IL2CPP_STRUCT_IGenericUberState_DEFINED
struct IGenericUberState__Class;
struct IGenericUberState {
    struct IGenericUberState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IGenericUberState_FWDDECL)
#define IL2CPP_STRUCT_IGenericUberState_FWDDECL
#include <Modloader/app/structs/IGenericUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_IGenericUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IGenericUberState_DEFINED) && !defined(IL2CPP_STRUCT_IGenericUberState_FWDDECL)
#include <Modloader/app/structs/IGenericUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IGenericUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
