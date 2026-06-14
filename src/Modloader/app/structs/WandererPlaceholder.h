#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WandererPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WandererPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererPlaceholder_DEFINED)
#include <Modloader/app/structs/WandererPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_WandererPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_WandererPlaceholder_DEFINED
struct WandererPlaceholder__Class;
struct WandererPlaceholder {
    struct WandererPlaceholder__Class* klass;
    MonitorData* monitor;
    struct WandererPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WandererPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_WandererPlaceholder_FWDDECL
#include <Modloader/app/structs/WandererPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_WandererPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_WandererPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_WandererPlaceholder_FWDDECL)
#include <Modloader/app/structs/WandererPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WandererPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
