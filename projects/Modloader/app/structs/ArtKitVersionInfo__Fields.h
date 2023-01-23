#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArtKitVersionInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArtKitVersionInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtKitVersionInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_ArtKitVersionInfo__Fields_DEFINED
struct __declspec(align(8)) ArtKitVersionInfo__Fields {
    int32_t VersionNumber;
    int64_t Timestamp;
};
#endif
#if !defined(IL2CPP_STRUCT_ArtKitVersionInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_ArtKitVersionInfo__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ArtKitVersionInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArtKitVersionInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ArtKitVersionInfo__Fields_FWDDECL)
#include <Modloader/app/structs/ArtKitVersionInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArtKitVersionInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
