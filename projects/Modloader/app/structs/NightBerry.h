#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NightBerry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NightBerry_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightBerry_DEFINED)
#include <Modloader/app/structs/NightBerry__Fields.h>
#if defined(IL2CPP_STRUCT_NightBerry__Fields_DEFINED)
#define IL2CPP_STRUCT_NightBerry_DEFINED
struct NightBerry__Class;
struct NightBerry {
    struct NightBerry__Class* klass;
    MonitorData* monitor;
    struct NightBerry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NightBerry_FWDDECL)
#define IL2CPP_STRUCT_NightBerry_FWDDECL
#include <Modloader/app/structs/NightBerry__Class.h>
#endif
#undef IL2CPP_STRUCT_NightBerry_INITIALIZING
#if !defined(IL2CPP_STRUCT_NightBerry_DEFINED) && !defined(IL2CPP_STRUCT_NightBerry_FWDDECL)
#include <Modloader/app/structs/NightBerry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NightBerry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
