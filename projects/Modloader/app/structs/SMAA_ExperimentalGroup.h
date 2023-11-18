#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SMAA_ExperimentalGroup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SMAA_ExperimentalGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_ExperimentalGroup_DEFINED)
#define IL2CPP_STRUCT_SMAA_ExperimentalGroup_DEFINED
struct SMAA_ExperimentalGroup__Class;
struct SMAA_ExperimentalGroup {
    struct SMAA_ExperimentalGroup__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_SMAA_ExperimentalGroup_FWDDECL)
#define IL2CPP_STRUCT_SMAA_ExperimentalGroup_FWDDECL
#include <Modloader/app/structs/SMAA_ExperimentalGroup__Class.h>
#endif
#undef IL2CPP_STRUCT_SMAA_ExperimentalGroup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SMAA_ExperimentalGroup_DEFINED) && !defined(IL2CPP_STRUCT_SMAA_ExperimentalGroup_FWDDECL)
#include <Modloader/app/structs/SMAA_ExperimentalGroup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SMAA_ExperimentalGroup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
