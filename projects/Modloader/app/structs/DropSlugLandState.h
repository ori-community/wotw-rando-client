#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugLandState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugLandState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugLandState_DEFINED)
#include <Modloader/app/structs/DropSlugLandState__Fields.h>
#if defined(IL2CPP_STRUCT_DropSlugLandState__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugLandState_DEFINED
struct DropSlugLandState__Class;
struct DropSlugLandState {
    struct DropSlugLandState__Class* klass;
    MonitorData* monitor;
    struct DropSlugLandState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropSlugLandState_FWDDECL)
#define IL2CPP_STRUCT_DropSlugLandState_FWDDECL
#include <Modloader/app/structs/DropSlugLandState__Class.h>
#endif
#undef IL2CPP_STRUCT_DropSlugLandState_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugLandState_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugLandState_FWDDECL)
#include <Modloader/app/structs/DropSlugLandState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugLandState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
