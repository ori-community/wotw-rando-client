#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinInput__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInput__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinInput__Fields_DEFINED
struct Input_InputButtonProcessor;
struct SeinCharacter;
struct __declspec(align(8)) SeinInput__Fields {
    struct Input_InputButtonProcessor* Down;
    struct Input_InputButtonProcessor* Left;
    struct Input_InputButtonProcessor* Right;
    struct Input_InputButtonProcessor* Up;
    struct SeinCharacter* m_sein;
};
#endif
#if !defined(IL2CPP_STRUCT_SeinInput__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinInput__Fields_FWDDECL
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/SeinCharacter.h>
#endif
#undef IL2CPP_STRUCT_SeinInput__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinInput__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinInput__Fields_FWDDECL)
#include <Modloader/app/structs/SeinInput__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinInput__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
