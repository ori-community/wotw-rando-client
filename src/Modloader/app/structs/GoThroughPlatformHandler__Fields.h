#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GoThroughPlatformHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GoThroughPlatformHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoThroughPlatformHandler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GoThroughPlatformHandler__Fields_DEFINED
struct IGoThroughPlatformTester;
struct ICharacter;
struct GoThroughPlatformHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct IGoThroughPlatformTester* m_tester;
    int32_t m_playerLayer;
    int32_t m_platformLayer;
    struct ICharacter* m_character;
    float m_disabledTimeRemaing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GoThroughPlatformHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_GoThroughPlatformHandler__Fields_FWDDECL
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/IGoThroughPlatformTester.h>
#endif
#undef IL2CPP_STRUCT_GoThroughPlatformHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GoThroughPlatformHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GoThroughPlatformHandler__Fields_FWDDECL)
#include <Modloader/app/structs/GoThroughPlatformHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GoThroughPlatformHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
