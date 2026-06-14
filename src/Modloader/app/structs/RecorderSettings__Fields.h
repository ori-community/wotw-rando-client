#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderSettings__Fields_DEFINED
struct String;
struct __declspec(align(8)) RecorderSettings__Fields {
    struct String* m_shotName;
    bool m_showInputScreen;
    bool m_dumpFrames;
    bool m_spawnEnemies;
    bool m_enableMotionBlur;
    bool m_enable120FPS;
    float PlayBackScale;
    bool ScaleEntireShot;
};
#endif
#if !defined(IL2CPP_STRUCT_RecorderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecorderSettings__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RecorderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecorderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/RecorderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
