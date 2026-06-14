#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Music_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Music_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_DEFINED)
#define IL2CPP_STRUCT_Music_DEFINED
struct Music__Class;
struct Music {
    struct Music__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Music_FWDDECL)
#define IL2CPP_STRUCT_Music_FWDDECL
#include <Modloader/app/structs/Music__Class.h>
#endif
#undef IL2CPP_STRUCT_Music_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_DEFINED) && !defined(IL2CPP_STRUCT_Music_FWDDECL)
#include <Modloader/app/structs/Music.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Music.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
