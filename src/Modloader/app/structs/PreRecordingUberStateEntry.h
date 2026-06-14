#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreRecordingUberStateEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreRecordingUberStateEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingUberStateEntry_DEFINED)
#define IL2CPP_STRUCT_PreRecordingUberStateEntry_DEFINED
struct IGenericUberState;
struct PreRecordingUberStateEntry {
    struct IGenericUberState* UberState;
    float Value;
};
#endif
#if !defined(IL2CPP_STRUCT_PreRecordingUberStateEntry_FWDDECL)
#define IL2CPP_STRUCT_PreRecordingUberStateEntry_FWDDECL
#include <Modloader/app/structs/IGenericUberState.h>
#endif
#undef IL2CPP_STRUCT_PreRecordingUberStateEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreRecordingUberStateEntry_DEFINED) && !defined(IL2CPP_STRUCT_PreRecordingUberStateEntry_FWDDECL)
#include <Modloader/app/structs/PreRecordingUberStateEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreRecordingUberStateEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
