#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SortingLayerID_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SortingLayerID_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortingLayerID_DEFINED)
#define IL2CPP_STRUCT_SortingLayerID_DEFINED
struct SortingLayerID__Class;
struct SortingLayerID {
    struct SortingLayerID__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SortingLayerID_FWDDECL)
#define IL2CPP_STRUCT_SortingLayerID_FWDDECL
#include <Modloader/app/structs/SortingLayerID__Class.h>
#endif
#undef IL2CPP_STRUCT_SortingLayerID_INITIALIZING
#if !defined(IL2CPP_STRUCT_SortingLayerID_DEFINED) && !defined(IL2CPP_STRUCT_SortingLayerID_FWDDECL)
#include <Modloader/app/structs/SortingLayerID.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SortingLayerID.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
