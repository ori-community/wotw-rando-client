#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonChar_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonChar_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonChar_DEFINED)
#include <Modloader/app/structs/MoonChar__Fields.h>
#if defined(IL2CPP_STRUCT_MoonChar__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonChar_DEFINED
struct MoonChar__Class;
struct MoonChar {
    struct MoonChar__Class* klass;
    MonitorData* monitor;
    struct MoonChar__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonChar_FWDDECL)
#define IL2CPP_STRUCT_MoonChar_FWDDECL
#include <Modloader/app/structs/MoonChar__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonChar_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonChar_DEFINED) && !defined(IL2CPP_STRUCT_MoonChar_FWDDECL)
#include <Modloader/app/structs/MoonChar.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonChar.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
