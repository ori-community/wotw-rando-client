#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLayers_Layer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLayers_Layer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLayers_Layer__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLayers_Layer__Fields_DEFINED
struct String;
struct __declspec(align(8)) SceneLayers_Layer__Fields {
    struct String* Name;
    bool Visible;
    bool Locked;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneLayers_Layer__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneLayers_Layer__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SceneLayers_Layer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLayers_Layer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneLayers_Layer__Fields_FWDDECL)
#include <Modloader/app/structs/SceneLayers_Layer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLayers_Layer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
