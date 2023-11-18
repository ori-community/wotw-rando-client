#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TeamCityHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TeamCityHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeamCityHelper_DEFINED)
#define IL2CPP_STRUCT_TeamCityHelper_DEFINED
struct TeamCityHelper__Class;
struct TeamCityHelper {
    struct TeamCityHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TeamCityHelper_FWDDECL)
#define IL2CPP_STRUCT_TeamCityHelper_FWDDECL
#include <Modloader/app/structs/TeamCityHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_TeamCityHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_TeamCityHelper_DEFINED) && !defined(IL2CPP_STRUCT_TeamCityHelper_FWDDECL)
#include <Modloader/app/structs/TeamCityHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TeamCityHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
