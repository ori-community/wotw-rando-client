#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoveOri_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoveOri_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveOri_DEFINED)
#include <Modloader/app/structs/MoveOri__Fields.h>
#if defined(IL2CPP_STRUCT_MoveOri__Fields_DEFINED)
#define IL2CPP_STRUCT_MoveOri_DEFINED
struct MoveOri__Class;
struct MoveOri {
    struct MoveOri__Class* klass;
    MonitorData* monitor;
    struct MoveOri__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoveOri_FWDDECL)
#define IL2CPP_STRUCT_MoveOri_FWDDECL
#include <Modloader/app/structs/MoveOri__Class.h>
#endif
#undef IL2CPP_STRUCT_MoveOri_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveOri_DEFINED) && !defined(IL2CPP_STRUCT_MoveOri_FWDDECL)
#include <Modloader/app/structs/MoveOri.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoveOri.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
