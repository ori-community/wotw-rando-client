#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneMetaData_SceneSavePedestal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneMetaData_SceneSavePedestal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneMetaData_SceneSavePedestal__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SceneMetaData_SceneSavePedestal__Fields_DEFINED
struct String;
struct SavePedestalUberState;
struct __declspec(align(8)) SceneMetaData_SceneSavePedestal__Fields {
    struct String* Identifier;
    struct Vector3 SceneLocalPosition;
    struct SavePedestalUberState* SerializedState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneMetaData_SceneSavePedestal__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneMetaData_SceneSavePedestal__Fields_FWDDECL
#include <Modloader/app/structs/SavePedestalUberState.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SceneMetaData_SceneSavePedestal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneMetaData_SceneSavePedestal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneMetaData_SceneSavePedestal__Fields_FWDDECL)
#include <Modloader/app/structs/SceneMetaData_SceneSavePedestal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneMetaData_SceneSavePedestal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
