#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugIdleState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugIdleState_DEFINED)
#include <Modloader/app/structs/DropSlugIdleState__Fields.h>
#if defined(IL2CPP_STRUCT_DropSlugIdleState__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugIdleState_DEFINED
struct DropSlugIdleState__Class;
struct DropSlugIdleState {
    struct DropSlugIdleState__Class* klass;
    MonitorData* monitor;
    struct DropSlugIdleState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugIdleState_FWDDECL)
#define IL2CPP_STRUCT_DropSlugIdleState_FWDDECL
#include <Modloader/app/structs/DropSlugIdleState__Class.h>
#endif
#undef IL2CPP_STRUCT_DropSlugIdleState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugIdleState_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugIdleState_FWDDECL)
#include <Modloader/app/structs/DropSlugIdleState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugIdleState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
