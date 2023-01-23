#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Pixelate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Pixelate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Pixelate__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Pixelate_SizeMode__Enum.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Pixelate_SizeMode__Enum_DEFINED)
#define IL2CPP_STRUCT_Pixelate__Fields_DEFINED
struct Pixelate__Fields {
    struct BaseEffect__Fields _;
    float Scale;
    bool AutomaticRatio;
    float Ratio;
    Pixelate_SizeMode__Enum Mode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Pixelate__Fields_FWDDECL)
#define IL2CPP_STRUCT_Pixelate__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Pixelate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Pixelate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Pixelate__Fields_FWDDECL)
#include <Modloader/app/structs/Pixelate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Pixelate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
