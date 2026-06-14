#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsRendererVisible__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsRendererVisible__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsRendererVisible__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED)
#define IL2CPP_STRUCT_IsRendererVisible__Fields_DEFINED
struct Renderer;
struct IsRendererVisible__Fields {
    struct Condition_1__Fields _;
    bool Visible;
    struct Renderer* Renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsRendererVisible__Fields_FWDDECL)
#define IL2CPP_STRUCT_IsRendererVisible__Fields_FWDDECL
#include <Modloader/app/structs/Renderer.h>
#endif
#undef IL2CPP_STRUCT_IsRendererVisible__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsRendererVisible__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IsRendererVisible__Fields_FWDDECL)
#include <Modloader/app/structs/IsRendererVisible__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsRendererVisible__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
