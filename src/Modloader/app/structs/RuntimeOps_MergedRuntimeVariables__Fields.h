#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeOps_MergedRuntimeVariables__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeOps_MergedRuntimeVariables__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeOps_MergedRuntimeVariables__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeOps_MergedRuntimeVariables__Fields_DEFINED
struct IRuntimeVariables;
struct Int32__Array;
struct __declspec(align(8)) RuntimeOps_MergedRuntimeVariables__Fields {
    struct IRuntimeVariables* _first;
    struct IRuntimeVariables* _second;
    struct Int32__Array* _indexes;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeOps_MergedRuntimeVariables__Fields_FWDDECL)
#define IL2CPP_STRUCT_RuntimeOps_MergedRuntimeVariables__Fields_FWDDECL
#include <Modloader/app/structs/IRuntimeVariables.h>
#include <Modloader/app/structs/Int32__Array.h>
#endif
#undef IL2CPP_STRUCT_RuntimeOps_MergedRuntimeVariables__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeOps_MergedRuntimeVariables__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeOps_MergedRuntimeVariables__Fields_FWDDECL)
#include <Modloader/app/structs/RuntimeOps_MergedRuntimeVariables__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeOps_MergedRuntimeVariables__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
