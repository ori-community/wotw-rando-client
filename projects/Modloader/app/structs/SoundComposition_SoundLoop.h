#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundComposition_SoundLoop_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundComposition_SoundLoop_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundComposition_SoundLoop_DEFINED)
#include <Modloader/app/structs/SoundComposition_SoundLoop__Fields.h>
#if defined(IL2CPP_STRUCT_SoundComposition_SoundLoop__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundComposition_SoundLoop_DEFINED
struct SoundComposition_SoundLoop__Class;
struct SoundComposition_SoundLoop {
    struct SoundComposition_SoundLoop__Class* klass;
    MonitorData* monitor;
    struct SoundComposition_SoundLoop__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundComposition_SoundLoop_FWDDECL)
#define IL2CPP_STRUCT_SoundComposition_SoundLoop_FWDDECL
#include <Modloader/app/structs/SoundComposition_SoundLoop__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundComposition_SoundLoop_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundComposition_SoundLoop_DEFINED) && !defined(IL2CPP_STRUCT_SoundComposition_SoundLoop_FWDDECL)
#include <Modloader/app/structs/SoundComposition_SoundLoop.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundComposition_SoundLoop.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
