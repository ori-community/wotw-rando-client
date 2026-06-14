#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishBashedState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishBashedState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishBashedState_DEFINED)
#include <Modloader/app/structs/FishBashedState__Fields.h>
#if defined(IL2CPP_STRUCT_FishBashedState__Fields_DEFINED)
#define IL2CPP_STRUCT_FishBashedState_DEFINED
struct FishBashedState__Class;
struct FishBashedState {
    struct FishBashedState__Class* klass;
    MonitorData* monitor;
    struct FishBashedState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishBashedState_FWDDECL)
#define IL2CPP_STRUCT_FishBashedState_FWDDECL
#include <Modloader/app/structs/FishBashedState__Class.h>
#endif
#undef IL2CPP_STRUCT_FishBashedState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishBashedState_DEFINED) && !defined(IL2CPP_STRUCT_FishBashedState_FWDDECL)
#include <Modloader/app/structs/FishBashedState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishBashedState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
