#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinCinematic_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinCinematic_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCinematic_DEFINED)
#include <Modloader/app/structs/SeinCinematic__Fields.h>
#if defined(IL2CPP_STRUCT_SeinCinematic__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinCinematic_DEFINED
struct SeinCinematic__Class;
struct SeinCinematic {
    struct SeinCinematic__Class* klass;
    MonitorData* monitor;
    struct SeinCinematic__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinCinematic_FWDDECL)
#define IL2CPP_STRUCT_SeinCinematic_FWDDECL
#include <Modloader/app/structs/SeinCinematic__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinCinematic_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinCinematic_DEFINED) && !defined(IL2CPP_STRUCT_SeinCinematic_FWDDECL)
#include <Modloader/app/structs/SeinCinematic.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinCinematic.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
