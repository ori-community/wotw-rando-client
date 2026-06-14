#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ComponentEditor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ComponentEditor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentEditor_DEFINED)
#define IL2CPP_STRUCT_ComponentEditor_DEFINED
struct ComponentEditor__Class;
struct ComponentEditor {
    struct ComponentEditor__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ComponentEditor_FWDDECL)
#define IL2CPP_STRUCT_ComponentEditor_FWDDECL
#include <Modloader/app/structs/ComponentEditor__Class.h>
#endif
#undef IL2CPP_STRUCT_ComponentEditor_INITIALIZING
#if !defined(IL2CPP_STRUCT_ComponentEditor_DEFINED) && !defined(IL2CPP_STRUCT_ComponentEditor_FWDDECL)
#include <Modloader/app/structs/ComponentEditor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ComponentEditor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
