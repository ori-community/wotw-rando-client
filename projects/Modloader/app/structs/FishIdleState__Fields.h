#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishIdleState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishIdleState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishIdleState__Fields_DEFINED)
#include <Modloader/app/structs/FishState__Fields.h>
#if defined(IL2CPP_STRUCT_FishState__Fields_DEFINED)
#define IL2CPP_STRUCT_FishIdleState__Fields_DEFINED
struct FishIdleState__Fields {
    struct FishState__Fields _;
    float m_lockAnimationTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishIdleState__Fields_FWDDECL)
#define IL2CPP_STRUCT_FishIdleState__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_FishIdleState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishIdleState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FishIdleState__Fields_FWDDECL)
#include <Modloader/app/structs/FishIdleState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishIdleState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
