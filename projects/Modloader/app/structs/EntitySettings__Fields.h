#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntitySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntitySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntitySettings__Fields_DEFINED)
#include <Modloader/app/structs/InterestSettings__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_InterestSettings__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_EntitySettings__Fields_DEFINED
struct EntitySettings__Fields {
    struct InterestSettings__Fields _;
    struct Vector2 NonAggroInfluenceDistance;
    float NonAggroWeight;
    float TimeBeforeNonAggro;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntitySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntitySettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_EntitySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntitySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntitySettings__Fields_FWDDECL)
#include <Modloader/app/structs/EntitySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntitySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
