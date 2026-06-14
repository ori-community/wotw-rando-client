#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PluginContractKey_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PluginContractKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_PluginContractKey_DEFINED)
#include <Modloader/app/structs/PluginContract__Enum.h>
#if defined(IL2CPP_STRUCT_PluginContract__Enum_DEFINED)
#define IL2CPP_STRUCT_PluginContractKey_DEFINED
struct String;
struct PluginContractKey {
    PluginContract__Enum _pluginContract;

    struct String* _pluginName;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PluginContractKey_FWDDECL)
#define IL2CPP_STRUCT_PluginContractKey_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_PluginContractKey_INITIALIZING
#if !defined(IL2CPP_STRUCT_PluginContractKey_DEFINED) && !defined(IL2CPP_STRUCT_PluginContractKey_FWDDECL)
#include <Modloader/app/structs/PluginContractKey.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PluginContractKey.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
