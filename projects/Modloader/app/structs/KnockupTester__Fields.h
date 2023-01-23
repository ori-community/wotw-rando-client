#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KnockupTester__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KnockupTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KnockupTester__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_KnockupTester__Fields_DEFINED
struct KnockupTester__Fields {
    struct MonoBehaviour__Fields _;
    struct Vector2 Hit1Force;
    struct Vector2 Hit2Force;
    struct Vector2 Hit3Force;
    struct Vector2 Hit4Force;
    struct Vector2 Hit5Force;
    float DamageAmount;
    DamageWeight__Enum DamageWeight;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KnockupTester__Fields_FWDDECL)
#define IL2CPP_STRUCT_KnockupTester__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_KnockupTester__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KnockupTester__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KnockupTester__Fields_FWDDECL)
#include <Modloader/app/structs/KnockupTester__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KnockupTester__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
