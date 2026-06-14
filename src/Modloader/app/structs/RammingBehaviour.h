#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingBehaviour_DEFINED)
#include <Modloader/app/structs/RammingBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_RammingBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingBehaviour_DEFINED
struct RammingBehaviour__Class;
struct RammingBehaviour {
    struct RammingBehaviour__Class* klass;
    MonitorData* monitor;
    struct RammingBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingBehaviour_FWDDECL)
#define IL2CPP_STRUCT_RammingBehaviour_FWDDECL
#include <Modloader/app/structs/RammingBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_RammingBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_RammingBehaviour_FWDDECL)
#include <Modloader/app/structs/RammingBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
