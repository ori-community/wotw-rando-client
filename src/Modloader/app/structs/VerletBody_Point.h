#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBody_Point_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBody_Point_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody_Point_DEFINED)
#include <Modloader/app/structs/VerletBody_Point__Fields.h>
#if defined(IL2CPP_STRUCT_VerletBody_Point__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletBody_Point_DEFINED
struct VerletBody_Point__Class;
struct VerletBody_Point {
    struct VerletBody_Point__Class* klass;
    MonitorData* monitor;
    struct VerletBody_Point__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletBody_Point_FWDDECL)
#define IL2CPP_STRUCT_VerletBody_Point_FWDDECL
#include <Modloader/app/structs/VerletBody_Point__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletBody_Point_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody_Point_DEFINED) && !defined(IL2CPP_STRUCT_VerletBody_Point_FWDDECL)
#include <Modloader/app/structs/VerletBody_Point.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBody_Point.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
