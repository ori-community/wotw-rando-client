#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartographerPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartographerPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerPlaceholder_DEFINED)
#include <Modloader/app/structs/CartographerPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_CartographerPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_CartographerPlaceholder_DEFINED
struct CartographerPlaceholder__Class;
struct CartographerPlaceholder {
    struct CartographerPlaceholder__Class* klass;
    MonitorData* monitor;
    struct CartographerPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartographerPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_CartographerPlaceholder_FWDDECL
#include <Modloader/app/structs/CartographerPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_CartographerPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartographerPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_CartographerPlaceholder_FWDDECL)
#include <Modloader/app/structs/CartographerPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartographerPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
