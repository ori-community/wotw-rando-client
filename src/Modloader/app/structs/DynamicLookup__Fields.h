#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DynamicLookup__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DynamicLookup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicLookup__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_DynamicLookup__Fields_DEFINED
struct DynamicLookup__Fields {
    struct BaseEffect__Fields _;
    struct Color White;
    struct Color Black;
    struct Color Red;
    struct Color Green;
    struct Color Blue;
    struct Color Yellow;
    struct Color Magenta;
    struct Color Cyan;
    float Amount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DynamicLookup__Fields_FWDDECL)
#define IL2CPP_STRUCT_DynamicLookup__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DynamicLookup__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DynamicLookup__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DynamicLookup__Fields_FWDDECL)
#include <Modloader/app/structs/DynamicLookup__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DynamicLookup__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
