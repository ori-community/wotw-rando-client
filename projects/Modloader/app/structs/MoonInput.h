#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonInput_DEFINED)
#define IL2CPP_STRUCT_MoonInput_DEFINED
struct MoonInput__Class;
struct MoonInput {
    struct MoonInput__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonInput_FWDDECL)
#define IL2CPP_STRUCT_MoonInput_FWDDECL
#include <Modloader/app/structs/MoonInput__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonInput_DEFINED) && !defined(IL2CPP_STRUCT_MoonInput_FWDDECL)
#include <Modloader/app/structs/MoonInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
