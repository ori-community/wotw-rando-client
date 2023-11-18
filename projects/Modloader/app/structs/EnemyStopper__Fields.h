#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnemyStopper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnemyStopper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyStopper__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_EnemyStopper__Fields_DEFINED
struct EnemyStopper__Fields {
    struct MonoBehaviour__Fields _;
    struct Rect m_bounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnemyStopper__Fields_FWDDECL)
#define IL2CPP_STRUCT_EnemyStopper__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_EnemyStopper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnemyStopper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EnemyStopper__Fields_FWDDECL)
#include <Modloader/app/structs/EnemyStopper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnemyStopper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
