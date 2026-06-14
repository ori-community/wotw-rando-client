#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BipedLimbOrientations_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BipedLimbOrientations_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedLimbOrientations_DEFINED)
#include <Modloader/app/structs/BipedLimbOrientations__Fields.h>
#if defined(IL2CPP_STRUCT_BipedLimbOrientations__Fields_DEFINED)
#define IL2CPP_STRUCT_BipedLimbOrientations_DEFINED
struct BipedLimbOrientations__Class;
struct BipedLimbOrientations {
    struct BipedLimbOrientations__Class* klass;
    MonitorData* monitor;
    struct BipedLimbOrientations__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BipedLimbOrientations_FWDDECL)
#define IL2CPP_STRUCT_BipedLimbOrientations_FWDDECL
#include <Modloader/app/structs/BipedLimbOrientations__Class.h>
#endif
#undef IL2CPP_STRUCT_BipedLimbOrientations_INITIALIZING
#if !defined(IL2CPP_STRUCT_BipedLimbOrientations_DEFINED) && !defined(IL2CPP_STRUCT_BipedLimbOrientations_FWDDECL)
#include <Modloader/app/structs/BipedLimbOrientations.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BipedLimbOrientations.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
