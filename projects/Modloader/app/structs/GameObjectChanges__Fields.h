#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameObjectChanges__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameObjectChanges__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectChanges__Fields_DEFINED)
#include <Modloader/app/structs/ChangesStatus__Enum.h>
#if defined(IL2CPP_STRUCT_ChangesStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_GameObjectChanges__Fields_DEFINED
struct String;
struct List_1_Moon_ReviewFramework_ComponentChanges_;
struct __declspec(align(8)) GameObjectChanges__Fields {
    ChangesStatus__Enum Status;

    struct String* Path;
    struct List_1_Moon_ReviewFramework_ComponentChanges_* Components;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameObjectChanges__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameObjectChanges__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_ReviewFramework_ComponentChanges_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_GameObjectChanges__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectChanges__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameObjectChanges__Fields_FWDDECL)
#include <Modloader/app/structs/GameObjectChanges__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameObjectChanges__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
