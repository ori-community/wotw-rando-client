#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityHandling__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityHandling__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHandling__Enum_DEFINED)
#define IL2CPP_STRUCT_EntityHandling__Enum_DEFINED
enum class EntityHandling__Enum : int32_t {
    ExpandEntities = 0x00000001,
    ExpandCharEntities = 0x00000002,
};
#endif
#if !defined(IL2CPP_STRUCT_EntityHandling__Enum_FWDDECL)
#define IL2CPP_STRUCT_EntityHandling__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_EntityHandling__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityHandling__Enum_DEFINED) && !defined(IL2CPP_STRUCT_EntityHandling__Enum_FWDDECL)
#include <Modloader/app/structs/EntityHandling__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityHandling__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
