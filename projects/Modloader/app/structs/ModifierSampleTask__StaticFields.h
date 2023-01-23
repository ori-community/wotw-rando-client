#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ModifierSampleTask__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ModifierSampleTask__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierSampleTask__StaticFields_DEFINED)
#define IL2CPP_STRUCT_ModifierSampleTask__StaticFields_DEFINED
struct RenderTexture;
struct ModifierSampleTask__StaticFields {
    int32_t m_resIndex;
    struct RenderTexture* s_rt;
};
#endif
#if !defined(IL2CPP_STRUCT_ModifierSampleTask__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ModifierSampleTask__StaticFields_FWDDECL
#include <Modloader/app/structs/RenderTexture.h>
#endif
#undef IL2CPP_STRUCT_ModifierSampleTask__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ModifierSampleTask__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ModifierSampleTask__StaticFields_FWDDECL)
#include <Modloader/app/structs/ModifierSampleTask__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ModifierSampleTask__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
