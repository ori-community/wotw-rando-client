#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonApplication_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonApplication_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonApplication_DEFINED)
#define IL2CPP_STRUCT_MoonApplication_DEFINED
struct MoonApplication__Class;
struct MoonApplication {
    struct MoonApplication__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonApplication_FWDDECL)
#define IL2CPP_STRUCT_MoonApplication_FWDDECL
#include <Modloader/app/structs/MoonApplication__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonApplication_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonApplication_DEFINED) && !defined(IL2CPP_STRUCT_MoonApplication_FWDDECL)
#include <Modloader/app/structs/MoonApplication.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonApplication.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
