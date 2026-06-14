#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IgnoreCertProblem__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IgnoreCertProblem__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreCertProblem__Enum_DEFINED)
#define IL2CPP_STRUCT_IgnoreCertProblem__Enum_DEFINED
enum class IgnoreCertProblem__Enum : int32_t {
    not_time_valid = 0x00000001,
    ctl_not_time_valid = 0x00000002,
    not_time_nested = 0x00000004,
    invalid_basic_constraints = 0x00000008,
    all_not_time_valid = 0x00000007,
    allow_unknown_ca = 0x00000010,
    wrong_usage = 0x00000020,
    invalid_name = 0x00000040,
    invalid_policy = 0x00000080,
    end_rev_unknown = 0x00000100,
    ctl_signer_rev_unknown = 0x00000200,
    ca_rev_unknown = 0x00000400,
    root_rev_unknown = 0x00000800,
    all_rev_unknown = 0x00000f00,
    none = 0x00000fff,
};
#endif
#if !defined(IL2CPP_STRUCT_IgnoreCertProblem__Enum_FWDDECL)
#define IL2CPP_STRUCT_IgnoreCertProblem__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_IgnoreCertProblem__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreCertProblem__Enum_DEFINED) && !defined(IL2CPP_STRUCT_IgnoreCertProblem__Enum_FWDDECL)
#include <Modloader/app/structs/IgnoreCertProblem__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IgnoreCertProblem__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
