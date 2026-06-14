#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CursorRendererOS_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CursorRendererOS_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorRendererOS_DEFINED)
#include <Modloader/app/structs/CursorRendererOS__Fields.h>
#if defined(IL2CPP_STRUCT_CursorRendererOS__Fields_DEFINED)
#define IL2CPP_STRUCT_CursorRendererOS_DEFINED
struct CursorRendererOS__Class;
struct CursorRendererOS {
    struct CursorRendererOS__Class* klass;
    MonitorData* monitor;
    struct CursorRendererOS__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CursorRendererOS_FWDDECL)
#define IL2CPP_STRUCT_CursorRendererOS_FWDDECL
#include <Modloader/app/structs/CursorRendererOS__Class.h>
#endif
#undef IL2CPP_STRUCT_CursorRendererOS_INITIALIZING
#if !defined(IL2CPP_STRUCT_CursorRendererOS_DEFINED) && !defined(IL2CPP_STRUCT_CursorRendererOS_FWDDECL)
#include <Modloader/app/structs/CursorRendererOS.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CursorRendererOS.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
