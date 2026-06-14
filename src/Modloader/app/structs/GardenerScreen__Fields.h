#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GardenerScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GardenerScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GardenerScreen__Fields_DEFINED)
#include <Modloader/app/structs/ShopkeeperScreen__Fields.h>
#if defined(IL2CPP_STRUCT_ShopkeeperScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_GardenerScreen__Fields_DEFINED
struct NpcProjectItem__Array;
struct GardenerItem__Array;
struct NpcProjectItem;
struct GardenerScreen__Fields {
    struct ShopkeeperScreen__Fields _;
    struct NpcProjectItem__Array* Projects;
    struct GardenerItem__Array* GardenerItems;
    struct NpcProjectItem* m_lastProject;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GardenerScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_GardenerScreen__Fields_FWDDECL
#include <Modloader/app/structs/GardenerItem__Array.h>
#include <Modloader/app/structs/NpcProjectItem.h>
#include <Modloader/app/structs/NpcProjectItem__Array.h>
#endif
#undef IL2CPP_STRUCT_GardenerScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GardenerScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GardenerScreen__Fields_FWDDECL)
#include <Modloader/app/structs/GardenerScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GardenerScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
