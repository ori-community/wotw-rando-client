#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DirectBlendAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DirectBlendAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectBlendAnimation__Fields_DEFINED)
#include <Modloader/app/structs/MoonAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_DirectBlendAnimation__Fields_DEFINED
struct DirectBlendAnimation_Input__Array;
struct DirectBlendAnimation__Fields {
    struct MoonAnimation__Fields _;
    struct DirectBlendAnimation_Input__Array* Inputs;
    float Speed;
    bool SynchronizeTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DirectBlendAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_DirectBlendAnimation__Fields_FWDDECL
#include <Modloader/app/structs/DirectBlendAnimation_Input__Array.h>
#endif
#undef IL2CPP_STRUCT_DirectBlendAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DirectBlendAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DirectBlendAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/DirectBlendAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DirectBlendAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
