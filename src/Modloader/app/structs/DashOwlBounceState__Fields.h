#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashOwlBounceState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashOwlBounceState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlBounceState__Fields_DEFINED)
#include <Modloader/app/structs/DashOwlState__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_DashOwlState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_DashOwlBounceState__Fields_DEFINED
struct DashOwlBounceState__Fields {
    struct DashOwlState__Fields _;
    struct Vector2 m_direction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashOwlBounceState__Fields_FWDDECL)
#define IL2CPP_STRUCT_DashOwlBounceState__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DashOwlBounceState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashOwlBounceState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DashOwlBounceState__Fields_FWDDECL)
#include <Modloader/app/structs/DashOwlBounceState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashOwlBounceState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
