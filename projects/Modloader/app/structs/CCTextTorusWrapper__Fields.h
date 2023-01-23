#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CCTextTorusWrapper__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CCTextTorusWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCTextTorusWrapper__Fields_DEFINED)
#include <Modloader/app/structs/CCTextModifier__Fields.h>
#include <Modloader/app/structs/CCTextTorusWrapper_RevolveMode__Enum.h>
#if defined(IL2CPP_STRUCT_CCTextModifier__Fields_DEFINED) && defined(IL2CPP_STRUCT_CCTextTorusWrapper_RevolveMode__Enum_DEFINED)
#define IL2CPP_STRUCT_CCTextTorusWrapper__Fields_DEFINED
struct CCTextTorusWrapper__Fields {
    struct CCTextModifier__Fields _;
    CCTextTorusWrapper_RevolveMode__Enum revolveMode;

    float minorRadius;
    float majorRadius;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CCTextTorusWrapper__Fields_FWDDECL)
#define IL2CPP_STRUCT_CCTextTorusWrapper__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_CCTextTorusWrapper__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CCTextTorusWrapper__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CCTextTorusWrapper__Fields_FWDDECL)
#include <Modloader/app/structs/CCTextTorusWrapper__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CCTextTorusWrapper__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
