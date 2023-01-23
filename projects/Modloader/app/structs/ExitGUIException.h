#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExitGUIException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExitGUIException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExitGUIException_DEFINED)
#include <Modloader/app/structs/ExitGUIException__Fields.h>
#if defined(IL2CPP_STRUCT_ExitGUIException__Fields_DEFINED)
#define IL2CPP_STRUCT_ExitGUIException_DEFINED
struct ExitGUIException__Class;
struct ExitGUIException {
    struct ExitGUIException__Class* klass;
    MonitorData* monitor;
    struct ExitGUIException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExitGUIException_FWDDECL)
#define IL2CPP_STRUCT_ExitGUIException_FWDDECL
#include <Modloader/app/structs/ExitGUIException__Class.h>
#endif
#undef IL2CPP_STRUCT_ExitGUIException_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExitGUIException_DEFINED) && !defined(IL2CPP_STRUCT_ExitGUIException_FWDDECL)
#include <Modloader/app/structs/ExitGUIException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExitGUIException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
