#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RuntimeOps_RuntimeVariables__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RuntimeOps_RuntimeVariables__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeOps_RuntimeVariables__Fields_DEFINED)
#define IL2CPP_STRUCT_RuntimeOps_RuntimeVariables__Fields_DEFINED
struct IStrongBox__Array;
struct __declspec(align(8)) RuntimeOps_RuntimeVariables__Fields {
    struct IStrongBox__Array* _boxes;
};
#endif
#if !defined(IL2CPP_STRUCT_RuntimeOps_RuntimeVariables__Fields_FWDDECL)
#define IL2CPP_STRUCT_RuntimeOps_RuntimeVariables__Fields_FWDDECL
#include <Modloader/app/structs/IStrongBox__Array.h>
#endif
#undef IL2CPP_STRUCT_RuntimeOps_RuntimeVariables__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RuntimeOps_RuntimeVariables__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RuntimeOps_RuntimeVariables__Fields_FWDDECL)
#include <Modloader/app/structs/RuntimeOps_RuntimeVariables__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RuntimeOps_RuntimeVariables__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
