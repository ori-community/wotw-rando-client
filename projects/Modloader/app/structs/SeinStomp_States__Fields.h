#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinStomp_States__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinStomp_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStomp_States__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinStomp_States__Fields_DEFINED
struct IState_2;
struct __declspec(align(8)) SeinStomp_States__Fields {
    struct IState_2* Inactive;
    struct IState_2* StompDown;
    struct IState_2* StompIdle;
    struct IState_2* StompFinished;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinStomp_States__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinStomp_States__Fields_FWDDECL
#include <Modloader/app/structs/IState_2.h>
#endif
#undef IL2CPP_STRUCT_SeinStomp_States__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinStomp_States__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinStomp_States__Fields_FWDDECL)
#include <Modloader/app/structs/SeinStomp_States__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinStomp_States__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
