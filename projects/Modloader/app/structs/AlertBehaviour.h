#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AlertBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AlertBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlertBehaviour_DEFINED)
#include <Modloader/app/structs/AlertBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_AlertBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_AlertBehaviour_DEFINED
struct AlertBehaviour__Class;
struct AlertBehaviour {
    struct AlertBehaviour__Class* klass;
    MonitorData* monitor;
    struct AlertBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AlertBehaviour_FWDDECL)
#define IL2CPP_STRUCT_AlertBehaviour_FWDDECL
#include <Modloader/app/structs/AlertBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_AlertBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_AlertBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_AlertBehaviour_FWDDECL)
#include <Modloader/app/structs/AlertBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AlertBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
