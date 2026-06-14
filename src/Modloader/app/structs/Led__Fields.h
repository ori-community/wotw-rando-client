#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Led__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Led__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Led__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Led_SizeMode__Enum.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Led_SizeMode__Enum_DEFINED)
#define IL2CPP_STRUCT_Led__Fields_DEFINED
struct Led__Fields {
    struct BaseEffect__Fields _;
    float Scale;
    float Brightness;
    float Shape;
    bool AutomaticRatio;
    float Ratio;
    Led_SizeMode__Enum Mode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Led__Fields_FWDDECL)
#define IL2CPP_STRUCT_Led__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Led__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Led__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Led__Fields_FWDDECL)
#include <Modloader/app/structs/Led__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Led__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
