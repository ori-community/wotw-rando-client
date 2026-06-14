#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectInsideZoneChecker_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectInsideZoneChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectInsideZoneChecker_DEFINED)
#include <Modloader/app/structs/ObjectInsideZoneChecker__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectInsideZoneChecker__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectInsideZoneChecker_DEFINED
struct ObjectInsideZoneChecker__Class;
struct ObjectInsideZoneChecker {
    struct ObjectInsideZoneChecker__Class* klass;
    MonitorData* monitor;
    struct ObjectInsideZoneChecker__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectInsideZoneChecker_FWDDECL)
#define IL2CPP_STRUCT_ObjectInsideZoneChecker_FWDDECL
#include <Modloader/app/structs/ObjectInsideZoneChecker__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectInsideZoneChecker_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectInsideZoneChecker_DEFINED) && !defined(IL2CPP_STRUCT_ObjectInsideZoneChecker_FWDDECL)
#include <Modloader/app/structs/ObjectInsideZoneChecker.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectInsideZoneChecker.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
