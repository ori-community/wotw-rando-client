#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Wiggle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Wiggle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wiggle__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/Wiggle_Algorithm__Enum.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_Wiggle_Algorithm__Enum_DEFINED)
#define IL2CPP_STRUCT_Wiggle__Fields_DEFINED
struct Wiggle__Fields {
    struct BaseEffect__Fields _;
    Wiggle_Algorithm__Enum Mode;

    float Timer;
    float Speed;
    float Frequency;
    float Amplitude;
    bool AutomaticTimer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Wiggle__Fields_FWDDECL)
#define IL2CPP_STRUCT_Wiggle__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Wiggle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wiggle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Wiggle__Fields_FWDDECL)
#include <Modloader/app/structs/Wiggle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Wiggle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
