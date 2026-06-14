#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParamsArray__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParamsArray__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParamsArray__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ParamsArray__StaticFields_DEFINED
struct Object__Array;
struct ParamsArray__StaticFields {
    struct Object__Array* oneArgArray;
    struct Object__Array* twoArgArray;
    struct Object__Array* threeArgArray;
};
#endif
#if !defined(IL2CPP_STRUCT_ParamsArray__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ParamsArray__StaticFields_FWDDECL
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_ParamsArray__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParamsArray__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ParamsArray__StaticFields_FWDDECL)
#include <Modloader/app/structs/ParamsArray__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParamsArray__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
