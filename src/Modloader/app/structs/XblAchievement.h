#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XblAchievement_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XblAchievement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievement_DEFINED)
#include <Modloader/app/structs/XblAchievement__Fields.h>
#if defined(IL2CPP_STRUCT_XblAchievement__Fields_DEFINED)
#define IL2CPP_STRUCT_XblAchievement_DEFINED
struct XblAchievement__Class;
struct XblAchievement {
    struct XblAchievement__Class* klass;
    MonitorData* monitor;
    struct XblAchievement__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XblAchievement_FWDDECL)
#define IL2CPP_STRUCT_XblAchievement_FWDDECL
#include <Modloader/app/structs/XblAchievement__Class.h>
#endif
#undef IL2CPP_STRUCT_XblAchievement_INITIALIZING
#if !defined(IL2CPP_STRUCT_XblAchievement_DEFINED) && !defined(IL2CPP_STRUCT_XblAchievement_FWDDECL)
#include <Modloader/app/structs/XblAchievement.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XblAchievement.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
