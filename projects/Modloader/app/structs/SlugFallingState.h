#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlugFallingState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlugFallingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugFallingState_DEFINED)
#include <Modloader/app/structs/SlugFallingState__Fields.h>
#if defined(IL2CPP_STRUCT_SlugFallingState__Fields_DEFINED)
#define IL2CPP_STRUCT_SlugFallingState_DEFINED
struct SlugFallingState__Class;
struct SlugFallingState {
    struct SlugFallingState__Class* klass;
    MonitorData* monitor;
    struct SlugFallingState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlugFallingState_FWDDECL)
#define IL2CPP_STRUCT_SlugFallingState_FWDDECL
#include <Modloader/app/structs/SlugFallingState__Class.h>
#endif
#undef IL2CPP_STRUCT_SlugFallingState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugFallingState_DEFINED) && !defined(IL2CPP_STRUCT_SlugFallingState_FWDDECL)
#include <Modloader/app/structs/SlugFallingState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlugFallingState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
