#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameSessionRecord__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameSessionRecord__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSessionRecord__Fields_DEFINED)
#define IL2CPP_STRUCT_GameSessionRecord__Fields_DEFINED
struct EnvironmentInfo;
struct String__Array;
struct __declspec(align(8)) GameSessionRecord__Fields {
    struct EnvironmentInfo* m_environmentInfo;
    struct String__Array* m_levelsPlayed;
};
#endif
#if !defined(IL2CPP_STRUCT_GameSessionRecord__Fields_FWDDECL)
#define IL2CPP_STRUCT_GameSessionRecord__Fields_FWDDECL
#include <Modloader/app/structs/EnvironmentInfo.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_GameSessionRecord__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSessionRecord__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GameSessionRecord__Fields_FWDDECL)
#include <Modloader/app/structs/GameSessionRecord__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameSessionRecord__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
