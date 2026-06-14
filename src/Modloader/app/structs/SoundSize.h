#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundSize_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundSize_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundSize_DEFINED)
#include <Modloader/app/structs/SoundSize__Fields.h>
#if defined(IL2CPP_STRUCT_SoundSize__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundSize_DEFINED
struct SoundSize__Class;
struct SoundSize {
    struct SoundSize__Class* klass;
    MonitorData* monitor;
    struct SoundSize__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundSize_FWDDECL)
#define IL2CPP_STRUCT_SoundSize_FWDDECL
#include <Modloader/app/structs/SoundSize__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundSize_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundSize_DEFINED) && !defined(IL2CPP_STRUCT_SoundSize_FWDDECL)
#include <Modloader/app/structs/SoundSize.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundSize.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
