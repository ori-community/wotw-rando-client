#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkWwiseInitializationSettings__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkWwiseInitializationSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWwiseInitializationSettings__StaticFields_DEFINED)
#define IL2CPP_STRUCT_AkWwiseInitializationSettings__StaticFields_DEFINED
struct String__Array;
struct AkWwiseInitializationSettings;
struct AkBasePlatformSettings;
struct AkWwiseInitializationSettings__StaticFields {
    struct String__Array* AllGlobalValues;
    struct AkWwiseInitializationSettings* m_Instance;
    struct AkBasePlatformSettings* m_ActivePlatformSettings;
};
#endif
#if !defined(IL2CPP_STRUCT_AkWwiseInitializationSettings__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_AkWwiseInitializationSettings__StaticFields_FWDDECL
#include <Modloader/app/structs/AkBasePlatformSettings.h>
#include <Modloader/app/structs/AkWwiseInitializationSettings.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_AkWwiseInitializationSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkWwiseInitializationSettings__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_AkWwiseInitializationSettings__StaticFields_FWDDECL)
#include <Modloader/app/structs/AkWwiseInitializationSettings__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkWwiseInitializationSettings__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
