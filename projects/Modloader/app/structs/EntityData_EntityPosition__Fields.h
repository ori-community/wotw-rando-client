#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityData_EntityPosition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityData_EntityPosition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityData_EntityPosition__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_EntityData_EntityPosition__Fields_DEFINED
struct __declspec(align(8)) EntityData_EntityPosition__Fields {
    struct Vector3 Position;
    struct Vector2 Velocity;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityData_EntityPosition__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityData_EntityPosition__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_EntityData_EntityPosition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityData_EntityPosition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityData_EntityPosition__Fields_FWDDECL)
#include <Modloader/app/structs/EntityData_EntityPosition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityData_EntityPosition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
