#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalAchievements_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalAchievements_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalAchievements_DEFINED)
#include <Modloader/app/structs/XalAchievements__Fields.h>
#if defined(IL2CPP_STRUCT_XalAchievements__Fields_DEFINED)
#define IL2CPP_STRUCT_XalAchievements_DEFINED
struct XalAchievements__Class;
struct XalAchievements {
    struct XalAchievements__Class* klass;
    MonitorData* monitor;
    struct XalAchievements__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XalAchievements_FWDDECL)
#define IL2CPP_STRUCT_XalAchievements_FWDDECL
#include <Modloader/app/structs/XalAchievements__Class.h>
#endif
#undef IL2CPP_STRUCT_XalAchievements_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalAchievements_DEFINED) && !defined(IL2CPP_STRUCT_XalAchievements_FWDDECL)
#include <Modloader/app/structs/XalAchievements.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalAchievements.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
