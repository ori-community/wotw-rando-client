#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseMeshEffect_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseMeshEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseMeshEffect_DEFINED)
#include <Modloader/app/structs/BaseMeshEffect__Fields.h>
#if defined(IL2CPP_STRUCT_BaseMeshEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseMeshEffect_DEFINED
struct BaseMeshEffect__Class;
struct BaseMeshEffect {
    struct BaseMeshEffect__Class* klass;
    MonitorData* monitor;
    struct BaseMeshEffect__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseMeshEffect_FWDDECL)
#define IL2CPP_STRUCT_BaseMeshEffect_FWDDECL
#include <Modloader/app/structs/BaseMeshEffect__Class.h>
#endif
#undef IL2CPP_STRUCT_BaseMeshEffect_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseMeshEffect_DEFINED) && !defined(IL2CPP_STRUCT_BaseMeshEffect_FWDDECL)
#include <Modloader/app/structs/BaseMeshEffect.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseMeshEffect.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
