#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UIBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UIBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIBehaviour_DEFINED)
#include <Modloader/app/structs/UIBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_UIBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UIBehaviour_DEFINED
struct UIBehaviour__Class;
struct UIBehaviour {
    struct UIBehaviour__Class* klass;
    MonitorData* monitor;
    struct UIBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UIBehaviour_FWDDECL)
#define IL2CPP_STRUCT_UIBehaviour_FWDDECL
#include <Modloader/app/structs/UIBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_UIBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_UIBehaviour_FWDDECL)
#include <Modloader/app/structs/UIBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UIBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
