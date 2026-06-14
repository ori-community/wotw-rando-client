#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StateInfoIndex__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StateInfoIndex__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateInfoIndex__Enum_DEFINED)
#define IL2CPP_STRUCT_StateInfoIndex__Enum_DEFINED
enum class StateInfoIndex__Enum : int32_t {
    CurrentState = 0x00000000,
    NextState = 0x00000001,
    ExitState = 0x00000002,
    InterruptedState = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_StateInfoIndex__Enum_FWDDECL)
#define IL2CPP_STRUCT_StateInfoIndex__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_StateInfoIndex__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_StateInfoIndex__Enum_DEFINED) && !defined(IL2CPP_STRUCT_StateInfoIndex__Enum_FWDDECL)
#include <Modloader/app/structs/StateInfoIndex__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StateInfoIndex__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
