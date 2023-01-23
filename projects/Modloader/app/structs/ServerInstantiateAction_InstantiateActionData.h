#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ServerInstantiateAction_InstantiateActionData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ServerInstantiateAction_InstantiateActionData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerInstantiateAction_InstantiateActionData_DEFINED)
#define IL2CPP_STRUCT_ServerInstantiateAction_InstantiateActionData_DEFINED
struct String;
struct ServerObject;
struct ServerInstantiateAction_InstantiateActionData {
    struct String* BaseData;
    int32_t PositionTransformID;
    struct ServerObject* Prefab;
    int32_t ParentTransformID;
};
#endif
#if !defined(IL2CPP_STRUCT_ServerInstantiateAction_InstantiateActionData_FWDDECL)
#define IL2CPP_STRUCT_ServerInstantiateAction_InstantiateActionData_FWDDECL
#include <Modloader/app/structs/ServerObject.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_ServerInstantiateAction_InstantiateActionData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ServerInstantiateAction_InstantiateActionData_DEFINED) && !defined(IL2CPP_STRUCT_ServerInstantiateAction_InstantiateActionData_FWDDECL)
#include <Modloader/app/structs/ServerInstantiateAction_InstantiateActionData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ServerInstantiateAction_InstantiateActionData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
