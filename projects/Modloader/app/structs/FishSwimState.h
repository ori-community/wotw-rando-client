#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishSwimState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishSwimState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishSwimState_DEFINED)
#include <Modloader/app/structs/FishSwimState__Fields.h>
#if defined(IL2CPP_STRUCT_FishSwimState__Fields_DEFINED)
#define IL2CPP_STRUCT_FishSwimState_DEFINED
struct FishSwimState__Class;
struct FishSwimState {
    struct FishSwimState__Class* klass;
    MonitorData* monitor;
    struct FishSwimState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishSwimState_FWDDECL)
#define IL2CPP_STRUCT_FishSwimState_FWDDECL
#include <Modloader/app/structs/FishSwimState__Class.h>
#endif
#undef IL2CPP_STRUCT_FishSwimState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishSwimState_DEFINED) && !defined(IL2CPP_STRUCT_FishSwimState_FWDDECL)
#include <Modloader/app/structs/FishSwimState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishSwimState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
