#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OverridableColorProperty__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OverridableColorProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverridableColorProperty__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_OverridableColorProperty__Fields_DEFINED
struct String;
struct __declspec(align(8)) OverridableColorProperty__Fields {
    bool Override;
    struct String* Name;
    int32_t _ID;
    struct Color Color;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OverridableColorProperty__Fields_FWDDECL)
#define IL2CPP_STRUCT_OverridableColorProperty__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_OverridableColorProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OverridableColorProperty__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OverridableColorProperty__Fields_FWDDECL)
#include <Modloader/app/structs/OverridableColorProperty__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OverridableColorProperty__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
