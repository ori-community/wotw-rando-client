#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ManifestEnvelope_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ManifestEnvelope_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManifestEnvelope_DEFINED)
#include <Modloader/app/structs/ManifestEnvelope_ManifestFormats__Enum.h>
#if defined(IL2CPP_STRUCT_ManifestEnvelope_ManifestFormats__Enum_DEFINED)
#define IL2CPP_STRUCT_ManifestEnvelope_DEFINED
struct ManifestEnvelope {
    ManifestEnvelope_ManifestFormats__Enum Format;

    uint8_t MajorVersion;
    uint8_t MinorVersion;
    uint8_t Magic;
    uint16_t TotalChunks;
    uint16_t ChunkNumber;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ManifestEnvelope_FWDDECL)
#define IL2CPP_STRUCT_ManifestEnvelope_FWDDECL
#endif
#undef IL2CPP_STRUCT_ManifestEnvelope_INITIALIZING
#if !defined(IL2CPP_STRUCT_ManifestEnvelope_DEFINED) && !defined(IL2CPP_STRUCT_ManifestEnvelope_FWDDECL)
#include <Modloader/app/structs/ManifestEnvelope.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ManifestEnvelope.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
