#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MothLandBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MothLandBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothLandBehaviour_DEFINED)
#include <Modloader/app/structs/MothLandBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MothLandBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MothLandBehaviour_DEFINED
struct MothLandBehaviour__Class;
struct MothLandBehaviour {
    struct MothLandBehaviour__Class* klass;
    MonitorData* monitor;
    struct MothLandBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MothLandBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MothLandBehaviour_FWDDECL
#include <Modloader/app/structs/MothLandBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MothLandBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MothLandBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MothLandBehaviour_FWDDECL)
#include <Modloader/app/structs/MothLandBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MothLandBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
