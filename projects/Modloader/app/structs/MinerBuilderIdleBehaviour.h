#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerBuilderIdleBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerBuilderIdleBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBuilderIdleBehaviour_DEFINED)
#include <Modloader/app/structs/MinerBuilderIdleBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MinerBuilderIdleBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerBuilderIdleBehaviour_DEFINED
struct MinerBuilderIdleBehaviour__Class;
struct MinerBuilderIdleBehaviour {
    struct MinerBuilderIdleBehaviour__Class* klass;
    MonitorData* monitor;
    struct MinerBuilderIdleBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerBuilderIdleBehaviour_FWDDECL)
#define IL2CPP_STRUCT_MinerBuilderIdleBehaviour_FWDDECL
#include <Modloader/app/structs/MinerBuilderIdleBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_MinerBuilderIdleBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerBuilderIdleBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_MinerBuilderIdleBehaviour_FWDDECL)
#include <Modloader/app/structs/MinerBuilderIdleBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerBuilderIdleBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
