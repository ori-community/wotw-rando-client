#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GUIContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GUIContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContext_DEFINED)
#include <Modloader/app/structs/GUIContext__Fields.h>
#if defined(IL2CPP_STRUCT_GUIContext__Fields_DEFINED)
#define IL2CPP_STRUCT_GUIContext_DEFINED
struct GUIContext__Class;
struct GUIContext {
    struct GUIContext__Class* klass;
    MonitorData* monitor;
    struct GUIContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GUIContext_FWDDECL)
#define IL2CPP_STRUCT_GUIContext_FWDDECL
#include <Modloader/app/structs/GUIContext__Class.h>
#endif
#undef IL2CPP_STRUCT_GUIContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_GUIContext_DEFINED) && !defined(IL2CPP_STRUCT_GUIContext_FWDDECL)
#include <Modloader/app/structs/GUIContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GUIContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
