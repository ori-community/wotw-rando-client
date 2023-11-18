#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDebug__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDebug__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDebug__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MoonDebug__StaticFields_DEFINED
struct MoonDebug;
struct MoonDebug__StaticFields {
    struct MoonDebug* m_instance;
    bool ShouldWriteBuildInLog;
    bool ExplicitlyIncludeStackTraceInExceptions;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonDebug__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MoonDebug__StaticFields_FWDDECL
#include <Modloader/app/structs/MoonDebug.h>
#endif
#undef IL2CPP_STRUCT_MoonDebug__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDebug__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MoonDebug__StaticFields_FWDDECL)
#include <Modloader/app/structs/MoonDebug__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDebug__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
