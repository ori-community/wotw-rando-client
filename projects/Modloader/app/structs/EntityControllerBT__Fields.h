#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityControllerBT__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityControllerBT__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityControllerBT__Fields_DEFINED)
#include <Modloader/app/structs/EntityController__Fields.h>
#if defined(IL2CPP_STRUCT_EntityController__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityControllerBT__Fields_DEFINED
struct BehaviourTree_1;
struct EntityControllerBT__Fields {
    struct EntityController__Fields _;
    struct BehaviourTree_1* BehaviourTree;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityControllerBT__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityControllerBT__Fields_FWDDECL
#include <Modloader/app/structs/BehaviourTree_1.h>
#endif
#undef IL2CPP_STRUCT_EntityControllerBT__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityControllerBT__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityControllerBT__Fields_FWDDECL)
#include <Modloader/app/structs/EntityControllerBT__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityControllerBT__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
