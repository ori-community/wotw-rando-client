#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PII__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PII__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PII__Fields_DEFINED)
#include <Modloader/app/structs/PIIKind__Enum.h>
#if defined(IL2CPP_STRUCT_PIIKind__Enum_DEFINED)
#define IL2CPP_STRUCT_PII__Fields_DEFINED
struct __declspec(align(8)) PII__Fields {
    PIIKind__Enum _Kind_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PII__Fields_FWDDECL)
#define IL2CPP_STRUCT_PII__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_PII__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PII__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PII__Fields_FWDDECL)
#include <Modloader/app/structs/PII__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PII__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
