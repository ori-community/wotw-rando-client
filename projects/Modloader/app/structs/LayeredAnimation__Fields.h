#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LayeredAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LayeredAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredAnimation__Fields_DEFINED)
#include <Modloader/app/structs/MoonAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimation__Fields_DEFINED)
#define IL2CPP_STRUCT_LayeredAnimation__Fields_DEFINED
struct LayeredAnimation_Input__Array;
struct LayeredAnimation__Fields {
    struct MoonAnimation__Fields _;
    struct LayeredAnimation_Input__Array* Inputs;
    struct LayeredAnimation_Input__Array* m_validInputs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LayeredAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_LayeredAnimation__Fields_FWDDECL
#include <Modloader/app/structs/LayeredAnimation_Input__Array.h>
#endif
#undef IL2CPP_STRUCT_LayeredAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LayeredAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LayeredAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/LayeredAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LayeredAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
