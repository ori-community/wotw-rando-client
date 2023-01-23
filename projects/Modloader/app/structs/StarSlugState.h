#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StarSlugState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StarSlugState_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugState_DEFINED)
#include <Modloader/app/structs/StarSlugState__Fields.h>
#if defined(IL2CPP_STRUCT_StarSlugState__Fields_DEFINED)
#define IL2CPP_STRUCT_StarSlugState_DEFINED
struct StarSlugState__Class;
struct StarSlugState {
    struct StarSlugState__Class* klass;
    MonitorData* monitor;
    struct StarSlugState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StarSlugState_FWDDECL)
#define IL2CPP_STRUCT_StarSlugState_FWDDECL
#include <Modloader/app/structs/StarSlugState__Class.h>
#endif
#undef IL2CPP_STRUCT_StarSlugState_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugState_DEFINED) && !defined(IL2CPP_STRUCT_StarSlugState_FWDDECL)
#include <Modloader/app/structs/StarSlugState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StarSlugState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
