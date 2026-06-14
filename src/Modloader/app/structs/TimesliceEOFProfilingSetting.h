#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimesliceEOFProfilingSetting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimesliceEOFProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceEOFProfilingSetting_DEFINED)
#include <Modloader/app/structs/TimesliceEOFProfilingSetting__Fields.h>
#if defined(IL2CPP_STRUCT_TimesliceEOFProfilingSetting__Fields_DEFINED)
#define IL2CPP_STRUCT_TimesliceEOFProfilingSetting_DEFINED
struct TimesliceEOFProfilingSetting__Class;
struct TimesliceEOFProfilingSetting {
    struct TimesliceEOFProfilingSetting__Class* klass;
    MonitorData* monitor;
    struct TimesliceEOFProfilingSetting__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimesliceEOFProfilingSetting_FWDDECL)
#define IL2CPP_STRUCT_TimesliceEOFProfilingSetting_FWDDECL
#include <Modloader/app/structs/TimesliceEOFProfilingSetting__Class.h>
#endif
#undef IL2CPP_STRUCT_TimesliceEOFProfilingSetting_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimesliceEOFProfilingSetting_DEFINED) && !defined(IL2CPP_STRUCT_TimesliceEOFProfilingSetting_FWDDECL)
#include <Modloader/app/structs/TimesliceEOFProfilingSetting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimesliceEOFProfilingSetting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
