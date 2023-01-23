#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UIContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UIContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIContext_DEFINED)
#include <Modloader/app/structs/UIContext__Fields.h>
#if defined(IL2CPP_STRUCT_UIContext__Fields_DEFINED)
#define IL2CPP_STRUCT_UIContext_DEFINED
struct UIContext__Class;
struct UIContext {
    struct UIContext__Class* klass;
    MonitorData* monitor;
    struct UIContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UIContext_FWDDECL)
#define IL2CPP_STRUCT_UIContext_FWDDECL
#include <Modloader/app/structs/UIContext__Class.h>
#endif
#undef IL2CPP_STRUCT_UIContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIContext_DEFINED) && !defined(IL2CPP_STRUCT_UIContext_FWDDECL)
#include <Modloader/app/structs/UIContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UIContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
