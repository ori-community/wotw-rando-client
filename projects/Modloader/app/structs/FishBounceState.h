#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishBounceState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishBounceState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishBounceState_DEFINED)
#include <Modloader/app/structs/FishBounceState__Fields.h>
#if defined(IL2CPP_STRUCT_FishBounceState__Fields_DEFINED)
#define IL2CPP_STRUCT_FishBounceState_DEFINED
struct FishBounceState__Class;
struct FishBounceState {
    struct FishBounceState__Class* klass;
    MonitorData* monitor;
    struct FishBounceState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishBounceState_FWDDECL)
#define IL2CPP_STRUCT_FishBounceState_FWDDECL
#include <Modloader/app/structs/FishBounceState__Class.h>
#endif
#undef IL2CPP_STRUCT_FishBounceState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishBounceState_DEFINED) && !defined(IL2CPP_STRUCT_FishBounceState_FWDDECL)
#include <Modloader/app/structs/FishBounceState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishBounceState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
