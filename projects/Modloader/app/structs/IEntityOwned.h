#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEntityOwned_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEntityOwned_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntityOwned_DEFINED)
#define IL2CPP_STRUCT_IEntityOwned_DEFINED
struct IEntityOwned__Class;
struct IEntityOwned {
    struct IEntityOwned__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IEntityOwned_FWDDECL)
#define IL2CPP_STRUCT_IEntityOwned_FWDDECL
#include <Modloader/app/structs/IEntityOwned__Class.h>
#endif
#undef IL2CPP_STRUCT_IEntityOwned_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntityOwned_DEFINED) && !defined(IL2CPP_STRUCT_IEntityOwned_FWDDECL)
#include <Modloader/app/structs/IEntityOwned.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEntityOwned.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
