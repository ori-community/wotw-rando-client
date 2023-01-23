#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCullingSystem_LightCullingConfigPerType_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCullingSystem_LightCullingConfigPerType_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCullingSystem_LightCullingConfigPerType_DEFINED)
#include <Modloader/app/structs/LightCullingSystem_LightCullingGroupId__Enum.h>
#if defined(IL2CPP_STRUCT_LightCullingSystem_LightCullingGroupId__Enum_DEFINED)
#define IL2CPP_STRUCT_LightCullingSystem_LightCullingConfigPerType_DEFINED
struct LightCullingSystem_LightCullingConfigPerType {
    LightCullingSystem_LightCullingGroupId__Enum Id;

    bool Enabled;
    int32_t MaxAmount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightCullingSystem_LightCullingConfigPerType_FWDDECL)
#define IL2CPP_STRUCT_LightCullingSystem_LightCullingConfigPerType_FWDDECL
#endif
#undef IL2CPP_STRUCT_LightCullingSystem_LightCullingConfigPerType_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCullingSystem_LightCullingConfigPerType_DEFINED) && !defined(IL2CPP_STRUCT_LightCullingSystem_LightCullingConfigPerType_FWDDECL)
#include <Modloader/app/structs/LightCullingSystem_LightCullingConfigPerType.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCullingSystem_LightCullingConfigPerType.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
