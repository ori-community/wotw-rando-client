#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StunnBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StunnBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_StunnBehaviour_DEFINED)
#include <Modloader/app/structs/StunnBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_StunnBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_StunnBehaviour_DEFINED
struct StunnBehaviour__Class;
struct StunnBehaviour {
    struct StunnBehaviour__Class* klass;
    MonitorData* monitor;
    struct StunnBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StunnBehaviour_FWDDECL)
#define IL2CPP_STRUCT_StunnBehaviour_FWDDECL
#include <Modloader/app/structs/StunnBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_StunnBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_StunnBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_StunnBehaviour_FWDDECL)
#include <Modloader/app/structs/StunnBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StunnBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
