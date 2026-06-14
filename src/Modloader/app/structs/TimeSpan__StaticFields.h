#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSpan__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSpan__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpan__StaticFields_DEFINED)
#include <Modloader/app/structs/TimeSpan.h>
#if defined(IL2CPP_STRUCT_TimeSpan_DEFINED)
#define IL2CPP_STRUCT_TimeSpan__StaticFields_DEFINED
struct TimeSpan__StaticFields {
    struct TimeSpan Zero;
    struct TimeSpan MaxValue;
    struct TimeSpan MinValue;
    bool _legacyConfigChecked;
    bool _legacyMode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSpan__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TimeSpan__StaticFields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TimeSpan__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSpan__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TimeSpan__StaticFields_FWDDECL)
#include <Modloader/app/structs/TimeSpan__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSpan__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
