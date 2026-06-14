#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnloadPreviousTestComplete_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnloadPreviousTestComplete_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnloadPreviousTestComplete_DEFINED)
#include <Modloader/app/structs/UnloadPreviousTestComplete__Fields.h>
#if defined(IL2CPP_STRUCT_UnloadPreviousTestComplete__Fields_DEFINED)
#define IL2CPP_STRUCT_UnloadPreviousTestComplete_DEFINED
struct UnloadPreviousTestComplete__Class;
struct UnloadPreviousTestComplete {
    struct UnloadPreviousTestComplete__Class* klass;
    MonitorData* monitor;
    struct UnloadPreviousTestComplete__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnloadPreviousTestComplete_FWDDECL)
#define IL2CPP_STRUCT_UnloadPreviousTestComplete_FWDDECL
#include <Modloader/app/structs/UnloadPreviousTestComplete__Class.h>
#endif
#undef IL2CPP_STRUCT_UnloadPreviousTestComplete_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnloadPreviousTestComplete_DEFINED) && !defined(IL2CPP_STRUCT_UnloadPreviousTestComplete_FWDDECL)
#include <Modloader/app/structs/UnloadPreviousTestComplete.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnloadPreviousTestComplete.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
