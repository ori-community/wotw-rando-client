#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkVertex_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkVertex_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkVertex_DEFINED)
#include <Modloader/app/structs/AkVertex__Fields.h>
#if defined(IL2CPP_STRUCT_AkVertex__Fields_DEFINED)
#define IL2CPP_STRUCT_AkVertex_DEFINED
struct AkVertex__Class;
struct AkVertex {
    struct AkVertex__Class* klass;
    MonitorData* monitor;
    struct AkVertex__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkVertex_FWDDECL)
#define IL2CPP_STRUCT_AkVertex_FWDDECL
#include <Modloader/app/structs/AkVertex__Class.h>
#endif
#undef IL2CPP_STRUCT_AkVertex_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkVertex_DEFINED) && !defined(IL2CPP_STRUCT_AkVertex_FWDDECL)
#include <Modloader/app/structs/AkVertex.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkVertex.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
