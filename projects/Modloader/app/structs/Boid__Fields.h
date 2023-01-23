#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Boid__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Boid__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Boid__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_Boid__Fields_DEFINED
struct BoidSettings;
struct Rigidbody;
struct Boid__Fields {
    struct MonoBehaviour__Fields _;
    struct BoidSettings* Settings;
    struct Vector2 Speed;
    struct Vector2 Position;
    struct Rigidbody* m_rigidbody;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Boid__Fields_FWDDECL)
#define IL2CPP_STRUCT_Boid__Fields_FWDDECL
#include <Modloader/app/structs/BoidSettings.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_Boid__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Boid__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Boid__Fields_FWDDECL)
#include <Modloader/app/structs/Boid__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Boid__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
