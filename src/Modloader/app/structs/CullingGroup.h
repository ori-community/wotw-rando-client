#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CullingGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CullingGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingGroup_DEFINED)
#include <Modloader/app/structs/CullingGroup__Fields.h>
#if defined(IL2CPP_STRUCT_CullingGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_CullingGroup_DEFINED
struct CullingGroup__Class;
struct CullingGroup {
    struct CullingGroup__Class* klass;
    MonitorData* monitor;
    struct CullingGroup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CullingGroup_FWDDECL)
#define IL2CPP_STRUCT_CullingGroup_FWDDECL
#include <Modloader/app/structs/CullingGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_CullingGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingGroup_DEFINED) && !defined(IL2CPP_STRUCT_CullingGroup_FWDDECL)
#include <Modloader/app/structs/CullingGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CullingGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
