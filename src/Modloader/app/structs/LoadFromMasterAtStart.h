#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadFromMasterAtStart_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadFromMasterAtStart_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadFromMasterAtStart_DEFINED)
#include <Modloader/app/structs/LoadFromMasterAtStart__Fields.h>
#if defined(IL2CPP_STRUCT_LoadFromMasterAtStart__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadFromMasterAtStart_DEFINED
struct LoadFromMasterAtStart__Class;
struct LoadFromMasterAtStart {
    struct LoadFromMasterAtStart__Class* klass;
    MonitorData* monitor;
    struct LoadFromMasterAtStart__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadFromMasterAtStart_FWDDECL)
#define IL2CPP_STRUCT_LoadFromMasterAtStart_FWDDECL
#include <Modloader/app/structs/LoadFromMasterAtStart__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadFromMasterAtStart_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadFromMasterAtStart_DEFINED) && !defined(IL2CPP_STRUCT_LoadFromMasterAtStart_FWDDECL)
#include <Modloader/app/structs/LoadFromMasterAtStart.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadFromMasterAtStart.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
