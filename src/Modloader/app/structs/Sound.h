#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sound_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sound_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sound_DEFINED)
#define IL2CPP_STRUCT_Sound_DEFINED
struct Sound__Class;
struct Sound {
    struct Sound__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Sound_FWDDECL)
#define IL2CPP_STRUCT_Sound_FWDDECL
#include <Modloader/app/structs/Sound__Class.h>
#endif
#undef IL2CPP_STRUCT_Sound_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sound_DEFINED) && !defined(IL2CPP_STRUCT_Sound_FWDDECL)
#include <Modloader/app/structs/Sound.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sound.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
