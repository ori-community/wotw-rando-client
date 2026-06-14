#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugState_DEFINED)
#include <Modloader/app/structs/DropSlugState__Fields.h>
#if defined(IL2CPP_STRUCT_DropSlugState__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugState_DEFINED
struct DropSlugState__Class;
struct DropSlugState {
    struct DropSlugState__Class* klass;
    MonitorData* monitor;
    struct DropSlugState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugState_FWDDECL)
#define IL2CPP_STRUCT_DropSlugState_FWDDECL
#include <Modloader/app/structs/DropSlugState__Class.h>
#endif
#undef IL2CPP_STRUCT_DropSlugState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugState_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugState_FWDDECL)
#include <Modloader/app/structs/DropSlugState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
