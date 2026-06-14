#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundManager_DEFINED)
#include <Modloader/app/structs/SoundManager__Fields.h>
#if defined(IL2CPP_STRUCT_SoundManager__Fields_DEFINED)
#define IL2CPP_STRUCT_SoundManager_DEFINED
struct SoundManager__Class;
struct SoundManager {
    struct SoundManager__Class* klass;
    MonitorData* monitor;
    struct SoundManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundManager_FWDDECL)
#define IL2CPP_STRUCT_SoundManager_FWDDECL
#include <Modloader/app/structs/SoundManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SoundManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundManager_DEFINED) && !defined(IL2CPP_STRUCT_SoundManager_FWDDECL)
#include <Modloader/app/structs/SoundManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
