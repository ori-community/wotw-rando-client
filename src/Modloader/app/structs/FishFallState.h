#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishFallState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishFallState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishFallState_DEFINED)
#include <Modloader/app/structs/FishFallState__Fields.h>
#if defined(IL2CPP_STRUCT_FishFallState__Fields_DEFINED)
#define IL2CPP_STRUCT_FishFallState_DEFINED
struct FishFallState__Class;
struct FishFallState {
    struct FishFallState__Class* klass;
    MonitorData* monitor;
    struct FishFallState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishFallState_FWDDECL)
#define IL2CPP_STRUCT_FishFallState_FWDDECL
#include <Modloader/app/structs/FishFallState__Class.h>
#endif
#undef IL2CPP_STRUCT_FishFallState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishFallState_DEFINED) && !defined(IL2CPP_STRUCT_FishFallState_FWDDECL)
#include <Modloader/app/structs/FishFallState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishFallState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
