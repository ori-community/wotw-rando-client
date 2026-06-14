#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderInteractionBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderInteractionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderInteractionBehaviour_DEFINED)
#include <Modloader/app/structs/SpiderInteractionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_SpiderInteractionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderInteractionBehaviour_DEFINED
struct SpiderInteractionBehaviour__Class;
struct SpiderInteractionBehaviour {
    struct SpiderInteractionBehaviour__Class* klass;
    MonitorData* monitor;
    struct SpiderInteractionBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderInteractionBehaviour_FWDDECL)
#define IL2CPP_STRUCT_SpiderInteractionBehaviour_FWDDECL
#include <Modloader/app/structs/SpiderInteractionBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiderInteractionBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderInteractionBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_SpiderInteractionBehaviour_FWDDECL)
#include <Modloader/app/structs/SpiderInteractionBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderInteractionBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
