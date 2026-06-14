#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PushPullBlockJuggleAchievement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PushPullBlockJuggleAchievement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushPullBlockJuggleAchievement__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PushPullBlockJuggleAchievement__Fields_DEFINED
struct IPushable;
struct PushPullBlockJuggleAchievement__Fields {
    struct MonoBehaviour__Fields _;
    struct IPushable* m_pushPullBlock;
    int32_t m_bashedInAirCount;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PushPullBlockJuggleAchievement__Fields_FWDDECL)
#define IL2CPP_STRUCT_PushPullBlockJuggleAchievement__Fields_FWDDECL
#include <Modloader/app/structs/IPushable.h>
#endif
#undef IL2CPP_STRUCT_PushPullBlockJuggleAchievement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushPullBlockJuggleAchievement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PushPullBlockJuggleAchievement__Fields_FWDDECL)
#include <Modloader/app/structs/PushPullBlockJuggleAchievement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PushPullBlockJuggleAchievement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
