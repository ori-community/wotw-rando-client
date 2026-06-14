#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TrailerShot_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TrailerShot_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrailerShot_DEFINED)
#include <Modloader/app/structs/TrailerShot__Fields.h>
#if defined(IL2CPP_STRUCT_TrailerShot__Fields_DEFINED)
#define IL2CPP_STRUCT_TrailerShot_DEFINED
struct TrailerShot__Class;
struct TrailerShot {
    struct TrailerShot__Class* klass;
    MonitorData* monitor;
    struct TrailerShot__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TrailerShot_FWDDECL)
#define IL2CPP_STRUCT_TrailerShot_FWDDECL
#include <Modloader/app/structs/TrailerShot__Class.h>
#endif
#undef IL2CPP_STRUCT_TrailerShot_INITIALIZING
#if !defined(IL2CPP_STRUCT_TrailerShot_DEFINED) && !defined(IL2CPP_STRUCT_TrailerShot_FWDDECL)
#include <Modloader/app/structs/TrailerShot.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TrailerShot.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
