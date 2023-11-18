#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITriangulator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITriangulator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITriangulator_DEFINED)
#define IL2CPP_STRUCT_ITriangulator_DEFINED
struct ITriangulator__Class;
struct ITriangulator {
    struct ITriangulator__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITriangulator_FWDDECL)
#define IL2CPP_STRUCT_ITriangulator_FWDDECL
#include <Modloader/app/structs/ITriangulator__Class.h>
#endif
#undef IL2CPP_STRUCT_ITriangulator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITriangulator_DEFINED) && !defined(IL2CPP_STRUCT_ITriangulator_FWDDECL)
#include <Modloader/app/structs/ITriangulator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITriangulator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
