#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocalSpacePointSet_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocalSpacePointSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalSpacePointSet_DEFINED)
#include <Modloader/app/structs/LocalSpacePointSet__Fields.h>
#if defined(IL2CPP_STRUCT_LocalSpacePointSet__Fields_DEFINED)
#define IL2CPP_STRUCT_LocalSpacePointSet_DEFINED
struct LocalSpacePointSet__Class;
struct LocalSpacePointSet {
    struct LocalSpacePointSet__Class* klass;
    MonitorData* monitor;
    struct LocalSpacePointSet__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocalSpacePointSet_FWDDECL)
#define IL2CPP_STRUCT_LocalSpacePointSet_FWDDECL
#include <Modloader/app/structs/LocalSpacePointSet__Class.h>
#endif
#undef IL2CPP_STRUCT_LocalSpacePointSet_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocalSpacePointSet_DEFINED) && !defined(IL2CPP_STRUCT_LocalSpacePointSet_FWDDECL)
#include <Modloader/app/structs/LocalSpacePointSet.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocalSpacePointSet.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
