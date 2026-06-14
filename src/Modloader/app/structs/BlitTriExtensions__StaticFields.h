#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlitTriExtensions__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlitTriExtensions__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlitTriExtensions__StaticFields_DEFINED)
#define IL2CPP_STRUCT_BlitTriExtensions__StaticFields_DEFINED
struct Material;
struct BlitTriExtensions__StaticFields {
    int32_t _MainTex;
    int32_t _MainTexMS;
    int32_t _MainTex_ST;
    int32_t _SmartBlitProps;
    struct Material* s_defaultMaterial;
};
#endif
#if !defined(IL2CPP_STRUCT_BlitTriExtensions__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_BlitTriExtensions__StaticFields_FWDDECL
#include <Modloader/app/structs/Material.h>
#endif
#undef IL2CPP_STRUCT_BlitTriExtensions__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlitTriExtensions__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_BlitTriExtensions__StaticFields_FWDDECL)
#include <Modloader/app/structs/BlitTriExtensions__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlitTriExtensions__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
