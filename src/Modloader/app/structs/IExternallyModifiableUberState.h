#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IExternallyModifiableUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IExternallyModifiableUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExternallyModifiableUberState_DEFINED)
#define IL2CPP_STRUCT_IExternallyModifiableUberState_DEFINED
struct IExternallyModifiableUberState__Class;
struct IExternallyModifiableUberState {
    struct IExternallyModifiableUberState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IExternallyModifiableUberState_FWDDECL)
#define IL2CPP_STRUCT_IExternallyModifiableUberState_FWDDECL
#include <Modloader/app/structs/IExternallyModifiableUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_IExternallyModifiableUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IExternallyModifiableUberState_DEFINED) && !defined(IL2CPP_STRUCT_IExternallyModifiableUberState_FWDDECL)
#include <Modloader/app/structs/IExternallyModifiableUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IExternallyModifiableUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
