#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDebugMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDebugMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDebugMessage_DEFINED)
#include <Modloader/app/structs/MoonDebugMessage__Fields.h>
#if defined(IL2CPP_STRUCT_MoonDebugMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonDebugMessage_DEFINED
struct MoonDebugMessage__Class;
struct MoonDebugMessage {
    struct MoonDebugMessage__Class* klass;
    MonitorData* monitor;
    struct MoonDebugMessage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonDebugMessage_FWDDECL)
#define IL2CPP_STRUCT_MoonDebugMessage_FWDDECL
#include <Modloader/app/structs/MoonDebugMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_MoonDebugMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDebugMessage_DEFINED) && !defined(IL2CPP_STRUCT_MoonDebugMessage_FWDDECL)
#include <Modloader/app/structs/MoonDebugMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDebugMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
