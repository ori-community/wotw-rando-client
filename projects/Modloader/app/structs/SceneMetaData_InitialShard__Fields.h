#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneMetaData_InitialShard__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneMetaData_InitialShard__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneMetaData_InitialShard__Fields_DEFINED)
#include <Modloader/app/structs/SpiritShardType__Enum.h>
#if defined(IL2CPP_STRUCT_SpiritShardType__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneMetaData_InitialShard__Fields_DEFINED
struct __declspec(align(8)) SceneMetaData_InitialShard__Fields {
    SpiritShardType__Enum Type;

    int32_t Level;
    bool EquipOnStart;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneMetaData_InitialShard__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneMetaData_InitialShard__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SceneMetaData_InitialShard__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneMetaData_InitialShard__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneMetaData_InitialShard__Fields_FWDDECL)
#include <Modloader/app/structs/SceneMetaData_InitialShard__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneMetaData_InitialShard__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
