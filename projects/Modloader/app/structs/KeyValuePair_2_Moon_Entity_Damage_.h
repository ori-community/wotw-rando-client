#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeyValuePair_2_Moon_Entity_Damage__INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeyValuePair_2_Moon_Entity_Damage__INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_Moon_Entity_Damage__DEFINED)
#define IL2CPP_STRUCT_KeyValuePair_2_Moon_Entity_Damage__DEFINED
struct Entity;
struct Damage;
struct KeyValuePair_2_Moon_Entity_Damage_ {
    struct Entity* key;
    struct Damage* value;
};
#endif
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_Moon_Entity_Damage__FWDDECL)
#define IL2CPP_STRUCT_KeyValuePair_2_Moon_Entity_Damage__FWDDECL
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/Entity.h>
#endif
#undef IL2CPP_STRUCT_KeyValuePair_2_Moon_Entity_Damage__INITIALIZING
#if !defined(IL2CPP_STRUCT_KeyValuePair_2_Moon_Entity_Damage__DEFINED) && !defined(IL2CPP_STRUCT_KeyValuePair_2_Moon_Entity_Damage__FWDDECL)
#include <Modloader/app/structs/KeyValuePair_2_Moon_Entity_Damage_.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeyValuePair_2_Moon_Entity_Damage_.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
