#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonDriver__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonDriver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDriver__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MoonDriver__Fields_DEFINED
struct IMoonDriverExecutionOrderMap;
struct UpdateManager;
struct UpdateManager__Array;
struct String;
struct MoonDriver__Fields {
    struct MonoBehaviour__Fields _;
    struct IMoonDriverExecutionOrderMap* m_defaultMap;
    struct IMoonDriverExecutionOrderMap* m_executionOrderMap;
    struct UpdateManager* m_updateManager;
    struct UpdateManager* m_lateUpdateManager;
    struct UpdateManager* m_fixedUpdateManager;
    struct UpdateManager__Array* m_managers;
    struct String* m_updateString;
    struct String* m_lateUpdateString;
    struct String* m_fixedUpdateString;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonDriver__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonDriver__Fields_FWDDECL
#include <Modloader/app/structs/IMoonDriverExecutionOrderMap.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UpdateManager.h>
#include <Modloader/app/structs/UpdateManager__Array.h>
#endif
#undef IL2CPP_STRUCT_MoonDriver__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonDriver__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonDriver__Fields_FWDDECL)
#include <Modloader/app/structs/MoonDriver__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonDriver__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
