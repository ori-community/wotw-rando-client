#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SecurityRuleSet__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SecurityRuleSet__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityRuleSet__Enum_DEFINED)
#define IL2CPP_STRUCT_SecurityRuleSet__Enum_DEFINED
enum class SecurityRuleSet__Enum : uint8_t {
    None = 0x00,
    Level1 = 0x01,
    Level2 = 0x02,
};
#endif
#if !defined(IL2CPP_STRUCT_SecurityRuleSet__Enum_FWDDECL)
#define IL2CPP_STRUCT_SecurityRuleSet__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SecurityRuleSet__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SecurityRuleSet__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SecurityRuleSet__Enum_FWDDECL)
#include <Modloader/app/structs/SecurityRuleSet__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SecurityRuleSet__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
