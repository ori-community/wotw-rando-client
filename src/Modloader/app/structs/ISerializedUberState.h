#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISerializedUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISerializedUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializedUberState_DEFINED)
#define IL2CPP_STRUCT_ISerializedUberState_DEFINED
struct ISerializedUberState__Class;
struct ISerializedUberState {
    struct ISerializedUberState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISerializedUberState_FWDDECL)
#define IL2CPP_STRUCT_ISerializedUberState_FWDDECL
#include <Modloader/app/structs/ISerializedUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_ISerializedUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializedUberState_DEFINED) && !defined(IL2CPP_STRUCT_ISerializedUberState_FWDDECL)
#include <Modloader/app/structs/ISerializedUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISerializedUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
