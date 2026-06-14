#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NoNullAllowedException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NoNullAllowedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoNullAllowedException_DEFINED)
#include <Modloader/app/structs/NoNullAllowedException__Fields.h>
#if defined(IL2CPP_STRUCT_NoNullAllowedException__Fields_DEFINED)
#define IL2CPP_STRUCT_NoNullAllowedException_DEFINED
struct NoNullAllowedException__Class;
struct NoNullAllowedException {
    struct NoNullAllowedException__Class* klass;
    MonitorData* monitor;
    struct NoNullAllowedException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NoNullAllowedException_FWDDECL)
#define IL2CPP_STRUCT_NoNullAllowedException_FWDDECL
#include <Modloader/app/structs/NoNullAllowedException__Class.h>
#endif
#undef IL2CPP_STRUCT_NoNullAllowedException_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoNullAllowedException_DEFINED) && !defined(IL2CPP_STRUCT_NoNullAllowedException_FWDDECL)
#include <Modloader/app/structs/NoNullAllowedException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NoNullAllowedException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
