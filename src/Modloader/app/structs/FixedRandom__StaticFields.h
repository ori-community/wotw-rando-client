#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FixedRandom__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FixedRandom__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedRandom__StaticFields_DEFINED)
#define IL2CPP_STRUCT_FixedRandom__StaticFields_DEFINED
struct Single__Array;
struct Vector2__Array;
struct Vector3__Array;
struct FixedRandom__StaticFields {
    int32_t FixedUpdateIndex;
    int32_t AmountOfValues;
    struct Single__Array* Values;
    struct Vector2__Array* InsideUnitCircleValues;
    struct Vector3__Array* InsideUnitSphereValues;
};
#endif
#if !defined(IL2CPP_STRUCT_FixedRandom__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FixedRandom__StaticFields_FWDDECL
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_FixedRandom__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FixedRandom__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FixedRandom__StaticFields_FWDDECL)
#include <Modloader/app/structs/FixedRandom__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FixedRandom__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
