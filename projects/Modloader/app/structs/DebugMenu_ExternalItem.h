#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMenu_ExternalItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMenu_ExternalItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenu_ExternalItem_DEFINED)
#define IL2CPP_STRUCT_DebugMenu_ExternalItem_DEFINED
struct IDebugMenuExternalItem;
struct IDebugMenuItem;
struct DebugMenu_ExternalItem {
    struct IDebugMenuExternalItem* External;
    struct IDebugMenuItem* Item;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugMenu_ExternalItem_FWDDECL)
#define IL2CPP_STRUCT_DebugMenu_ExternalItem_FWDDECL
#include <Modloader/app/structs/IDebugMenuExternalItem.h>
#include <Modloader/app/structs/IDebugMenuItem.h>
#endif
#undef IL2CPP_STRUCT_DebugMenu_ExternalItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenu_ExternalItem_DEFINED) && !defined(IL2CPP_STRUCT_DebugMenu_ExternalItem_FWDDECL)
#include <Modloader/app/structs/DebugMenu_ExternalItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMenu_ExternalItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
