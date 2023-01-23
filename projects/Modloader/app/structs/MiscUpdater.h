#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MiscUpdater_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MiscUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_MiscUpdater_DEFINED)
#include <Modloader/app/structs/MiscUpdater__Fields.h>
#if defined(IL2CPP_STRUCT_MiscUpdater__Fields_DEFINED)
#define IL2CPP_STRUCT_MiscUpdater_DEFINED
struct MiscUpdater__Class;
struct MiscUpdater {
    struct MiscUpdater__Class* klass;
    MonitorData* monitor;
    struct MiscUpdater__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MiscUpdater_FWDDECL)
#define IL2CPP_STRUCT_MiscUpdater_FWDDECL
#include <Modloader/app/structs/MiscUpdater__Class.h>
#endif
#undef IL2CPP_STRUCT_MiscUpdater_INITIALIZING
#if !defined(IL2CPP_STRUCT_MiscUpdater_DEFINED) && !defined(IL2CPP_STRUCT_MiscUpdater_FWDDECL)
#include <Modloader/app/structs/MiscUpdater.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MiscUpdater.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
