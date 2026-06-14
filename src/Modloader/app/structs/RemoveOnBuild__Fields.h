#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RemoveOnBuild__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RemoveOnBuild__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveOnBuild__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_RemoveOnBuild__Fields_DEFINED
struct GameObject__Array;
struct Component_1__Array;
struct String;
struct RemoveOnBuild__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject__Array* gameObjectsToRemove;
    struct Component_1__Array* componentsToRemove;
    struct String* comment;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RemoveOnBuild__Fields_FWDDECL)
#define IL2CPP_STRUCT_RemoveOnBuild__Fields_FWDDECL
#include <Modloader/app/structs/Component_1__Array.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RemoveOnBuild__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RemoveOnBuild__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RemoveOnBuild__Fields_FWDDECL)
#include <Modloader/app/structs/RemoveOnBuild__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RemoveOnBuild__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
