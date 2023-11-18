#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SimpleSmoother__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SimpleSmoother__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSmoother__Fields_DEFINED)
#define IL2CPP_STRUCT_SimpleSmoother__Fields_DEFINED
struct TrianglePool;
struct Configuration_1;
struct IVoronoiFactory;
struct ConstraintOptions;
struct __declspec(align(8)) SimpleSmoother__Fields {
    struct TrianglePool* pool;
    struct Configuration_1* config;
    struct IVoronoiFactory* factory;
    struct ConstraintOptions* options;
};
#endif
#if !defined(IL2CPP_STRUCT_SimpleSmoother__Fields_FWDDECL)
#define IL2CPP_STRUCT_SimpleSmoother__Fields_FWDDECL
#include <Modloader/app/structs/Configuration_1.h>
#include <Modloader/app/structs/ConstraintOptions.h>
#include <Modloader/app/structs/IVoronoiFactory.h>
#include <Modloader/app/structs/TrianglePool.h>
#endif
#undef IL2CPP_STRUCT_SimpleSmoother__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SimpleSmoother__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SimpleSmoother__Fields_FWDDECL)
#include <Modloader/app/structs/SimpleSmoother__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SimpleSmoother__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
