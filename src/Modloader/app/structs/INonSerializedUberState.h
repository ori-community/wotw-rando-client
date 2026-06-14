#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_INonSerializedUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_INonSerializedUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_INonSerializedUberState_DEFINED)
#define IL2CPP_STRUCT_INonSerializedUberState_DEFINED
struct INonSerializedUberState__Class;
struct INonSerializedUberState {
    struct INonSerializedUberState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_INonSerializedUberState_FWDDECL)
#define IL2CPP_STRUCT_INonSerializedUberState_FWDDECL
#include <Modloader/app/structs/INonSerializedUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_INonSerializedUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_INonSerializedUberState_DEFINED) && !defined(IL2CPP_STRUCT_INonSerializedUberState_FWDDECL)
#include <Modloader/app/structs/INonSerializedUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/INonSerializedUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
