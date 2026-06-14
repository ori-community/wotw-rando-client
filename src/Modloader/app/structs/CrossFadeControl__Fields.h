#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrossFadeControl__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrossFadeControl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossFadeControl__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_CrossFadeControl__Fields_DEFINED
struct GameObject;
struct Material;
struct RenderTexture;
struct CrossFadeControl__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject* Target1;
    struct GameObject* Target2;
    struct Material* Material;
    struct RenderTexture* Buf;
    int32_t m_frameCounter;
    int32_t m_currentFrame;
    float tweenTime;
    struct Color settingFrom;
    struct Color settingTo;
    int32_t ColourBindID;
    int32_t m_prevFrame;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrossFadeControl__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrossFadeControl__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>
#endif
#undef IL2CPP_STRUCT_CrossFadeControl__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrossFadeControl__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrossFadeControl__Fields_FWDDECL)
#include <Modloader/app/structs/CrossFadeControl__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrossFadeControl__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
