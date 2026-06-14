#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonTweaks_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonTweaks_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTweaks_DEFINED)
#define IL2CPP_STRUCT_MoonTweaks_DEFINED
struct MoonTweaks__Class;
struct MoonTweaks {
    struct MoonTweaks__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonTweaks_FWDDECL)
#define IL2CPP_STRUCT_MoonTweaks_FWDDECL
#include <Modloader/app/structs/MoonTweaks__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonTweaks_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonTweaks_DEFINED) && !defined(IL2CPP_STRUCT_MoonTweaks_FWDDECL)
#include <Modloader/app/structs/MoonTweaks.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonTweaks.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
