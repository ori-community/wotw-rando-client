#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EarlyZDelayedUnhide_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EarlyZDelayedUnhide_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZDelayedUnhide_DEFINED)
#include <Modloader/app/structs/EarlyZDelayedUnhide__Fields.h>
#if defined(IL2CPP_STRUCT_EarlyZDelayedUnhide__Fields_DEFINED)
#define IL2CPP_STRUCT_EarlyZDelayedUnhide_DEFINED
struct EarlyZDelayedUnhide__Class;
struct EarlyZDelayedUnhide {
    struct EarlyZDelayedUnhide__Class* klass;
    MonitorData* monitor;
    struct EarlyZDelayedUnhide__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EarlyZDelayedUnhide_FWDDECL)
#define IL2CPP_STRUCT_EarlyZDelayedUnhide_FWDDECL
#include <Modloader/app/structs/EarlyZDelayedUnhide__Class.h>
#endif
#undef IL2CPP_STRUCT_EarlyZDelayedUnhide_INITIALIZING
#if !defined(IL2CPP_STRUCT_EarlyZDelayedUnhide_DEFINED) && !defined(IL2CPP_STRUCT_EarlyZDelayedUnhide_FWDDECL)
#include <Modloader/app/structs/EarlyZDelayedUnhide.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EarlyZDelayedUnhide.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
