#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CullingGroup_StateChanged_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CullingGroup_StateChanged_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingGroup_StateChanged_DEFINED)
#include <Modloader/app/structs/CullingGroup_StateChanged__Fields.h>
#if defined(IL2CPP_STRUCT_CullingGroup_StateChanged__Fields_DEFINED)
#define IL2CPP_STRUCT_CullingGroup_StateChanged_DEFINED
struct CullingGroup_StateChanged__Class;
struct CullingGroup_StateChanged {
    struct CullingGroup_StateChanged__Class* klass;
    MonitorData* monitor;
    struct CullingGroup_StateChanged__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CullingGroup_StateChanged_FWDDECL)
#define IL2CPP_STRUCT_CullingGroup_StateChanged_FWDDECL
#include <Modloader/app/structs/CullingGroup_StateChanged__Class.h>
#endif
#undef IL2CPP_STRUCT_CullingGroup_StateChanged_INITIALIZING
#if !defined(IL2CPP_STRUCT_CullingGroup_StateChanged_DEFINED) && !defined(IL2CPP_STRUCT_CullingGroup_StateChanged_FWDDECL)
#include <Modloader/app/structs/CullingGroup_StateChanged.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CullingGroup_StateChanged.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
