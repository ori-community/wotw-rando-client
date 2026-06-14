#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonColor32_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonColor32_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonColor32_DEFINED)
#include <Modloader/app/structs/MoonColor32__Fields.h>
#if defined(IL2CPP_STRUCT_MoonColor32__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonColor32_DEFINED
struct MoonColor32__Class;
struct MoonColor32 {
    struct MoonColor32__Class* klass;
    MonitorData* monitor;
    struct MoonColor32__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonColor32_FWDDECL)
#define IL2CPP_STRUCT_MoonColor32_FWDDECL
#include <Modloader/app/structs/MoonColor32__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonColor32_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonColor32_DEFINED) && !defined(IL2CPP_STRUCT_MoonColor32_FWDDECL)
#include <Modloader/app/structs/MoonColor32.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonColor32.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
