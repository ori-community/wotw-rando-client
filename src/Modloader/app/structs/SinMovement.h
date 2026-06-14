#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SinMovement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SinMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinMovement_DEFINED)
#include <Modloader/app/structs/SinMovement__Fields.h>
#if defined(IL2CPP_STRUCT_SinMovement__Fields_DEFINED)
#define IL2CPP_STRUCT_SinMovement_DEFINED
struct SinMovement__Class;
struct SinMovement {
    struct SinMovement__Class* klass;
    MonitorData* monitor;
    struct SinMovement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SinMovement_FWDDECL)
#define IL2CPP_STRUCT_SinMovement_FWDDECL
#include <Modloader/app/structs/SinMovement__Class.h>
#endif
#undef IL2CPP_STRUCT_SinMovement_INITIALIZING
#if !defined(IL2CPP_STRUCT_SinMovement_DEFINED) && !defined(IL2CPP_STRUCT_SinMovement_FWDDECL)
#include <Modloader/app/structs/SinMovement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SinMovement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
