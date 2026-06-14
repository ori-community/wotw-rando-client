#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishFlopState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishFlopState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishFlopState_DEFINED)
#include <Modloader/app/structs/FishFlopState__Fields.h>
#if defined(IL2CPP_STRUCT_FishFlopState__Fields_DEFINED)
#define IL2CPP_STRUCT_FishFlopState_DEFINED
struct FishFlopState__Class;
struct FishFlopState {
    struct FishFlopState__Class* klass;
    MonitorData* monitor;
    struct FishFlopState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FishFlopState_FWDDECL)
#define IL2CPP_STRUCT_FishFlopState_FWDDECL
#include <Modloader/app/structs/FishFlopState__Class.h>
#endif
#undef IL2CPP_STRUCT_FishFlopState_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishFlopState_DEFINED) && !defined(IL2CPP_STRUCT_FishFlopState_FWDDECL)
#include <Modloader/app/structs/FishFlopState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishFlopState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
