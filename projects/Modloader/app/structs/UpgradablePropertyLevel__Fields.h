#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpgradablePropertyLevel__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpgradablePropertyLevel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradablePropertyLevel__Fields_DEFINED)
#define IL2CPP_STRUCT_UpgradablePropertyLevel__Fields_DEFINED
struct MessageProvider;
struct List_1_UpgradableProperty_;
struct __declspec(align(8)) UpgradablePropertyLevel__Fields {
    struct MessageProvider* Description;
    int32_t XPCost;
    struct List_1_UpgradableProperty_* Properties;
};
#endif
#if !defined(IL2CPP_STRUCT_UpgradablePropertyLevel__Fields_FWDDECL)
#define IL2CPP_STRUCT_UpgradablePropertyLevel__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UpgradableProperty_.h>
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_UpgradablePropertyLevel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpgradablePropertyLevel__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UpgradablePropertyLevel__Fields_FWDDECL)
#include <Modloader/app/structs/UpgradablePropertyLevel__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpgradablePropertyLevel__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
