#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReliabilityContractAttribute__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReliabilityContractAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReliabilityContractAttribute__Fields_DEFINED)
#include <Modloader/app/structs/Cer__Enum.h>
#include <Modloader/app/structs/Consistency__Enum.h>
#if defined(IL2CPP_STRUCT_Consistency__Enum_DEFINED) && defined(IL2CPP_STRUCT_Cer__Enum_DEFINED)
#define IL2CPP_STRUCT_ReliabilityContractAttribute__Fields_DEFINED
struct __declspec(align(8)) ReliabilityContractAttribute__Fields {
    Consistency__Enum _consistency;

    Cer__Enum _cer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReliabilityContractAttribute__Fields_FWDDECL)
#define IL2CPP_STRUCT_ReliabilityContractAttribute__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ReliabilityContractAttribute__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReliabilityContractAttribute__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ReliabilityContractAttribute__Fields_FWDDECL)
#include <Modloader/app/structs/ReliabilityContractAttribute__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReliabilityContractAttribute__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
