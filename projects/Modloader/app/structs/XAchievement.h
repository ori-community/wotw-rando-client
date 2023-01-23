#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XAchievement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XAchievement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAchievement_DEFINED)
#include <Modloader/app/structs/XAchievement__Fields.h>
#if defined(IL2CPP_STRUCT_XAchievement__Fields_DEFINED)
#define IL2CPP_STRUCT_XAchievement_DEFINED
struct XAchievement__Class;
struct XAchievement {
    struct XAchievement__Class* klass;
    MonitorData* monitor;
    struct XAchievement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XAchievement_FWDDECL)
#define IL2CPP_STRUCT_XAchievement_FWDDECL
#include <Modloader/app/structs/XAchievement__Class.h>
#endif
#undef IL2CPP_STRUCT_XAchievement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XAchievement_DEFINED) && !defined(IL2CPP_STRUCT_XAchievement_FWDDECL)
#include <Modloader/app/structs/XAchievement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XAchievement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
