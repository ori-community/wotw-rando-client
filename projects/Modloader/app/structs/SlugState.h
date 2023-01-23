#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SlugState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SlugState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugState_DEFINED)
#include <Modloader/app/structs/SlugState__Fields.h>
#if defined(IL2CPP_STRUCT_SlugState__Fields_DEFINED)
#define IL2CPP_STRUCT_SlugState_DEFINED
struct SlugState__Class;
struct SlugState {
    struct SlugState__Class* klass;
    MonitorData* monitor;
    struct SlugState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SlugState_FWDDECL)
#define IL2CPP_STRUCT_SlugState_FWDDECL
#include <Modloader/app/structs/SlugState__Class.h>
#endif
#undef IL2CPP_STRUCT_SlugState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SlugState_DEFINED) && !defined(IL2CPP_STRUCT_SlugState_FWDDECL)
#include <Modloader/app/structs/SlugState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SlugState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
