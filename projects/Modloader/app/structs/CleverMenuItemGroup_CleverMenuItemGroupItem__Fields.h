#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CleverMenuItemGroup_CleverMenuItemGroupItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CleverMenuItemGroup_CleverMenuItemGroupItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItemGroup_CleverMenuItemGroupItem__Fields_DEFINED)
#define IL2CPP_STRUCT_CleverMenuItemGroup_CleverMenuItemGroupItem__Fields_DEFINED
struct CleverMenuItem;
struct CleverMenuItemGroupBase;
struct __declspec(align(8)) CleverMenuItemGroup_CleverMenuItemGroupItem__Fields {
    struct CleverMenuItem* MenuItem;
    struct CleverMenuItemGroupBase* ItemGroup;
};
#endif
#if !defined(IL2CPP_STRUCT_CleverMenuItemGroup_CleverMenuItemGroupItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_CleverMenuItemGroup_CleverMenuItemGroupItem__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItemGroupBase.h>
#endif
#undef IL2CPP_STRUCT_CleverMenuItemGroup_CleverMenuItemGroupItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CleverMenuItemGroup_CleverMenuItemGroupItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CleverMenuItemGroup_CleverMenuItemGroupItem__Fields_FWDDECL)
#include <Modloader/app/structs/CleverMenuItemGroup_CleverMenuItemGroupItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CleverMenuItemGroup_CleverMenuItemGroupItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
