#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IgnoreCollision__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IgnoreCollision__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreCollision__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_IgnoreCollision__Fields_DEFINED
struct Collider;
struct IgnoreCollision__Fields {
    struct MonoBehaviour__Fields _;
    struct Collider* Collider1;
    struct Collider* Collider2;
    bool Ignore;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IgnoreCollision__Fields_FWDDECL)
#define IL2CPP_STRUCT_IgnoreCollision__Fields_FWDDECL
#include <Modloader/app/structs/Collider.h>
#endif
#undef IL2CPP_STRUCT_IgnoreCollision__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IgnoreCollision__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IgnoreCollision__Fields_FWDDECL)
#include <Modloader/app/structs/IgnoreCollision__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IgnoreCollision__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
