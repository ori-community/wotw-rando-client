#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RopeReeler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RopeReeler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RopeReeler_DEFINED)
#include <Modloader/app/structs/RopeReeler__Fields.h>
#if defined(IL2CPP_STRUCT_RopeReeler__Fields_DEFINED)
#define IL2CPP_STRUCT_RopeReeler_DEFINED
struct RopeReeler__Class;
struct RopeReeler {
    struct RopeReeler__Class* klass;
    MonitorData* monitor;
    struct RopeReeler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RopeReeler_FWDDECL)
#define IL2CPP_STRUCT_RopeReeler_FWDDECL
#include <Modloader/app/structs/RopeReeler__Class.h>
#endif
#undef IL2CPP_STRUCT_RopeReeler_INITIALIZING
#if !defined(IL2CPP_STRUCT_RopeReeler_DEFINED) && !defined(IL2CPP_STRUCT_RopeReeler_FWDDECL)
#include <Modloader/app/structs/RopeReeler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RopeReeler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
