#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCDistanceMapGenerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCDistanceMapGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCDistanceMapGenerator_DEFINED)
#define IL2CPP_STRUCT_CCDistanceMapGenerator_DEFINED
struct CCDistanceMapGenerator__Class;
struct CCDistanceMapGenerator {
    struct CCDistanceMapGenerator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CCDistanceMapGenerator_FWDDECL)
#define IL2CPP_STRUCT_CCDistanceMapGenerator_FWDDECL
#include <Modloader/app/structs/CCDistanceMapGenerator__Class.h>
#endif
#undef IL2CPP_STRUCT_CCDistanceMapGenerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCDistanceMapGenerator_DEFINED) && !defined(IL2CPP_STRUCT_CCDistanceMapGenerator_FWDDECL)
#include <Modloader/app/structs/CCDistanceMapGenerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCDistanceMapGenerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
