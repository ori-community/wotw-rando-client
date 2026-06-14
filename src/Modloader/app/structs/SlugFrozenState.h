#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlugFrozenState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlugFrozenState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugFrozenState_DEFINED)
#include <Modloader/app/structs/SlugFrozenState__Fields.h>
#if defined(IL2CPP_STRUCT_SlugFrozenState__Fields_DEFINED)
#define IL2CPP_STRUCT_SlugFrozenState_DEFINED
struct SlugFrozenState__Class;
struct SlugFrozenState {
    struct SlugFrozenState__Class* klass;
    MonitorData* monitor;
    struct SlugFrozenState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlugFrozenState_FWDDECL)
#define IL2CPP_STRUCT_SlugFrozenState_FWDDECL
#include <Modloader/app/structs/SlugFrozenState__Class.h>
#endif
#undef IL2CPP_STRUCT_SlugFrozenState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugFrozenState_DEFINED) && !defined(IL2CPP_STRUCT_SlugFrozenState_FWDDECL)
#include <Modloader/app/structs/SlugFrozenState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlugFrozenState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
