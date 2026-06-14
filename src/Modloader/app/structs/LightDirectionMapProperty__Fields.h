#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightDirectionMapProperty__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightDirectionMapProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDirectionMapProperty__Fields_DEFINED)
#include <Modloader/app/structs/UberShaderProperty__Fields.h>
#if defined(IL2CPP_STRUCT_UberShaderProperty__Fields_DEFINED)
#define IL2CPP_STRUCT_LightDirectionMapProperty__Fields_DEFINED
struct CompressedLightDirectionMap;
struct LightDirectionMapProperty__Fields {
    struct UberShaderProperty__Fields _;
    struct CompressedLightDirectionMap* m_compressedMap;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightDirectionMapProperty__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightDirectionMapProperty__Fields_FWDDECL
#include <Modloader/app/structs/CompressedLightDirectionMap.h>
#endif
#undef IL2CPP_STRUCT_LightDirectionMapProperty__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightDirectionMapProperty__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightDirectionMapProperty__Fields_FWDDECL)
#include <Modloader/app/structs/LightDirectionMapProperty__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightDirectionMapProperty__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
