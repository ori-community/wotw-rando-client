#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StunnedBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StunnedBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_StunnedBehaviour_DEFINED)
#include <Modloader/app/structs/StunnedBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_StunnedBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_StunnedBehaviour_DEFINED
struct StunnedBehaviour__Class;
struct StunnedBehaviour {
    struct StunnedBehaviour__Class* klass;
    MonitorData* monitor;
    struct StunnedBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StunnedBehaviour_FWDDECL)
#define IL2CPP_STRUCT_StunnedBehaviour_FWDDECL
#include <Modloader/app/structs/StunnedBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_StunnedBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_StunnedBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_StunnedBehaviour_FWDDECL)
#include <Modloader/app/structs/StunnedBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StunnedBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
