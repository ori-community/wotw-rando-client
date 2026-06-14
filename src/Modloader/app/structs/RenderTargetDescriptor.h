#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderTargetDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderTargetDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTargetDescriptor_DEFINED)
#include <Modloader/app/structs/FilterMode__Enum.h>
#include <Modloader/app/structs/RenderTargetType__Enum.h>
#include <Modloader/app/structs/RenderTextureDescriptor.h>
#if defined(IL2CPP_STRUCT_RenderTargetType__Enum_DEFINED) && defined(IL2CPP_STRUCT_RenderTextureDescriptor_DEFINED) && defined(IL2CPP_STRUCT_FilterMode__Enum_DEFINED)
#define IL2CPP_STRUCT_RenderTargetDescriptor_DEFINED
struct String;
struct RenderTexture;
struct RenderTargetDescriptor {
    RenderTargetType__Enum type;

    struct String* name;
    struct RenderTextureDescriptor desc;
    FilterMode__Enum filterMode;

    struct RenderTexture* external;
    bool drsUsed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderTargetDescriptor_FWDDECL)
#define IL2CPP_STRUCT_RenderTargetDescriptor_FWDDECL
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RenderTargetDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTargetDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_RenderTargetDescriptor_FWDDECL)
#include <Modloader/app/structs/RenderTargetDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderTargetDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
