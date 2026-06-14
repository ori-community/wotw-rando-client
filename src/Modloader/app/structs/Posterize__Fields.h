#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Posterize__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Posterize__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Posterize__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED)
#define IL2CPP_STRUCT_Posterize__Fields_DEFINED
struct Posterize__Fields {
    struct BaseEffect__Fields _;
    int32_t Levels;
    float Amount;
    bool LuminosityOnly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Posterize__Fields_FWDDECL)
#define IL2CPP_STRUCT_Posterize__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_Posterize__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Posterize__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Posterize__Fields_FWDDECL)
#include <Modloader/app/structs/Posterize__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Posterize__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
