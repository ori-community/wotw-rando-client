#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Sound__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Sound__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sound__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Sound__StaticFields_DEFINED
struct GameObject;
struct SoundManager;
struct Sound__StaticFields {
    bool AllSoundsDisabled;
    struct GameObject* s_audioObjectsParent;
    struct SoundManager* s_soundManager;
    struct GameObject* s_oneShotPrefab;
    struct GameObject* s_loopingPrefab;
    bool isSoundLogEnabled;
    bool isPinkBoxesEnabled;
    struct GameObject* m_soundLog;
};
#endif
#if !defined(IL2CPP_STRUCT_Sound__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Sound__StaticFields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundManager.h>
#endif
#undef IL2CPP_STRUCT_Sound__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Sound__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Sound__StaticFields_FWDDECL)
#include <Modloader/app/structs/Sound__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Sound__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
