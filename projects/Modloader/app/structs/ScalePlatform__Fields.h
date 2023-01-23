#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScalePlatform__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScalePlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScalePlatform__Fields_DEFINED)
#include <Modloader/app/structs/PlatformImplementation__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_PlatformImplementation__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_ScalePlatform__Fields_DEFINED
struct Transform;
struct ScalePlatform__Fields {
    struct PlatformImplementation__Fields _;
    struct Transform* PlatformObject;
    struct Vector3 m_startScale;
    bool m_hasInitialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScalePlatform__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScalePlatform__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ScalePlatform__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScalePlatform__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScalePlatform__Fields_FWDDECL)
#include <Modloader/app/structs/ScalePlatform__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScalePlatform__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
