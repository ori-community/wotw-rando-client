#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GardenerPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GardenerPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GardenerPlaceholder_DEFINED)
#include <Modloader/app/structs/GardenerPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_GardenerPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_GardenerPlaceholder_DEFINED
struct GardenerPlaceholder__Class;
struct GardenerPlaceholder {
    struct GardenerPlaceholder__Class* klass;
    MonitorData* monitor;
    struct GardenerPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GardenerPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_GardenerPlaceholder_FWDDECL
#include <Modloader/app/structs/GardenerPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_GardenerPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_GardenerPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_GardenerPlaceholder_FWDDECL)
#include <Modloader/app/structs/GardenerPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GardenerPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
