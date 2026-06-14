#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Operator__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Operator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Operator__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Operator__StaticFields_DEFINED
struct Operator_Op__Enum__Array;
struct Operator__StaticFields {
    struct Operator_Op__Enum__Array* invertOp;
};
#endif
#if !defined(IL2CPP_STRUCT_Operator__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Operator__StaticFields_FWDDECL
#include <Modloader/app/structs/Operator_Op__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_Operator__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Operator__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Operator__StaticFields_FWDDECL)
#include <Modloader/app/structs/Operator__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Operator__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
