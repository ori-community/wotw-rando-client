#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneUberStateGroup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneUberStateGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneUberStateGroup__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneUberStateGroup__Fields_DEFINED
struct UberID;
struct __declspec(align(8)) SceneUberStateGroup__Fields {
    struct UberID* m_id;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneUberStateGroup__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneUberStateGroup__Fields_FWDDECL
#include <Modloader/app/structs/UberID.h>
#endif
#undef IL2CPP_STRUCT_SceneUberStateGroup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneUberStateGroup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneUberStateGroup__Fields_FWDDECL)
#include <Modloader/app/structs/SceneUberStateGroup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneUberStateGroup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
