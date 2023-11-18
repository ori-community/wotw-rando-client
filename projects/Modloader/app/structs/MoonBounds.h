#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonBounds_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonBounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonBounds_DEFINED)
#include <Modloader/app/structs/MoonBounds__Fields.h>
#if defined(IL2CPP_STRUCT_MoonBounds__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonBounds_DEFINED
struct MoonBounds__Class;
struct MoonBounds {
    struct MoonBounds__Class* klass;
    MonitorData* monitor;
    struct MoonBounds__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonBounds_FWDDECL)
#define IL2CPP_STRUCT_MoonBounds_FWDDECL
#include <Modloader/app/structs/MoonBounds__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonBounds_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonBounds_DEFINED) && !defined(IL2CPP_STRUCT_MoonBounds_FWDDECL)
#include <Modloader/app/structs/MoonBounds.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonBounds.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
