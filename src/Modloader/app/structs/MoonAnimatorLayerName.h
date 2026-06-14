#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonAnimatorLayerName_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonAnimatorLayerName_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorLayerName_DEFINED)
#define IL2CPP_STRUCT_MoonAnimatorLayerName_DEFINED
struct String;
struct MoonAnimatorLayerName {
    struct String* m_displayName;
    int32_t m_uid;
};
#endif
#if !defined(IL2CPP_STRUCT_MoonAnimatorLayerName_FWDDECL)
#define IL2CPP_STRUCT_MoonAnimatorLayerName_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_MoonAnimatorLayerName_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonAnimatorLayerName_DEFINED) && !defined(IL2CPP_STRUCT_MoonAnimatorLayerName_FWDDECL)
#include <Modloader/app/structs/MoonAnimatorLayerName.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonAnimatorLayerName.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
