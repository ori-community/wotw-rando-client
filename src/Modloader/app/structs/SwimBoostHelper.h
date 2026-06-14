#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwimBoostHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwimBoostHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwimBoostHelper_DEFINED)
#include <Modloader/app/structs/SwimBoostHelper__Fields.h>
#if defined(IL2CPP_STRUCT_SwimBoostHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_SwimBoostHelper_DEFINED
struct SwimBoostHelper__Class;
struct SwimBoostHelper {
    struct SwimBoostHelper__Class* klass;
    MonitorData* monitor;
    struct SwimBoostHelper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwimBoostHelper_FWDDECL)
#define IL2CPP_STRUCT_SwimBoostHelper_FWDDECL
#include <Modloader/app/structs/SwimBoostHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_SwimBoostHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwimBoostHelper_DEFINED) && !defined(IL2CPP_STRUCT_SwimBoostHelper_FWDDECL)
#include <Modloader/app/structs/SwimBoostHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwimBoostHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
