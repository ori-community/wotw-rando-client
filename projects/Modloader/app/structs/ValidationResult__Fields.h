#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValidationResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValidationResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationResult__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors__DEFINED)
#define IL2CPP_STRUCT_ValidationResult__Fields_DEFINED
struct __declspec(align(8)) ValidationResult__Fields {
    bool trusted;
    bool user_denied;
    int32_t error_code;
    struct Nullable_1_Mono_Security_Interface_MonoSslPolicyErrors_ policy_errors;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValidationResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_ValidationResult__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ValidationResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValidationResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ValidationResult__Fields_FWDDECL)
#include <Modloader/app/structs/ValidationResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValidationResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
