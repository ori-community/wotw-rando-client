#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingRetreatState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingRetreatState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingRetreatState_DEFINED)
#include <Modloader/app/structs/RammingRetreatState__Fields.h>
#if defined(IL2CPP_STRUCT_RammingRetreatState__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingRetreatState_DEFINED
struct RammingRetreatState__Class;
struct RammingRetreatState {
    struct RammingRetreatState__Class* klass;
    MonitorData* monitor;
    struct RammingRetreatState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RammingRetreatState_FWDDECL)
#define IL2CPP_STRUCT_RammingRetreatState_FWDDECL
#include <Modloader/app/structs/RammingRetreatState__Class.h>
#endif
#undef IL2CPP_STRUCT_RammingRetreatState_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingRetreatState_DEFINED) && !defined(IL2CPP_STRUCT_RammingRetreatState_FWDDECL)
#include <Modloader/app/structs/RammingRetreatState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingRetreatState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
