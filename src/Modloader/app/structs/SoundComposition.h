#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundComposition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundComposition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundComposition_DEFINED)
#include <Modloader/app/structs/SoundComposition__Fields.h>
#if defined(IL2CPP_STRUCT_SoundComposition__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundComposition_DEFINED
struct SoundComposition__Class;
struct SoundComposition {
    struct SoundComposition__Class* klass;
    MonitorData* monitor;
    struct SoundComposition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundComposition_FWDDECL)
#define IL2CPP_STRUCT_SoundComposition_FWDDECL
#include <Modloader/app/structs/SoundComposition__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundComposition_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundComposition_DEFINED) && !defined(IL2CPP_STRUCT_SoundComposition_FWDDECL)
#include <Modloader/app/structs/SoundComposition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundComposition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
