#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonColor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonColor_DEFINED)
#include <Modloader/app/structs/MoonColor__Fields.h>
#if defined(IL2CPP_STRUCT_MoonColor__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonColor_DEFINED
struct MoonColor__Class;
struct MoonColor {
    struct MoonColor__Class* klass;
    MonitorData* monitor;
    struct MoonColor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonColor_FWDDECL)
#define IL2CPP_STRUCT_MoonColor_FWDDECL
#include <Modloader/app/structs/MoonColor__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonColor_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonColor_DEFINED) && !defined(IL2CPP_STRUCT_MoonColor_FWDDECL)
#include <Modloader/app/structs/MoonColor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonColor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
