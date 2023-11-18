#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlugFastBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlugFastBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugFastBehaviour_DEFINED)
#include <Modloader/app/structs/SlugFastBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_SlugFastBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SlugFastBehaviour_DEFINED
struct SlugFastBehaviour__Class;
struct SlugFastBehaviour {
    struct SlugFastBehaviour__Class* klass;
    MonitorData* monitor;
    struct SlugFastBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlugFastBehaviour_FWDDECL)
#define IL2CPP_STRUCT_SlugFastBehaviour_FWDDECL
#include <Modloader/app/structs/SlugFastBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_SlugFastBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugFastBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_SlugFastBehaviour_FWDDECL)
#include <Modloader/app/structs/SlugFastBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlugFastBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
