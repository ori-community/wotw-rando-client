#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonWater_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonWater_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonWater_DEFINED)
#include <Modloader/app/structs/MoonWater__Fields.h>
#if defined(IL2CPP_STRUCT_MoonWater__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonWater_DEFINED
struct MoonWater__Class;
struct MoonWater {
    struct MoonWater__Class* klass;
    MonitorData* monitor;
    struct MoonWater__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonWater_FWDDECL)
#define IL2CPP_STRUCT_MoonWater_FWDDECL
#include <Modloader/app/structs/MoonWater__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonWater_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonWater_DEFINED) && !defined(IL2CPP_STRUCT_MoonWater_FWDDECL)
#include <Modloader/app/structs/MoonWater.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonWater.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
