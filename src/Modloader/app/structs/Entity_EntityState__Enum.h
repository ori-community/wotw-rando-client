#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Entity_EntityState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Entity_EntityState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Entity_EntityState__Enum_DEFINED)
#define IL2CPP_STRUCT_Entity_EntityState__Enum_DEFINED
enum class Entity_EntityState__Enum : int32_t {
    Spawning = 0x00000000,
    DecisionMaking = 0x00000001,
    Reacting = 0x00000002,
    Cinematic = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_Entity_EntityState__Enum_FWDDECL)
#define IL2CPP_STRUCT_Entity_EntityState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_Entity_EntityState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_Entity_EntityState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_Entity_EntityState__Enum_FWDDECL)
#include <Modloader/app/structs/Entity_EntityState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Entity_EntityState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
