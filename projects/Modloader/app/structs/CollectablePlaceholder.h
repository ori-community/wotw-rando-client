#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollectablePlaceholder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollectablePlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectablePlaceholder_DEFINED)
#include <Modloader/app/structs/CollectablePlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_CollectablePlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_CollectablePlaceholder_DEFINED
struct CollectablePlaceholder__Class;
struct CollectablePlaceholder {
    struct CollectablePlaceholder__Class* klass;
    MonitorData* monitor;
    struct CollectablePlaceholder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CollectablePlaceholder_FWDDECL)
#define IL2CPP_STRUCT_CollectablePlaceholder_FWDDECL
#include <Modloader/app/structs/CollectablePlaceholder__Class.h>
#endif
#undef IL2CPP_STRUCT_CollectablePlaceholder_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectablePlaceholder_DEFINED) && !defined(IL2CPP_STRUCT_CollectablePlaceholder_FWDDECL)
#include <Modloader/app/structs/CollectablePlaceholder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollectablePlaceholder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
