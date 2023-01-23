#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneBasedUberState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneBasedUberState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneBasedUberState__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneBasedUberState__Fields_DEFINED
struct UberID;
struct IUberStateGroup;
struct SceneBasedUberState__Fields {
    struct MonoBehaviour__Fields _;
    struct UberID* m_id;
    struct IUberStateGroup* m_group;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneBasedUberState__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneBasedUberState__Fields_FWDDECL
#include <Modloader/app/structs/IUberStateGroup.h>
#include <Modloader/app/structs/UberID.h>
#endif
#undef IL2CPP_STRUCT_SceneBasedUberState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneBasedUberState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneBasedUberState__Fields_FWDDECL)
#include <Modloader/app/structs/SceneBasedUberState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneBasedUberState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
