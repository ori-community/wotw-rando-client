#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerObject__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObject__Fields_DEFINED)
#define IL2CPP_STRUCT_ServerObject__Fields_DEFINED
struct String;
struct List_1_ServerObjectComponent_;
struct List_1_ServerObject_;
struct __declspec(align(8)) ServerObject__Fields {
    struct String* ServerObjName;
    int32_t ServerObjID;
    struct List_1_ServerObjectComponent_* Components;
    struct String* Tag;
    int32_t Layer;
    bool IsPrefab;
    struct String* AssetGuid;
    struct List_1_ServerObject_* Children;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerObject__Fields_FWDDECL)
#define IL2CPP_STRUCT_ServerObject__Fields_FWDDECL
#include <Modloader/app/structs/List_1_ServerObjectComponent_.h>
#include <Modloader/app/structs/List_1_ServerObject_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ServerObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerObject__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ServerObject__Fields_FWDDECL)
#include <Modloader/app/structs/ServerObject__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerObject__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
