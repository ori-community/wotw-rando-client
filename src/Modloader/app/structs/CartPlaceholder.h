#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CartPlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CartPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartPlaceholder_DEFINED)
#include <Modloader/app/structs/CartPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_CartPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_CartPlaceholder_DEFINED
struct CartPlaceholder__Class;
struct CartPlaceholder {
    struct CartPlaceholder__Class* klass;
    MonitorData* monitor;
    struct CartPlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CartPlaceholder_FWDDECL)
#define IL2CPP_STRUCT_CartPlaceholder_FWDDECL
#include <Modloader/app/structs/CartPlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_CartPlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CartPlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_CartPlaceholder_FWDDECL)
#include <Modloader/app/structs/CartPlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CartPlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
