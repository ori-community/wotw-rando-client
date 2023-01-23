#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonBool_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonBool_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonBool_DEFINED)
#include <Modloader/app/structs/MoonBool__Fields.h>
#if defined(IL2CPP_STRUCT_MoonBool__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonBool_DEFINED
struct MoonBool__Class;
struct MoonBool {
    struct MoonBool__Class* klass;
    MonitorData* monitor;
    struct MoonBool__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonBool_FWDDECL)
#define IL2CPP_STRUCT_MoonBool_FWDDECL
#include <Modloader/app/structs/MoonBool__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonBool_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonBool_DEFINED) && !defined(IL2CPP_STRUCT_MoonBool_FWDDECL)
#include <Modloader/app/structs/MoonBool.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonBool.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
