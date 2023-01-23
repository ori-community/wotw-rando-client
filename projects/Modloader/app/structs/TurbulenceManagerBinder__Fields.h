#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurbulenceManagerBinder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurbulenceManagerBinder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceManagerBinder__Fields_DEFINED)
#define IL2CPP_STRUCT_TurbulenceManagerBinder__Fields_DEFINED
struct Color__Array;
struct Texture2D;
struct __declspec(align(8)) TurbulenceManagerBinder__Fields {
    struct Color__Array* m_colorSet;
    struct Texture2D* m_lerpTex;
};
#endif
#if !defined(IL2CPP_STRUCT_TurbulenceManagerBinder__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurbulenceManagerBinder__Fields_FWDDECL
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_TurbulenceManagerBinder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurbulenceManagerBinder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurbulenceManagerBinder__Fields_FWDDECL)
#include <Modloader/app/structs/TurbulenceManagerBinder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurbulenceManagerBinder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
