#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CommandBinding__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CommandBinding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommandBinding__Fields_DEFINED)
#include <Modloader/app/structs/KeybindingCommandMapAsset_CommandBindingEnum__Enum.h>
#if defined(IL2CPP_STRUCT_KeybindingCommandMapAsset_CommandBindingEnum__Enum_DEFINED)
#define IL2CPP_STRUCT_CommandBinding__Fields_DEFINED
struct MessageProvider;
struct __declspec(align(8)) CommandBinding__Fields {
    struct MessageProvider* CommandDisplayName;
    struct MessageProvider* CommandKeyToken;
    KeybindingCommandMapAsset_CommandBindingEnum__Enum Command;

    bool CanLeftClickBind;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CommandBinding__Fields_FWDDECL)
#define IL2CPP_STRUCT_CommandBinding__Fields_FWDDECL
#include <Modloader/app/structs/MessageProvider.h>
#endif
#undef IL2CPP_STRUCT_CommandBinding__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CommandBinding__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CommandBinding__Fields_FWDDECL)
#include <Modloader/app/structs/CommandBinding__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CommandBinding__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
