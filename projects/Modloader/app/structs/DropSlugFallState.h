#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugFallState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugFallState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugFallState_DEFINED)
#include <Modloader/app/structs/DropSlugFallState__Fields.h>
#if defined(IL2CPP_STRUCT_DropSlugFallState__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugFallState_DEFINED
struct DropSlugFallState__Class;
struct DropSlugFallState {
    struct DropSlugFallState__Class* klass;
    MonitorData* monitor;
    struct DropSlugFallState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugFallState_FWDDECL)
#define IL2CPP_STRUCT_DropSlugFallState_FWDDECL
#include <Modloader/app/structs/DropSlugFallState__Class.h>
#endif
#undef IL2CPP_STRUCT_DropSlugFallState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugFallState_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugFallState_FWDDECL)
#include <Modloader/app/structs/DropSlugFallState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugFallState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
