#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IRecordingContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IRecordingContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRecordingContext_DEFINED)
#define IL2CPP_STRUCT_IRecordingContext_DEFINED
struct IRecordingContext__Class;
struct IRecordingContext {
    struct IRecordingContext__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IRecordingContext_FWDDECL)
#define IL2CPP_STRUCT_IRecordingContext_FWDDECL
#include <Modloader/app/structs/IRecordingContext__Class.h>
#endif
#undef IL2CPP_STRUCT_IRecordingContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_IRecordingContext_DEFINED) && !defined(IL2CPP_STRUCT_IRecordingContext_FWDDECL)
#include <Modloader/app/structs/IRecordingContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IRecordingContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
