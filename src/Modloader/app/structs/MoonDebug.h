#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDebug_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDebug_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDebug_DEFINED)
#include <Modloader/app/structs/MoonDebug__Fields.h>
#if defined(IL2CPP_STRUCT_MoonDebug__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonDebug_DEFINED
struct MoonDebug__Class;
struct MoonDebug {
    struct MoonDebug__Class* klass;
    MonitorData* monitor;
    struct MoonDebug__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonDebug_FWDDECL)
#define IL2CPP_STRUCT_MoonDebug_FWDDECL
#include <Modloader/app/structs/MoonDebug__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonDebug_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDebug_DEFINED) && !defined(IL2CPP_STRUCT_MoonDebug_FWDDECL)
#include <Modloader/app/structs/MoonDebug.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDebug.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
