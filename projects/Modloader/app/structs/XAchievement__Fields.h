#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XAchievement__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XAchievement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAchievement__Fields_DEFINED)
#define IL2CPP_STRUCT_XAchievement__Fields_DEFINED
struct String;
struct XProgression;
struct __declspec(align(8)) XAchievement__Fields {
    struct String* id;
    struct String* name;
    struct String* progressState;
    struct XProgression* progression;
};
#endif
#if !defined(IL2CPP_STRUCT_XAchievement__Fields_FWDDECL)
#define IL2CPP_STRUCT_XAchievement__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XProgression.h>
#endif
#undef IL2CPP_STRUCT_XAchievement__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAchievement__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XAchievement__Fields_FWDDECL)
#include <Modloader/app/structs/XAchievement__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XAchievement__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
