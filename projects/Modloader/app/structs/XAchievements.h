#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XAchievements_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XAchievements_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAchievements_DEFINED)
#include <Modloader/app/structs/XAchievements__Fields.h>
#if defined(IL2CPP_STRUCT_XAchievements__Fields_DEFINED)
#define IL2CPP_STRUCT_XAchievements_DEFINED
struct XAchievements__Class;
struct XAchievements {
    struct XAchievements__Class* klass;
    MonitorData* monitor;
    struct XAchievements__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XAchievements_FWDDECL)
#define IL2CPP_STRUCT_XAchievements_FWDDECL
#include <Modloader/app/structs/XAchievements__Class.h>
#endif
#undef IL2CPP_STRUCT_XAchievements_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAchievements_DEFINED) && !defined(IL2CPP_STRUCT_XAchievements_FWDDECL)
#include <Modloader/app/structs/XAchievements.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XAchievements.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
