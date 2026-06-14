#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RegionIterator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RegionIterator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegionIterator_DEFINED)
#include <Modloader/app/structs/RegionIterator__Fields.h>
#if defined(IL2CPP_STRUCT_RegionIterator__Fields_DEFINED)
#define IL2CPP_STRUCT_RegionIterator_DEFINED
struct RegionIterator__Class;
struct RegionIterator {
    struct RegionIterator__Class* klass;
    MonitorData* monitor;
    struct RegionIterator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RegionIterator_FWDDECL)
#define IL2CPP_STRUCT_RegionIterator_FWDDECL
#include <Modloader/app/structs/RegionIterator__Class.h>
#endif
#undef IL2CPP_STRUCT_RegionIterator_INITIALIZING
#if !defined(IL2CPP_STRUCT_RegionIterator_DEFINED) && !defined(IL2CPP_STRUCT_RegionIterator_FWDDECL)
#include <Modloader/app/structs/RegionIterator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RegionIterator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
