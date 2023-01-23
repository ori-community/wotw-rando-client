#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VerletBody_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VerletBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody_DEFINED)
#include <Modloader/app/structs/VerletBody__Fields.h>
#if defined(IL2CPP_STRUCT_VerletBody__Fields_DEFINED)
#define IL2CPP_STRUCT_VerletBody_DEFINED
struct VerletBody__Class;
struct VerletBody {
    struct VerletBody__Class* klass;
    MonitorData* monitor;
    struct VerletBody__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VerletBody_FWDDECL)
#define IL2CPP_STRUCT_VerletBody_FWDDECL
#include <Modloader/app/structs/VerletBody__Class.h>
#endif
#undef IL2CPP_STRUCT_VerletBody_INITIALIZING
#if !defined(IL2CPP_STRUCT_VerletBody_DEFINED) && !defined(IL2CPP_STRUCT_VerletBody_FWDDECL)
#include <Modloader/app/structs/VerletBody.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VerletBody.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
