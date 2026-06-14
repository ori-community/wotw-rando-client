#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeltaTimeManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeltaTimeManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeltaTimeManager_DEFINED)
#include <Modloader/app/structs/DeltaTimeManager__Fields.h>
#if defined(IL2CPP_STRUCT_DeltaTimeManager__Fields_DEFINED)
#define IL2CPP_STRUCT_DeltaTimeManager_DEFINED
struct DeltaTimeManager__Class;
struct DeltaTimeManager {
    struct DeltaTimeManager__Class* klass;
    MonitorData* monitor;
    struct DeltaTimeManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeltaTimeManager_FWDDECL)
#define IL2CPP_STRUCT_DeltaTimeManager_FWDDECL
#include <Modloader/app/structs/DeltaTimeManager__Class.h>
#endif
#undef IL2CPP_STRUCT_DeltaTimeManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeltaTimeManager_DEFINED) && !defined(IL2CPP_STRUCT_DeltaTimeManager_FWDDECL)
#include <Modloader/app/structs/DeltaTimeManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeltaTimeManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
