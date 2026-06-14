#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OnCollisionEnter__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OnCollisionEnter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnCollisionEnter__Fields_DEFINED)
#define IL2CPP_STRUCT_OnCollisionEnter__Fields_DEFINED
struct Collision;
struct __declspec(align(8)) OnCollisionEnter__Fields {
    struct Collision* Collision;
};
#endif
#if !defined(IL2CPP_STRUCT_OnCollisionEnter__Fields_FWDDECL)
#define IL2CPP_STRUCT_OnCollisionEnter__Fields_FWDDECL
#include <Modloader/app/structs/Collision.h>
#endif
#undef IL2CPP_STRUCT_OnCollisionEnter__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OnCollisionEnter__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OnCollisionEnter__Fields_FWDDECL)
#include <Modloader/app/structs/OnCollisionEnter__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OnCollisionEnter__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
