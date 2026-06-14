#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinRide_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinRide_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRide_DEFINED)
#include <Modloader/app/structs/SeinRide__Fields.h>
#if defined(IL2CPP_STRUCT_SeinRide__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinRide_DEFINED
struct SeinRide__Class;
struct SeinRide {
    struct SeinRide__Class* klass;
    MonitorData* monitor;
    struct SeinRide__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinRide_FWDDECL)
#define IL2CPP_STRUCT_SeinRide_FWDDECL
#include <Modloader/app/structs/SeinRide__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinRide_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinRide_DEFINED) && !defined(IL2CPP_STRUCT_SeinRide_FWDDECL)
#include <Modloader/app/structs/SeinRide.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinRide.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
