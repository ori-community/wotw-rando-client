#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CircleCollider2D_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CircleCollider2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_CircleCollider2D_DEFINED)
#include <Modloader/app/structs/CircleCollider2D__Fields.h>
#if defined(IL2CPP_STRUCT_CircleCollider2D__Fields_DEFINED)
#define IL2CPP_STRUCT_CircleCollider2D_DEFINED
struct CircleCollider2D__Class;
struct CircleCollider2D {
    struct CircleCollider2D__Class* klass;
    MonitorData* monitor;
    struct CircleCollider2D__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CircleCollider2D_FWDDECL)
#define IL2CPP_STRUCT_CircleCollider2D_FWDDECL
#include <Modloader/app/structs/CircleCollider2D__Class.h>
#endif
#undef IL2CPP_STRUCT_CircleCollider2D_INITIALIZING
#if !defined(IL2CPP_STRUCT_CircleCollider2D_DEFINED) && !defined(IL2CPP_STRUCT_CircleCollider2D_FWDDECL)
#include <Modloader/app/structs/CircleCollider2D.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CircleCollider2D.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
