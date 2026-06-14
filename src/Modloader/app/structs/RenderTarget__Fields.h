#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RenderTarget__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RenderTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTarget__Fields_DEFINED)
#include <Modloader/app/structs/Int2.h>
#include <Modloader/app/structs/RenderTargetDescriptor.h>
#include <Modloader/app/structs/RenderTargetIdentifier.h>
#include <Modloader/app/structs/RenderTarget_State__Enum.h>
#if defined(IL2CPP_STRUCT_RenderTargetDescriptor_DEFINED) && defined(IL2CPP_STRUCT_RenderTarget_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Int2_DEFINED) && defined(IL2CPP_STRUCT_RenderTargetIdentifier_DEFINED)
#define IL2CPP_STRUCT_RenderTarget__Fields_DEFINED
struct RenderTexture;
struct __declspec(align(8)) RenderTarget__Fields {
    struct RenderTargetDescriptor desc;
    RenderTarget_State__Enum state;

    struct RenderTargetDescriptor current;
    struct Int2 acquiredSize;
    struct RenderTexture* _tex_k__BackingField;
    int32_t _nameID_k__BackingField;
    struct RenderTargetIdentifier _id_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RenderTarget__Fields_FWDDECL)
#define IL2CPP_STRUCT_RenderTarget__Fields_FWDDECL
#include <Modloader/app/structs/RenderTexture.h>
#endif
#undef IL2CPP_STRUCT_RenderTarget__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RenderTarget__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RenderTarget__Fields_FWDDECL)
#include <Modloader/app/structs/RenderTarget__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RenderTarget__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
