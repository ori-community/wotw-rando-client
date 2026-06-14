#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SunShafts_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SunShafts_INITIALIZING
#if !defined(IL2CPP_STRUCT_SunShafts_DEFINED)
#include <Modloader/app/structs/SunShafts__Fields.h>
#if defined(IL2CPP_STRUCT_SunShafts__Fields_DEFINED)
#define IL2CPP_STRUCT_SunShafts_DEFINED
struct SunShafts__Class;
struct SunShafts {
    struct SunShafts__Class* klass;
    MonitorData* monitor;
    struct SunShafts__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SunShafts_FWDDECL)
#define IL2CPP_STRUCT_SunShafts_FWDDECL
#include <Modloader/app/structs/SunShafts__Class.h>
#endif
#undef IL2CPP_STRUCT_SunShafts_INITIALIZING
#if !defined(IL2CPP_STRUCT_SunShafts_DEFINED) && !defined(IL2CPP_STRUCT_SunShafts_FWDDECL)
#include <Modloader/app/structs/SunShafts.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SunShafts.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
