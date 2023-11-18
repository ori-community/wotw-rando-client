#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundLog_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundLog_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundLog_DEFINED)
#include <Modloader/app/structs/SoundLog__Fields.h>
#if defined(IL2CPP_STRUCT_SoundLog__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundLog_DEFINED
struct SoundLog__Class;
struct SoundLog {
    struct SoundLog__Class* klass;
    MonitorData* monitor;
    struct SoundLog__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundLog_FWDDECL)
#define IL2CPP_STRUCT_SoundLog_FWDDECL
#include <Modloader/app/structs/SoundLog__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundLog_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundLog_DEFINED) && !defined(IL2CPP_STRUCT_SoundLog_FWDDECL)
#include <Modloader/app/structs/SoundLog.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundLog.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
