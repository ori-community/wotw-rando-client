#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ApplyPhysicalManagerState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ApplyPhysicalManagerState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyPhysicalManagerState_DEFINED)
#include <Modloader/app/structs/ApplyPhysicalManagerState__Fields.h>
#if defined(IL2CPP_STRUCT_ApplyPhysicalManagerState__Fields_DEFINED)
#define IL2CPP_STRUCT_ApplyPhysicalManagerState_DEFINED
struct ApplyPhysicalManagerState__Class;
struct ApplyPhysicalManagerState {
    struct ApplyPhysicalManagerState__Class* klass;
    MonitorData* monitor;
    struct ApplyPhysicalManagerState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ApplyPhysicalManagerState_FWDDECL)
#define IL2CPP_STRUCT_ApplyPhysicalManagerState_FWDDECL
#include <Modloader/app/structs/ApplyPhysicalManagerState__Class.h>
#endif
#undef IL2CPP_STRUCT_ApplyPhysicalManagerState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ApplyPhysicalManagerState_DEFINED) && !defined(IL2CPP_STRUCT_ApplyPhysicalManagerState_FWDDECL)
#include <Modloader/app/structs/ApplyPhysicalManagerState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ApplyPhysicalManagerState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
