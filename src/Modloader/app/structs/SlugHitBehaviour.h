#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlugHitBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlugHitBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugHitBehaviour_DEFINED)
#include <Modloader/app/structs/SlugHitBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_SlugHitBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SlugHitBehaviour_DEFINED
struct SlugHitBehaviour__Class;
struct SlugHitBehaviour {
    struct SlugHitBehaviour__Class* klass;
    MonitorData* monitor;
    struct SlugHitBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlugHitBehaviour_FWDDECL)
#define IL2CPP_STRUCT_SlugHitBehaviour_FWDDECL
#include <Modloader/app/structs/SlugHitBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_SlugHitBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugHitBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_SlugHitBehaviour_FWDDECL)
#include <Modloader/app/structs/SlugHitBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlugHitBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
