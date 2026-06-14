#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FoxBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FoxBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxBehaviour_DEFINED)
#include <Modloader/app/structs/FoxBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_FoxBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_FoxBehaviour_DEFINED
struct FoxBehaviour__Class;
struct FoxBehaviour {
    struct FoxBehaviour__Class* klass;
    MonitorData* monitor;
    struct FoxBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FoxBehaviour_FWDDECL)
#define IL2CPP_STRUCT_FoxBehaviour_FWDDECL
#include <Modloader/app/structs/FoxBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_FoxBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_FoxBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_FoxBehaviour_FWDDECL)
#include <Modloader/app/structs/FoxBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FoxBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
