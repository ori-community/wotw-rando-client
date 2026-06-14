#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LowResolutionProfilingSetting__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LowResolutionProfilingSetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LowResolutionProfilingSetting__Fields_DEFINED)
#include <Modloader/app/structs/SimpleBoolToggleProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleBoolToggleProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_LowResolutionProfilingSetting__Fields_DEFINED
struct LowResolutionProfilingSetting__Fields {
    struct SimpleBoolToggleProfilingSetting__Fields _;
    int32_t m_defaultDrsX;
    int32_t m_defaultDRSY;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LowResolutionProfilingSetting__Fields_FWDDECL)
#define IL2CPP_STRUCT_LowResolutionProfilingSetting__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_LowResolutionProfilingSetting__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LowResolutionProfilingSetting__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LowResolutionProfilingSetting__Fields_FWDDECL)
#include <Modloader/app/structs/LowResolutionProfilingSetting__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LowResolutionProfilingSetting__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
