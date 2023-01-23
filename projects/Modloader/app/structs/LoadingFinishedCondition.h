#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadingFinishedCondition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadingFinishedCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingFinishedCondition_DEFINED)
#include <Modloader/app/structs/LoadingFinishedCondition__Fields.h>
#if defined(IL2CPP_STRUCT_LoadingFinishedCondition__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadingFinishedCondition_DEFINED
struct LoadingFinishedCondition__Class;
struct LoadingFinishedCondition {
    struct LoadingFinishedCondition__Class* klass;
    MonitorData* monitor;
    struct LoadingFinishedCondition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadingFinishedCondition_FWDDECL)
#define IL2CPP_STRUCT_LoadingFinishedCondition_FWDDECL
#include <Modloader/app/structs/LoadingFinishedCondition__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadingFinishedCondition_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadingFinishedCondition_DEFINED) && !defined(IL2CPP_STRUCT_LoadingFinishedCondition_FWDDECL)
#include <Modloader/app/structs/LoadingFinishedCondition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadingFinishedCondition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
