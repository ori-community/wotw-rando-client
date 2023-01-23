#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IByteUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IByteUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IByteUberState_DEFINED)
#define IL2CPP_STRUCT_IByteUberState_DEFINED
struct IByteUberState__Class;
struct IByteUberState {
    struct IByteUberState__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IByteUberState_FWDDECL)
#define IL2CPP_STRUCT_IByteUberState_FWDDECL
#include <Modloader/app/structs/IByteUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_IByteUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IByteUberState_DEFINED) && !defined(IL2CPP_STRUCT_IByteUberState_FWDDECL)
#include <Modloader/app/structs/IByteUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IByteUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
