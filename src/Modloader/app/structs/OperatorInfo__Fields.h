#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OperatorInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OperatorInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OperatorInfo__Fields_DEFINED)
#include <Modloader/app/structs/Nodes__Enum.h>
#if defined(IL2CPP_STRUCT_Nodes__Enum_DEFINED)
#define IL2CPP_STRUCT_OperatorInfo__Fields_DEFINED
struct __declspec(align(8)) OperatorInfo__Fields {
    Nodes__Enum _type;

    int32_t _op;
    int32_t _priority;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OperatorInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_OperatorInfo__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_OperatorInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OperatorInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OperatorInfo__Fields_FWDDECL)
#include <Modloader/app/structs/OperatorInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OperatorInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
