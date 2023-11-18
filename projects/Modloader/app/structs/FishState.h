#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishState_DEFINED)
#include <Modloader/app/structs/FishState__Fields.h>
#if defined(IL2CPP_STRUCT_FishState__Fields_DEFINED)
#define IL2CPP_STRUCT_FishState_DEFINED
struct FishState__Class;
struct FishState {
    struct FishState__Class* klass;
    MonitorData* monitor;
    struct FishState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishState_FWDDECL)
#define IL2CPP_STRUCT_FishState_FWDDECL
#include <Modloader/app/structs/FishState__Class.h>
#endif
#undef IL2CPP_STRUCT_FishState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishState_DEFINED) && !defined(IL2CPP_STRUCT_FishState_FWDDECL)
#include <Modloader/app/structs/FishState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
