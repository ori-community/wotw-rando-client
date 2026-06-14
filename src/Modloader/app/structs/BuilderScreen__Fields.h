#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuilderScreen__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuilderScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderScreen__Fields_DEFINED)
#include <Modloader/app/structs/ShopkeeperScreen__Fields.h>
#if defined(IL2CPP_STRUCT_ShopkeeperScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_BuilderScreen__Fields_DEFINED
struct NpcProjectItem__Array;
struct BuilderItem__Array;
struct NpcProjectItem;
struct BuilderScreen__Fields {
    struct ShopkeeperScreen__Fields _;
    struct NpcProjectItem__Array* Projects;
    struct BuilderItem__Array* BuilderItems;
    struct NpcProjectItem* m_lastProject;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuilderScreen__Fields_FWDDECL)
#define IL2CPP_STRUCT_BuilderScreen__Fields_FWDDECL
#include <Modloader/app/structs/BuilderItem__Array.h>
#include <Modloader/app/structs/NpcProjectItem.h>
#include <Modloader/app/structs/NpcProjectItem__Array.h>
#endif
#undef IL2CPP_STRUCT_BuilderScreen__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuilderScreen__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BuilderScreen__Fields_FWDDECL)
#include <Modloader/app/structs/BuilderScreen__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuilderScreen__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
