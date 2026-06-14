#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeleteGroupRequest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeleteGroupRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteGroupRequest__Fields_DEFINED)
#include <Modloader/app/structs/PlayFabRequestCommon__Fields.h>
#if defined(IL2CPP_STRUCT_PlayFabRequestCommon__Fields_DEFINED)
#define IL2CPP_STRUCT_DeleteGroupRequest__Fields_DEFINED
struct EntityKey_5;
struct DeleteGroupRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_5* Group;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeleteGroupRequest__Fields_FWDDECL)
#define IL2CPP_STRUCT_DeleteGroupRequest__Fields_FWDDECL
#include <Modloader/app/structs/EntityKey_5.h>
#endif
#undef IL2CPP_STRUCT_DeleteGroupRequest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeleteGroupRequest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DeleteGroupRequest__Fields_FWDDECL)
#include <Modloader/app/structs/DeleteGroupRequest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeleteGroupRequest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
