#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlayCharacterAnimation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlayCharacterAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayCharacterAnimation_DEFINED)
#include <Modloader/app/structs/PlayCharacterAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_PlayCharacterAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_PlayCharacterAnimation_DEFINED
struct PlayCharacterAnimation__Class;
struct PlayCharacterAnimation {
    struct PlayCharacterAnimation__Class* klass;
    MonitorData* monitor;
    struct PlayCharacterAnimation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlayCharacterAnimation_FWDDECL)
#define IL2CPP_STRUCT_PlayCharacterAnimation_FWDDECL
#include <Modloader/app/structs/PlayCharacterAnimation__Class.h>
#endif
#undef IL2CPP_STRUCT_PlayCharacterAnimation_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlayCharacterAnimation_DEFINED) && !defined(IL2CPP_STRUCT_PlayCharacterAnimation_FWDDECL)
#include <Modloader/app/structs/PlayCharacterAnimation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlayCharacterAnimation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
