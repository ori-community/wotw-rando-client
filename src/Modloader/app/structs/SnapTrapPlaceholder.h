#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapPlaceholder_DEFINED)
#include <Modloader/app/structs/SnapTrapPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_SnapTrapPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_SnapTrapPlaceholder_DEFINED
struct SnapTrapPlaceholder__Class;
struct SnapTrapPlaceholder {
    struct SnapTrapPlaceholder__Class* klass;
    MonitorData* monitor;
    struct SnapTrapPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapPlaceholder_FWDDECL
#include <Modloader/app/structs/SnapTrapPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_SnapTrapPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapPlaceholder_FWDDECL)
#include <Modloader/app/structs/SnapTrapPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
