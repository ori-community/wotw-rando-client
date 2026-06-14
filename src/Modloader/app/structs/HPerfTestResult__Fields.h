#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HPerfTestResult__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HPerfTestResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HPerfTestResult__Fields_DEFINED)
#include <Modloader/app/structs/PerfTestResult__Fields.h>
#if defined(IL2CPP_STRUCT_PerfTestResult__Fields_DEFINED)
#define IL2CPP_STRUCT_HPerfTestResult__Fields_DEFINED
struct String;
struct GameObject;
struct HPerfTestResult__Fields {
    struct PerfTestResult__Fields _;
    int32_t Id;
    struct String* Path;
    struct GameObject* Target;
    int32_t ChildCount;
    double SRPGameViewTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HPerfTestResult__Fields_FWDDECL)
#define IL2CPP_STRUCT_HPerfTestResult__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HPerfTestResult__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HPerfTestResult__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HPerfTestResult__Fields_FWDDECL)
#include <Modloader/app/structs/HPerfTestResult__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HPerfTestResult__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
