#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransparentWallB_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransparentWallB_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparentWallB_DEFINED)
#include <Modloader/app/structs/TransparentWallB__Fields.h>
#if defined(IL2CPP_STRUCT_TransparentWallB__Fields_DEFINED)
#define IL2CPP_STRUCT_TransparentWallB_DEFINED
struct TransparentWallB__Class;
struct TransparentWallB {
    struct TransparentWallB__Class* klass;
    MonitorData* monitor;
    struct TransparentWallB__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransparentWallB_FWDDECL)
#define IL2CPP_STRUCT_TransparentWallB_FWDDECL
#include <Modloader/app/structs/TransparentWallB__Class.h>
#endif
#undef IL2CPP_STRUCT_TransparentWallB_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransparentWallB_DEFINED) && !defined(IL2CPP_STRUCT_TransparentWallB_FWDDECL)
#include <Modloader/app/structs/TransparentWallB.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransparentWallB.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
