#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AreaMapIconManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AreaMapIconManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapIconManager__Fields_DEFINED)
#include <Modloader/app/structs/AreaMapIconFilter__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AreaMapIconFilter__Enum_DEFINED)
#define IL2CPP_STRUCT_AreaMapIconManager__Fields_DEFINED
struct AreaMapIconFilterFooterLabel__Array;
struct AreaMapIconManager_IconGameObjects;
struct AreaMapIconManager__Fields {
    struct MonoBehaviour__Fields _;
    AreaMapIconFilter__Enum Filter;

    struct AreaMapIconFilterFooterLabel__Array* Labels;
    struct AreaMapIconManager_IconGameObjects* Icons;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AreaMapIconManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_AreaMapIconManager__Fields_FWDDECL
#include <Modloader/app/structs/AreaMapIconFilterFooterLabel__Array.h>
#include <Modloader/app/structs/AreaMapIconManager_IconGameObjects.h>
#endif
#undef IL2CPP_STRUCT_AreaMapIconManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AreaMapIconManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AreaMapIconManager__Fields_FWDDECL)
#include <Modloader/app/structs/AreaMapIconManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AreaMapIconManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
