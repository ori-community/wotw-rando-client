#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LabelScopeKind__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LabelScopeKind__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelScopeKind__Enum_DEFINED)
#define IL2CPP_STRUCT_LabelScopeKind__Enum_DEFINED
enum class LabelScopeKind__Enum : int32_t {
    Statement = 0x00000000,
    Block = 0x00000001,
    Switch = 0x00000002,
    Lambda = 0x00000003,
    Try = 0x00000004,
    Catch = 0x00000005,
    Finally = 0x00000006,
    Filter = 0x00000007,
    Expression = 0x00000008,
};
#endif
#if !defined(IL2CPP_STRUCT_LabelScopeKind__Enum_FWDDECL)
#define IL2CPP_STRUCT_LabelScopeKind__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_LabelScopeKind__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_LabelScopeKind__Enum_DEFINED) && !defined(IL2CPP_STRUCT_LabelScopeKind__Enum_FWDDECL)
#include <Modloader/app/structs/LabelScopeKind__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LabelScopeKind__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
