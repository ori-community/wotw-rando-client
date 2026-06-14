#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityId_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityId_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityId_DEFINED)
#define IL2CPP_STRUCT_EntityId_DEFINED
struct EntityId {
    int32_t Id;
};
#endif
#if !defined(IL2CPP_STRUCT_EntityId_FWDDECL)
#define IL2CPP_STRUCT_EntityId_FWDDECL
#endif
#undef IL2CPP_STRUCT_EntityId_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityId_DEFINED) && !defined(IL2CPP_STRUCT_EntityId_FWDDECL)
#include <Modloader/app/structs/EntityId.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityId.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
