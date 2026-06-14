#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParamsArray_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParamsArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParamsArray_DEFINED)
#define IL2CPP_STRUCT_ParamsArray_DEFINED
struct Object;
struct Object__Array;
struct ParamsArray {
    struct Object* arg0;
    struct Object* arg1;
    struct Object* arg2;
    struct Object__Array* args;
};
#endif
#if !defined(IL2CPP_STRUCT_ParamsArray_FWDDECL)
#define IL2CPP_STRUCT_ParamsArray_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Object__Array.h>
#endif
#undef IL2CPP_STRUCT_ParamsArray_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParamsArray_DEFINED) && !defined(IL2CPP_STRUCT_ParamsArray_FWDDECL)
#include <Modloader/app/structs/ParamsArray.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParamsArray.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
