#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IAchievementData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IAchievementData_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAchievementData_DEFINED)
#define IL2CPP_STRUCT_IAchievementData_DEFINED
struct IAchievementData__Class;
struct IAchievementData {
    struct IAchievementData__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IAchievementData_FWDDECL)
#define IL2CPP_STRUCT_IAchievementData_FWDDECL
#include <Modloader/app/structs/IAchievementData__Class.h>
#endif
#undef IL2CPP_STRUCT_IAchievementData_INITIALIZING
#if !defined(IL2CPP_STRUCT_IAchievementData_DEFINED) && !defined(IL2CPP_STRUCT_IAchievementData_FWDDECL)
#include <Modloader/app/structs/IAchievementData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IAchievementData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
