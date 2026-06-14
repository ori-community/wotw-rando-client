#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GeometryUtility_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GeometryUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeometryUtility_DEFINED)
#define IL2CPP_STRUCT_GeometryUtility_DEFINED
struct GeometryUtility__Class;
struct GeometryUtility {
    struct GeometryUtility__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GeometryUtility_FWDDECL)
#define IL2CPP_STRUCT_GeometryUtility_FWDDECL
#include <Modloader/app/structs/GeometryUtility__Class.h>
#endif
#undef IL2CPP_STRUCT_GeometryUtility_INITIALIZING
#if !defined(IL2CPP_STRUCT_GeometryUtility_DEFINED) && !defined(IL2CPP_STRUCT_GeometryUtility_FWDDECL)
#include <Modloader/app/structs/GeometryUtility.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GeometryUtility.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
