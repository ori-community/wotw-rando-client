#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberDofCache_DOFBucket__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberDofCache_DOFBucket__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberDofCache_DOFBucket__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_UberDofCache_DOFBucket__Fields_DEFINED
struct UberDofCacheDictionary;
struct __declspec(align(8)) UberDofCache_DOFBucket__Fields {
    struct UberDofCacheDictionary* m_textureCache;
    struct Vector2 Blur;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberDofCache_DOFBucket__Fields_FWDDECL)
#define IL2CPP_STRUCT_UberDofCache_DOFBucket__Fields_FWDDECL
#include <Modloader/app/structs/UberDofCacheDictionary.h>
#endif
#undef IL2CPP_STRUCT_UberDofCache_DOFBucket__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberDofCache_DOFBucket__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UberDofCache_DOFBucket__Fields_FWDDECL)
#include <Modloader/app/structs/UberDofCache_DOFBucket__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberDofCache_DOFBucket__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
