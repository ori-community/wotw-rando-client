#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrainBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrainBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrainBehaviour_DEFINED)
#include <Modloader/app/structs/BrainBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_BrainBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_BrainBehaviour_DEFINED
struct BrainBehaviour__Class;
struct BrainBehaviour {
    struct BrainBehaviour__Class* klass;
    MonitorData* monitor;
    struct BrainBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrainBehaviour_FWDDECL)
#define IL2CPP_STRUCT_BrainBehaviour_FWDDECL
#include <Modloader/app/structs/BrainBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_BrainBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrainBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_BrainBehaviour_FWDDECL)
#include <Modloader/app/structs/BrainBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrainBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
