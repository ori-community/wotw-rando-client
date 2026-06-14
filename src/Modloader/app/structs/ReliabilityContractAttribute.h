#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ReliabilityContractAttribute_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ReliabilityContractAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReliabilityContractAttribute_DEFINED)
#include <Modloader/app/structs/ReliabilityContractAttribute__Fields.h>
#if defined(IL2CPP_STRUCT_ReliabilityContractAttribute__Fields_DEFINED)
#define IL2CPP_STRUCT_ReliabilityContractAttribute_DEFINED
struct ReliabilityContractAttribute__Class;
struct ReliabilityContractAttribute {
    struct ReliabilityContractAttribute__Class* klass;
    MonitorData* monitor;
    struct ReliabilityContractAttribute__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ReliabilityContractAttribute_FWDDECL)
#define IL2CPP_STRUCT_ReliabilityContractAttribute_FWDDECL
#include <Modloader/app/structs/ReliabilityContractAttribute__Class.h>
#endif
#undef IL2CPP_STRUCT_ReliabilityContractAttribute_INITIALIZING
#if !defined(IL2CPP_STRUCT_ReliabilityContractAttribute_DEFINED) && !defined(IL2CPP_STRUCT_ReliabilityContractAttribute_FWDDECL)
#include <Modloader/app/structs/ReliabilityContractAttribute.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ReliabilityContractAttribute.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
